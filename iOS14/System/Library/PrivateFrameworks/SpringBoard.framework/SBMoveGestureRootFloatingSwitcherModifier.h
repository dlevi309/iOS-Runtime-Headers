/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {

	long long _currentFloatingConfiguration;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) long long currentFloatingConfiguration;              //@synthesize currentFloatingConfiguration=_currentFloatingConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                      //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(long long)interfaceOrientation;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(long long)gestureType;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2 ;
-(id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2 ;
-(id)initWithInitialFloatingConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 ;
-(long long)currentFloatingConfiguration;
-(void)setCurrentFloatingConfiguration:(long long)arg1 ;
@end

