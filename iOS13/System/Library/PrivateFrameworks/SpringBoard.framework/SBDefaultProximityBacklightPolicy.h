/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBProximityBacklightPolicy.h>

@class SBBacklightController, NSString;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy> {

	SBBacklightController* _backlightController;
	BOOL _scheduled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithBacklightController:(id)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
-(void)_restoreBacklightFactor;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(void)_backlightWillUndim:(id)arg1 ;
-(void)_cancelScheduledBacklightFactorToZero;
-(void)_doBacklightFactorChange;
@end

