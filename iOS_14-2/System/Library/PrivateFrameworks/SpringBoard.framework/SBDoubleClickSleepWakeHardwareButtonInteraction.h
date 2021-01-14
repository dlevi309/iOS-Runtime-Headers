/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSleepWakeHardwareButtonInteraction.h>

@class SBHIDUILockAssertion, SBProximitySensorManager;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction {

	SBHIDUILockAssertion* _proxLockAssertion;
	SBProximitySensorManager* _proximitySensorManager;

}

@property (nonatomic,retain) SBHIDUILockAssertion * proxLockAssertion;                       //@synthesize proxLockAssertion=_proxLockAssertion - In the implementation block
@property (nonatomic,retain) SBProximitySensorManager * proximitySensorManager;              //@synthesize proximitySensorManager=_proximitySensorManager - In the implementation block
-(SBProximitySensorManager *)proximitySensorManager;
-(BOOL)consumeInitialPressDown;
-(void)observeFinalPressUp;
-(id)initWithProximitySensorManager:(id)arg1 ;
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
-(void)setProximitySensorManager:(SBProximitySensorManager *)arg1 ;
@end

