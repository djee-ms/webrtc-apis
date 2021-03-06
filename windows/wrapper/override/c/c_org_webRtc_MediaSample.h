
#ifndef C_USE_GENERATED_ORG_WEBRTC_MEDIASAMPLE

#pragma once

#include "types.h"


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_BEGIN_GUARD


/* org_webRtc_MediaSample*/

ORG_WEBRTC_WRAPPER_C_EXPORT_API org_webRtc_MediaSample_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaSample_wrapperClone(org_webRtc_MediaSample_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API void ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaSample_wrapperDestroy(org_webRtc_MediaSample_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API instance_id_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaSample_wrapperInstanceId(org_webRtc_MediaSample_t handle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API std_list_float_t_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaSample_getCameraViewTransform(org_webRtc_MediaSample_t wrapperThisHandle);
ORG_WEBRTC_WRAPPER_C_EXPORT_API std_list_float_t_t ORG_WEBRTC_WRAPPER_C_CALLING_CONVENTION org_webRtc_MediaSample_getCameraProjectionTransform(org_webRtc_MediaSample_t wrapperThisHandle);


ORG_WEBRTC_WRAPPER_C_PLUS_PLUS_END_GUARD

#ifdef __cplusplus


namespace wrapper
{
  org_webRtc_MediaSample_t org_webRtc_MediaSample_wrapperToHandle(wrapper::org::webRtc::MediaSamplePtr value);
  wrapper::org::webRtc::MediaSamplePtr org_webRtc_MediaSample_wrapperFromHandle(org_webRtc_MediaSample_t handle);

} /* namespace wrapper */
#endif /* __cplusplus */

#endif /* ifndef C_USE_GENERATED_ORG_WEBRTC_MEDIASAMPLE */
