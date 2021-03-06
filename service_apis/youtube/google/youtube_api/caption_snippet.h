// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_CAPTION_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_CAPTION_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a caption track, such as its language and name.
 *
 * @ingroup DataObject
 */
class CaptionSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static CaptionSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CaptionSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit CaptionSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~CaptionSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::CaptionSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::CaptionSnippet");
  }

  /**
   * Determine if the '<code>audioTrackType</code>' attribute was set.
   *
   * @return true if the '<code>audioTrackType</code>' attribute was set.
   */
  bool has_audio_track_type() const {
    return Storage().isMember("audioTrackType");
  }

  /**
   * Clears the '<code>audioTrackType</code>' attribute.
   */
  void clear_audio_track_type() {
    MutableStorage()->removeMember("audioTrackType");
  }


  /**
   * Get the value of the '<code>audioTrackType</code>' attribute.
   */
  const StringPiece get_audio_track_type() const {
    const Json::Value& v = Storage("audioTrackType");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>audioTrackType</code>' attribute.
   *
   * The type of audio track associated with the caption track.
   *
   * @param[in] value The new value.
   */
  void set_audio_track_type(const StringPiece& value) {
    *MutableStorage("audioTrackType") = value.data();
  }

  /**
   * Determine if the '<code>failureReason</code>' attribute was set.
   *
   * @return true if the '<code>failureReason</code>' attribute was set.
   */
  bool has_failure_reason() const {
    return Storage().isMember("failureReason");
  }

  /**
   * Clears the '<code>failureReason</code>' attribute.
   */
  void clear_failure_reason() {
    MutableStorage()->removeMember("failureReason");
  }


  /**
   * Get the value of the '<code>failureReason</code>' attribute.
   */
  const StringPiece get_failure_reason() const {
    const Json::Value& v = Storage("failureReason");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>failureReason</code>' attribute.
   *
   * The reason that YouTube failed to process the caption track. This property
   * is only present if the state property's value is failed.
   *
   * @param[in] value The new value.
   */
  void set_failure_reason(const StringPiece& value) {
    *MutableStorage("failureReason") = value.data();
  }

  /**
   * Determine if the '<code>isAutoSynced</code>' attribute was set.
   *
   * @return true if the '<code>isAutoSynced</code>' attribute was set.
   */
  bool has_is_auto_synced() const {
    return Storage().isMember("isAutoSynced");
  }

  /**
   * Clears the '<code>isAutoSynced</code>' attribute.
   */
  void clear_is_auto_synced() {
    MutableStorage()->removeMember("isAutoSynced");
  }


  /**
   * Get the value of the '<code>isAutoSynced</code>' attribute.
   */
  bool get_is_auto_synced() const {
    const Json::Value& storage = Storage("isAutoSynced");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isAutoSynced</code>' attribute.
   *
   * Indicates whether YouTube synchronized the caption track to the audio track
   * in the video. The value will be true if a sync was explicitly requested
   * when the caption track was uploaded. For example, when calling the
   * captions.insert or captions.update methods, you can set the sync parameter
   * to true to instruct YouTube to sync the uploaded track to the video. If the
   * value is false, YouTube uses the time codes in the uploaded caption track
   * to determine when to display captions.
   *
   * @param[in] value The new value.
   */
  void set_is_auto_synced(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isAutoSynced"));
  }

  /**
   * Determine if the '<code>isCC</code>' attribute was set.
   *
   * @return true if the '<code>isCC</code>' attribute was set.
   */
  bool has_is_cc() const {
    return Storage().isMember("isCC");
  }

  /**
   * Clears the '<code>isCC</code>' attribute.
   */
  void clear_is_cc() {
    MutableStorage()->removeMember("isCC");
  }


  /**
   * Get the value of the '<code>isCC</code>' attribute.
   */
  bool get_is_cc() const {
    const Json::Value& storage = Storage("isCC");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isCC</code>' attribute.
   *
   * Indicates whether the track contains closed captions for the deaf and hard
   * of hearing. The default value is false.
   *
   * @param[in] value The new value.
   */
  void set_is_cc(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isCC"));
  }

  /**
   * Determine if the '<code>isDraft</code>' attribute was set.
   *
   * @return true if the '<code>isDraft</code>' attribute was set.
   */
  bool has_is_draft() const {
    return Storage().isMember("isDraft");
  }

  /**
   * Clears the '<code>isDraft</code>' attribute.
   */
  void clear_is_draft() {
    MutableStorage()->removeMember("isDraft");
  }


  /**
   * Get the value of the '<code>isDraft</code>' attribute.
   */
  bool get_is_draft() const {
    const Json::Value& storage = Storage("isDraft");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isDraft</code>' attribute.
   *
   * Indicates whether the caption track is a draft. If the value is true, then
   * the track is not publicly visible. The default value is false.
   *
   * @param[in] value The new value.
   */
  void set_is_draft(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isDraft"));
  }

  /**
   * Determine if the '<code>isEasyReader</code>' attribute was set.
   *
   * @return true if the '<code>isEasyReader</code>' attribute was set.
   */
  bool has_is_easy_reader() const {
    return Storage().isMember("isEasyReader");
  }

  /**
   * Clears the '<code>isEasyReader</code>' attribute.
   */
  void clear_is_easy_reader() {
    MutableStorage()->removeMember("isEasyReader");
  }


  /**
   * Get the value of the '<code>isEasyReader</code>' attribute.
   */
  bool get_is_easy_reader() const {
    const Json::Value& storage = Storage("isEasyReader");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isEasyReader</code>' attribute.
   *
   * Indicates whether caption track is formatted for "easy reader," meaning it
   * is at a third-grade level for language learners. The default value is
   * false.
   *
   * @param[in] value The new value.
   */
  void set_is_easy_reader(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isEasyReader"));
  }

  /**
   * Determine if the '<code>isLarge</code>' attribute was set.
   *
   * @return true if the '<code>isLarge</code>' attribute was set.
   */
  bool has_is_large() const {
    return Storage().isMember("isLarge");
  }

  /**
   * Clears the '<code>isLarge</code>' attribute.
   */
  void clear_is_large() {
    MutableStorage()->removeMember("isLarge");
  }


  /**
   * Get the value of the '<code>isLarge</code>' attribute.
   */
  bool get_is_large() const {
    const Json::Value& storage = Storage("isLarge");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isLarge</code>' attribute.
   *
   * Indicates whether the caption track uses large text for the vision-
   * impaired. The default value is false.
   *
   * @param[in] value The new value.
   */
  void set_is_large(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isLarge"));
  }

  /**
   * Determine if the '<code>language</code>' attribute was set.
   *
   * @return true if the '<code>language</code>' attribute was set.
   */
  bool has_language() const {
    return Storage().isMember("language");
  }

  /**
   * Clears the '<code>language</code>' attribute.
   */
  void clear_language() {
    MutableStorage()->removeMember("language");
  }


  /**
   * Get the value of the '<code>language</code>' attribute.
   */
  const StringPiece get_language() const {
    const Json::Value& v = Storage("language");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>language</code>' attribute.
   *
   * The language of the caption track. The property value is a BCP-47 language
   * tag.
   *
   * @param[in] value The new value.
   */
  void set_language(const StringPiece& value) {
    *MutableStorage("language") = value.data();
  }

  /**
   * Determine if the '<code>lastUpdated</code>' attribute was set.
   *
   * @return true if the '<code>lastUpdated</code>' attribute was set.
   */
  bool has_last_updated() const {
    return Storage().isMember("lastUpdated");
  }

  /**
   * Clears the '<code>lastUpdated</code>' attribute.
   */
  void clear_last_updated() {
    MutableStorage()->removeMember("lastUpdated");
  }


  /**
   * Get the value of the '<code>lastUpdated</code>' attribute.
   */
  client::DateTime get_last_updated() const {
    const Json::Value& storage = Storage("lastUpdated");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>lastUpdated</code>' attribute.
   *
   * The date and time when the caption track was last updated. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_last_updated(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("lastUpdated"));
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The name of the caption track. The name is intended to be visible to the
   * user as an option during playback.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get the value of the '<code>status</code>' attribute.
   */
  const StringPiece get_status() const {
    const Json::Value& v = Storage("status");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>status</code>' attribute.
   *
   * The caption track's status.
   *
   * @param[in] value The new value.
   */
  void set_status(const StringPiece& value) {
    *MutableStorage("status") = value.data();
  }

  /**
   * Determine if the '<code>trackKind</code>' attribute was set.
   *
   * @return true if the '<code>trackKind</code>' attribute was set.
   */
  bool has_track_kind() const {
    return Storage().isMember("trackKind");
  }

  /**
   * Clears the '<code>trackKind</code>' attribute.
   */
  void clear_track_kind() {
    MutableStorage()->removeMember("trackKind");
  }


  /**
   * Get the value of the '<code>trackKind</code>' attribute.
   */
  const StringPiece get_track_kind() const {
    const Json::Value& v = Storage("trackKind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>trackKind</code>' attribute.
   *
   * The caption track's type.
   *
   * @param[in] value The new value.
   */
  void set_track_kind(const StringPiece& value) {
    *MutableStorage("trackKind") = value.data();
  }

  /**
   * Determine if the '<code>videoId</code>' attribute was set.
   *
   * @return true if the '<code>videoId</code>' attribute was set.
   */
  bool has_video_id() const {
    return Storage().isMember("videoId");
  }

  /**
   * Clears the '<code>videoId</code>' attribute.
   */
  void clear_video_id() {
    MutableStorage()->removeMember("videoId");
  }


  /**
   * Get the value of the '<code>videoId</code>' attribute.
   */
  const StringPiece get_video_id() const {
    const Json::Value& v = Storage("videoId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the video associated with the
   * caption track.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

 private:
  void operator=(const CaptionSnippet&);
};  // CaptionSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CAPTION_SNIPPET_H_
