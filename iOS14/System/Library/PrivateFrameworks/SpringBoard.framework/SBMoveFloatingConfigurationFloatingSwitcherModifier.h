/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	long long _fromFloatingConfiguration;
	long long _toFloatingConfiguration;

}
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(id)appLayoutsToResignActive;
-(id)_layoutSettings;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3 ;
@end

