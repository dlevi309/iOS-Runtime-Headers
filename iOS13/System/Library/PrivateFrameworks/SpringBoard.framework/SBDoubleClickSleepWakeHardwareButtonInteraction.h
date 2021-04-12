/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSleepWakeHardwareButtonInteraction.h>

@class SBHIDUILockAssertion;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction {

	SBHIDUILockAssertion* _proxLockAssertion;

}

@property (nonatomic,retain) SBHIDUILockAssertion * proxLockAssertion;              //@synthesize proxLockAssertion=_proxLockAssertion - In the implementation block
-(void)observeFinalPressUp;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeInitialPressUp;
-(BOOL)consumeSecondPressDown;
-(void)observeSinglePressDidFail;
-(void)_performWake;
-(void)_performSleep;
-(void)_resumeProxForReason:(id)arg1 ;
-(void)_suspendProx;
-(void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg1 ;
-(void)_cancelPreviousResumeProxRequests;
-(SBHIDUILockAssertion *)proxLockAssertion;
-(void)setProxLockAssertion:(SBHIDUILockAssertion *)arg1 ;
@end

