/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol FBSProcessInternal <FBSProcessIdentity>
@required
-(void)_watchdogStarted:(id)arg1;
-(void)_watchdogStopped:(id)arg1;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;

@end

