/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier {

	SBSwitcherModifier* _transitionModifierBeforeHandlingEvent;
	SBSwitcherModifier* _gestureModifierBeforeHandlingEvent;
	SBAppLayout* _selectedAppLayout;
	long long _currentEnvironmentMode;

}

@property (nonatomic,readonly) SBAppLayout * selectedAppLayout;               //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (nonatomic,readonly) long long currentEnvironmentMode;              //@synthesize currentEnvironmentMode=_currentEnvironmentMode - In the implementation block
-(id)handleEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(long long)gestureType;
-(SBAppLayout *)selectedAppLayout;
-(id)handleGestureEvent:(id)arg1 ;
-(id)_transitionModifier;
-(id)_gestureModifier;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithStartingEnvironmentMode:(long long)arg1 ;
-(BOOL)completesWhenChildrenComplete;
-(long long)currentEnvironmentMode;
@end

