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

#include <aws/appstream/model/FleetAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetAttributeMapper
      {

        static const int VPC_CONFIGURATION_HASH = HashingUtils::HashString("VPC_CONFIGURATION");
        static const int VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH = HashingUtils::HashString("VPC_CONFIGURATION_SECURITY_GROUP_IDS");


        FleetAttribute GetFleetAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VPC_CONFIGURATION_HASH)
          {
            return FleetAttribute::VPC_CONFIGURATION;
          }
          else if (hashCode == VPC_CONFIGURATION_SECURITY_GROUP_IDS_HASH)
          {
            return FleetAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetAttribute>(hashCode);
          }

          return FleetAttribute::NOT_SET;
        }

        Aws::String GetNameForFleetAttribute(FleetAttribute enumValue)
        {
          switch(enumValue)
          {
          case FleetAttribute::VPC_CONFIGURATION:
            return "VPC_CONFIGURATION";
          case FleetAttribute::VPC_CONFIGURATION_SECURITY_GROUP_IDS:
            return "VPC_CONFIGURATION_SECURITY_GROUP_IDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FleetAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
