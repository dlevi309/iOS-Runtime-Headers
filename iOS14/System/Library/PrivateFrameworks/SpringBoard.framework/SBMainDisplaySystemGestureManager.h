/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureManager.h>

@protocol BSInvalidatable;
@class SBGestureDefaults, SBHomeGestureParticipant;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {

	SBGestureDefaults* _gestureDefaults;
	id<BSInvalidatable> _systemGestureEventDeferringRule;
	id<BSInvalidatable> _pointerEventRoutingAssertion;
	BOOL _multitaskingGesturesEnabled;
	SBHomeGestureParticipant* _accessibilityHomeGestureParticipant;

}

@property (nonatomic,retain) SBHomeGestureParticipant * accessibilityHomeGestureParticipant;              //@synthesize accessibilityHomeGestureParticipant=_accessibilityHomeGestureParticipant - In the implementation block
+(id)sharedInstance;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(CGPoint)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAccessibilityHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)_evaluateEnablement;
-(void)_updateUserPreferences;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)_init;
-(SBHomeGestureParticipant *)accessibilityHomeGestureParticipant;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(void)_setupSystemGestureEventDeferringIfNeeded;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(void)dealloc;
@end

