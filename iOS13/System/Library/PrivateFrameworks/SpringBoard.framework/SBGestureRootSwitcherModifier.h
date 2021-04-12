/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {

	BOOL _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
	NSString* _activeTransitionKey;
	SBAppLayout* _selectedAppLayout;
	long long _currentEnvironmentMode;

}

@property (nonatomic,readonly) SBAppLayout * selectedAppLayout;               //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (nonatomic,readonly) long long currentEnvironmentMode;              //@synthesize currentEnvironmentMode=_currentEnvironmentMode - In the implementation block
-(long long)gestureType;
-(id)handleGestureEvent:(id)arg1 ;
-(SBAppLayout *)selectedAppLayout;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_gestureModifier;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)_forwardEventAndUpdateInternalState:(id)arg1 ;
-(void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1 ;
-(id)_transitionModifier;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithStartingEnvironmentMode:(long long)arg1 ;
-(long long)currentEnvironmentMode;
@end

