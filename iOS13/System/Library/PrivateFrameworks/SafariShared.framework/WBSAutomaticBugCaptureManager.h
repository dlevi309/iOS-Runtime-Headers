/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class SDRDiagnosticReporter;

@interface WBSAutomaticBugCaptureManager : NSObject {

	SDRDiagnosticReporter* _reporter;

}
+(id)sharedManager;
-(id)init;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 duration:(double)arg4 ;
-(void)_startLoggingSessionForDomain:(id)arg1 detectedProcess:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5 duration:(double)arg6 ;
-(void)captureLoadingStallWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)captureProcessTerminationDueToResourceLimitsWithDomain:(id)arg1 detectedProcess:(id)arg2 resourceType:(id)arg3 ;
-(void)captureDeferredNavigationWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
-(void)capturePerformanceTimeoutWithDomain:(id)arg1 detectedProcess:(id)arg2 context:(id)arg3 ;
@end

