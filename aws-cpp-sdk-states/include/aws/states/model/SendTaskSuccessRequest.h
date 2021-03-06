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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API SendTaskSuccessRequest : public SFNRequest
  {
  public:
    SendTaskSuccessRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline void SetTaskToken(const Aws::String& value) { m_taskTokenHasBeenSet = true; m_taskToken = value; }

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline void SetTaskToken(Aws::String&& value) { m_taskTokenHasBeenSet = true; m_taskToken = std::move(value); }

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline void SetTaskToken(const char* value) { m_taskTokenHasBeenSet = true; m_taskToken.assign(value); }

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline SendTaskSuccessRequest& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline SendTaskSuccessRequest& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}

    /**
     * <p>The token that represents this task. Task tokens are generated by the service
     * when the tasks are assigned to a worker (see GetActivityTask::taskToken).</p>
     */
    inline SendTaskSuccessRequest& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}

    /**
     * <p>The JSON output of the task.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON output of the task.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>The JSON output of the task.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>The JSON output of the task.</p>
     */
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }

    /**
     * <p>The JSON output of the task.</p>
     */
    inline SendTaskSuccessRequest& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output of the task.</p>
     */
    inline SendTaskSuccessRequest& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The JSON output of the task.</p>
     */
    inline SendTaskSuccessRequest& WithOutput(const char* value) { SetOutput(value); return *this;}

  private:
    Aws::String m_taskToken;
    bool m_taskTokenHasBeenSet;
    Aws::String m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
