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

#include <aws/lambda/model/ProvisionedConcurrencyConfigListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

ProvisionedConcurrencyConfigListItem::ProvisionedConcurrencyConfigListItem() : 
    m_functionArnHasBeenSet(false),
    m_requestedProvisionedConcurrentExecutions(0),
    m_requestedProvisionedConcurrentExecutionsHasBeenSet(false),
    m_availableProvisionedConcurrentExecutions(0),
    m_availableProvisionedConcurrentExecutionsHasBeenSet(false),
    m_allocatedProvisionedConcurrentExecutions(0),
    m_allocatedProvisionedConcurrentExecutionsHasBeenSet(false),
    m_status(ProvisionedConcurrencyStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

ProvisionedConcurrencyConfigListItem::ProvisionedConcurrencyConfigListItem(JsonView jsonValue) : 
    m_functionArnHasBeenSet(false),
    m_requestedProvisionedConcurrentExecutions(0),
    m_requestedProvisionedConcurrentExecutionsHasBeenSet(false),
    m_availableProvisionedConcurrentExecutions(0),
    m_availableProvisionedConcurrentExecutionsHasBeenSet(false),
    m_allocatedProvisionedConcurrentExecutions(0),
    m_allocatedProvisionedConcurrentExecutionsHasBeenSet(false),
    m_status(ProvisionedConcurrencyStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedConcurrencyConfigListItem& ProvisionedConcurrencyConfigListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedProvisionedConcurrentExecutions"))
  {
    m_requestedProvisionedConcurrentExecutions = jsonValue.GetInteger("RequestedProvisionedConcurrentExecutions");

    m_requestedProvisionedConcurrentExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableProvisionedConcurrentExecutions"))
  {
    m_availableProvisionedConcurrentExecutions = jsonValue.GetInteger("AvailableProvisionedConcurrentExecutions");

    m_availableProvisionedConcurrentExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedProvisionedConcurrentExecutions"))
  {
    m_allocatedProvisionedConcurrentExecutions = jsonValue.GetInteger("AllocatedProvisionedConcurrentExecutions");

    m_allocatedProvisionedConcurrentExecutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProvisionedConcurrencyStatusEnumMapper::GetProvisionedConcurrencyStatusEnumForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedConcurrencyConfigListItem::Jsonize() const
{
  JsonValue payload;

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_requestedProvisionedConcurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("RequestedProvisionedConcurrentExecutions", m_requestedProvisionedConcurrentExecutions);

  }

  if(m_availableProvisionedConcurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("AvailableProvisionedConcurrentExecutions", m_availableProvisionedConcurrentExecutions);

  }

  if(m_allocatedProvisionedConcurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("AllocatedProvisionedConcurrentExecutions", m_allocatedProvisionedConcurrentExecutions);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProvisionedConcurrencyStatusEnumMapper::GetNameForProvisionedConcurrencyStatusEnum(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithString("LastModified", m_lastModified);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
