/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSProcessInternal <FBSProcessIdentity>
@required
-(void)_watchdogStarted:(id)arg1;
-(void)_watchdogStopped:(id)arg1;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;

@end

