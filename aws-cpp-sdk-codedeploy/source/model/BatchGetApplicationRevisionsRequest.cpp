﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codedeploy/model/BatchGetApplicationRevisionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetApplicationRevisionsRequest::BatchGetApplicationRevisionsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_revisionsHasBeenSet(false)
{
}

Aws::String BatchGetApplicationRevisionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_revisionsHasBeenSet)
  {
   Array<JsonValue> revisionsJsonList(m_revisions.size());
   for(unsigned revisionsIndex = 0; revisionsIndex < revisionsJsonList.GetLength(); ++revisionsIndex)
   {
     revisionsJsonList[revisionsIndex].AsObject(m_revisions[revisionsIndex].Jsonize());
   }
   payload.WithArray("revisions", std::move(revisionsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetApplicationRevisionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.BatchGetApplicationRevisions"));
  return headers;

}




