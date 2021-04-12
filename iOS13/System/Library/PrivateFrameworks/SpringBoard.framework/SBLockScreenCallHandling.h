/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBLockScreenCallHandling <NSObject>
@required
-(BOOL)isMakingEmergencyCall;
-(void)launchEmergencyDialer;
-(void)launchEmergencyDialerAnimated:(BOOL)arg1;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1;
-(void)launchInCallAlert;
-(void)emergencyDialerExitedWithError:(id)arg1;

@end

