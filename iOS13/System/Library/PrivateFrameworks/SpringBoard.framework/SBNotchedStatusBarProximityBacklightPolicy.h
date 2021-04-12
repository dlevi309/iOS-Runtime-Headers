/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDefaultProximityBacklightPolicy.h>
#import <libobjc.A.dylib/SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate.h>
#import <libobjc.A.dylib/_SBProximityTouchHandlingDelegate.h>

@class _SBProximityTouchHandlingWindow, _SBProximityTouchHandlingViewController, SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, SBProximitySettings, NSString;

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate> {

	BOOL _objectInProximity;
	_SBProximityTouchHandlingWindow* _proxTouchHandlingWindow;
	_SBProximityTouchHandlingViewController* _proxTouchHandlingViewController;
	SBNotchedStatusBarProximityBacklightPolicyEnablementCondition* _enablementCondition;
	unsigned long long _timesEnabledWithObjectInProximity;
	unsigned long long _touchesReceivedWithObjectInProximity;
	SBProximitySettings* _lazy_proximitySettings;

}

@property (setter=_setProximitySettings:,nonatomic,retain) SBProximitySettings * _proximitySettings;              //@synthesize lazy_proximitySettings=_lazy_proximitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didHitAllowedRegion:(CGPoint)arg1 ;
-(id)initWithBacklightController:(id)arg1 ;
-(void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1 ;
-(id)_createNewEnablementCondition;
-(double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)arg1 ;
-(void)_setHandleTouchesIfNecessary:(BOOL)arg1 ;
-(SBProximitySettings *)_proximitySettings;
-(void)condition:(id)arg1 enablementDidChange:(BOOL)arg2 ;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(void)_setProximitySettings:(id)arg1 ;
@end

