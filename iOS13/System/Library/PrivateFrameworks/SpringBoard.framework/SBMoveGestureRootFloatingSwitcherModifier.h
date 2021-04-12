/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {

	long long _currentFloatingConfiguration;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) long long currentFloatingConfiguration;              //@synthesize currentFloatingConfiguration=_currentFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                      //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)gestureType;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithInitialFloatingConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 ;
-(long long)currentFloatingConfiguration;
-(void)setCurrentFloatingConfiguration:(long long)arg1 ;
@end

