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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on the deployment<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Deployment">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Deployment
  {
  public:
    Deployment();
    Deployment(const Aws::Utils::Json::JsonValue& jsonValue);
    Deployment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * Timestamp when the deployment was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * Timestamp when the deployment was created.
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * Timestamp when the deployment was created.
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * Timestamp when the deployment was created.
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * Timestamp when the deployment was created.
     */
    inline Deployment& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * Timestamp when the deployment was created.
     */
    inline Deployment& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * Timestamp when the deployment was created.
     */
    inline Deployment& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}

    /**
     * Arn of the deployment.
     */
    inline const Aws::String& GetDeploymentArn() const{ return m_deploymentArn; }

    /**
     * Arn of the deployment.
     */
    inline void SetDeploymentArn(const Aws::String& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = value; }

    /**
     * Arn of the deployment.
     */
    inline void SetDeploymentArn(Aws::String&& value) { m_deploymentArnHasBeenSet = true; m_deploymentArn = std::move(value); }

    /**
     * Arn of the deployment.
     */
    inline void SetDeploymentArn(const char* value) { m_deploymentArnHasBeenSet = true; m_deploymentArn.assign(value); }

    /**
     * Arn of the deployment.
     */
    inline Deployment& WithDeploymentArn(const Aws::String& value) { SetDeploymentArn(value); return *this;}

    /**
     * Arn of the deployment.
     */
    inline Deployment& WithDeploymentArn(Aws::String&& value) { SetDeploymentArn(std::move(value)); return *this;}

    /**
     * Arn of the deployment.
     */
    inline Deployment& WithDeploymentArn(const char* value) { SetDeploymentArn(value); return *this;}

    /**
     * Id of the deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * Id of the deployment.
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * Id of the deployment.
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * Id of the deployment.
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * Id of the deployment.
     */
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * Id of the deployment.
     */
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * Id of the deployment.
     */
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * Arn of the group for this deployment.
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * Arn of the group for this deployment.
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * Arn of the group for this deployment.
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * Arn of the group for this deployment.
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * Arn of the group for this deployment.
     */
    inline Deployment& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * Arn of the group for this deployment.
     */
    inline Deployment& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * Arn of the group for this deployment.
     */
    inline Deployment& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}

  private:
    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;
    Aws::String m_deploymentArn;
    bool m_deploymentArnHasBeenSet;
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
