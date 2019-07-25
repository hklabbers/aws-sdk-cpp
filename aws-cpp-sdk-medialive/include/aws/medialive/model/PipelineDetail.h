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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Runtime details of a pipeline when a channel is running.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PipelineDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API PipelineDetail
  {
  public:
    PipelineDetail();
    PipelineDetail(Aws::Utils::Json::JsonView jsonValue);
    PipelineDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline const Aws::String& GetActiveInputAttachmentName() const{ return m_activeInputAttachmentName; }

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline bool ActiveInputAttachmentNameHasBeenSet() const { return m_activeInputAttachmentNameHasBeenSet; }

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline void SetActiveInputAttachmentName(const Aws::String& value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName = value; }

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline void SetActiveInputAttachmentName(Aws::String&& value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName = std::move(value); }

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline void SetActiveInputAttachmentName(const char* value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName.assign(value); }

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline PipelineDetail& WithActiveInputAttachmentName(const Aws::String& value) { SetActiveInputAttachmentName(value); return *this;}

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline PipelineDetail& WithActiveInputAttachmentName(Aws::String&& value) { SetActiveInputAttachmentName(std::move(value)); return *this;}

    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline PipelineDetail& WithActiveInputAttachmentName(const char* value) { SetActiveInputAttachmentName(value); return *this;}


    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline const Aws::String& GetActiveInputSwitchActionName() const{ return m_activeInputSwitchActionName; }

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline bool ActiveInputSwitchActionNameHasBeenSet() const { return m_activeInputSwitchActionNameHasBeenSet; }

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline void SetActiveInputSwitchActionName(const Aws::String& value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName = value; }

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline void SetActiveInputSwitchActionName(Aws::String&& value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName = std::move(value); }

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline void SetActiveInputSwitchActionName(const char* value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName.assign(value); }

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline PipelineDetail& WithActiveInputSwitchActionName(const Aws::String& value) { SetActiveInputSwitchActionName(value); return *this;}

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline PipelineDetail& WithActiveInputSwitchActionName(Aws::String&& value) { SetActiveInputSwitchActionName(std::move(value)); return *this;}

    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline PipelineDetail& WithActiveInputSwitchActionName(const char* value) { SetActiveInputSwitchActionName(value); return *this;}


    /**
     * Pipeline ID
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * Pipeline ID
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * Pipeline ID
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * Pipeline ID
     */
    inline PipelineDetail& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * Pipeline ID
     */
    inline PipelineDetail& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * Pipeline ID
     */
    inline PipelineDetail& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

  private:

    Aws::String m_activeInputAttachmentName;
    bool m_activeInputAttachmentNameHasBeenSet;

    Aws::String m_activeInputSwitchActionName;
    bool m_activeInputSwitchActionNameHasBeenSet;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
