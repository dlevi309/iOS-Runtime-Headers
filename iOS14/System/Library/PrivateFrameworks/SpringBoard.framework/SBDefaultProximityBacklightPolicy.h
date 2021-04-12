/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBProximityBacklightPolicy.h>

@protocol BSInvalidatable;
@class SBIdleTimerGlobalCoordinator, SBBacklightController, NSString;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {

	SBBacklightController* _backlightController;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	BOOL _scheduled;
	SBIdleTimerGlobalCoordinator* _idleTimerGlobalCoordinator;

}

@property (nonatomic,retain) SBIdleTimerGlobalCoordinator * idleTimerGlobalCoordinator;              //@synthesize idleTimerGlobalCoordinator=_idleTimerGlobalCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setIdleTimerGlobalCoordinator:(SBIdleTimerGlobalCoordinator *)arg1 ;
-(id)initWithBacklightController:(id)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
-(void)_restoreBacklightFactor;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(void)_backlightWillUndim:(id)arg1 ;
-(void)_cancelScheduledBacklightFactorToZero;
-(void)_turnBacklightOff;
-(SBIdleTimerGlobalCoordinator *)idleTimerGlobalCoordinator;
@end

