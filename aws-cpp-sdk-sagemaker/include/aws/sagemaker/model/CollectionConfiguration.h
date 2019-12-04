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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration information for tensor collections.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CollectionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CollectionConfiguration
  {
  public:
    CollectionConfiguration();
    CollectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CollectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the tensor collection.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline CollectionConfiguration& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline CollectionConfiguration& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the tensor collection.</p>
     */
    inline CollectionConfiguration& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCollectionParameters() const{ return m_collectionParameters; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline bool CollectionParametersHasBeenSet() const { return m_collectionParametersHasBeenSet; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline void SetCollectionParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters = value; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline void SetCollectionParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters = std::move(value); }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& WithCollectionParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetCollectionParameters(value); return *this;}

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& WithCollectionParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetCollectionParameters(std::move(value)); return *this;}

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(const Aws::String& key, const Aws::String& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(key, value); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(Aws::String&& key, const Aws::String& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(const Aws::String& key, Aws::String&& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(Aws::String&& key, Aws::String&& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(const char* key, Aws::String&& value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(Aws::String&& key, const char* value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Parameter values for the tensor collection. The allowed parameters are
     * <code>"name"</code>, <code>"include_regex"</code>,
     * <code>"reduction_config"</code>, <code>"save_config"</code>,
     * <code>"tensor_names"</code>, and <code>"save_histogram"</code>.</p>
     */
    inline CollectionConfiguration& AddCollectionParameters(const char* key, const char* value) { m_collectionParametersHasBeenSet = true; m_collectionParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_collectionParameters;
    bool m_collectionParametersHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
