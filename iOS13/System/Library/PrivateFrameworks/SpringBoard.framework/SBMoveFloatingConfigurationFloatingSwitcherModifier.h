/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	long long _fromFloatingConfiguration;
	long long _toFloatingConfiguration;

}
-(id)transitionWillBegin;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsResignActiveAssertion;
-(long long)keyboardSuppressionMode;
-(id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3 ;
@end

