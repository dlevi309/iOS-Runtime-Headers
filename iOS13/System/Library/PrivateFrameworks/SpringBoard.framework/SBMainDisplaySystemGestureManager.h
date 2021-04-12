/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(void)_evaluateEnablement;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)_updateUserPreferences;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(SBHomeGestureParticipant *)accessibilityHomeGestureParticipant;
-(void)setAccessibilityHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)_setupSystemGestureEventDeferringIfNeeded;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(CGPoint)arg1 ;
@end

