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

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API GetCampaignsRequest : public PinpointRequest
  {
  public:
    GetCampaignsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    
    inline GetCampaignsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline GetCampaignsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    
    inline GetCampaignsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

    
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    
    inline GetCampaignsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    
    inline GetCampaignsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    
    inline GetCampaignsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}

    
    inline const Aws::String& GetToken() const{ return m_token; }

    
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    
    inline GetCampaignsRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    
    inline GetCampaignsRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    
    inline GetCampaignsRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet;
    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
