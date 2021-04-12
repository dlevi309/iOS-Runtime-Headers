/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/


@interface NAUAnalyticsEnvelopeTracker : NSObject
+(void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1 ;
+(id)_contentTypeProperty;
+(void)_registerEnvelopes:(id)arg1 withEventName:(id)arg2 ;
+(id)_daysSinceSubmissionDateProperty;
+(void)registerEnvelopesAsSubmittedToUploader:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsUploaded:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1 ;
+(void)registerEnvelopesAsReceivedByUploader:(id)arg1 ;
+(void)_registerContentTypes:(id)arg1 withEventName:(id)arg2 ;
+(void)registerEnvelopesAsCreated:(id)arg1 ;
+(void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3 ;
@end

