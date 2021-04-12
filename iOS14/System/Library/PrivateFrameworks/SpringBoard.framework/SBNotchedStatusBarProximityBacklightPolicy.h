/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

