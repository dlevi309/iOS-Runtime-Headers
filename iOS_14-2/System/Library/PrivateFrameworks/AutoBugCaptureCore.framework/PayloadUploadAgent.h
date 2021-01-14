/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NWUsageMonitor;

@interface PayloadUploadAgent : NSObject {

	NSObject*<OS_dispatch_queue> _uploadQueue;
	NSMutableDictionary* _pendingUploadMap;
	id _foregroundStateObserver;
	NWUsageMonitor* _usageMonitor;

}
+(id)sharedInstance;
+(void)reportFailureMetricForPayload:(id)arg1 ;
+(BOOL)uploadPayload:(id)arg1 ;
-(id)init;
-(void)scheduleUploadFor:(id)arg1 ;
-(void)scheduleUserPermissionRequestFor:(id)arg1 ;
-(void)processPendingUploadRequestFor:(id)arg1 ;
-(void)uploadPayloadsToRadarWithCaseID:(id)arg1 radarID:(id)arg2 token:(id)arg3 urgency:(long long)arg4 apnsIdentifier:(unsigned long long)arg5 ;
@end

