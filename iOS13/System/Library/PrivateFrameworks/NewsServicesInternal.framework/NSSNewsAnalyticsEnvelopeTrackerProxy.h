/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <libobjc.A.dylib/NDAnalyticsEnvelopeTracker.h>

@class NSString;

@interface NSSNewsAnalyticsEnvelopeTrackerProxy : NSObject <NDAnalyticsEnvelopeTracker>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1 ;
-(void)registerEnvelopesAsCreated:(id)arg1 ;
-(void)registerEnvelopesAsSubmittedToUploader:(id)arg1 ;
-(void)registerEnvelopesAsReceivedByUploader:(id)arg1 ;
-(void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1 ;
-(void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1 ;
-(void)registerEnvelopeContentTypesAsUploaded:(id)arg1 ;
-(void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3 ;
@end

