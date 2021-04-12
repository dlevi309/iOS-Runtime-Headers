/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;
	SBAppLayout* _fromAppLayout;
	long long _floatingConfiguration;
	unsigned long long _direction;
	BOOL _hasReshuffledZOrder;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsResignActiveAssertion;
-(long long)keyboardSuppressionMode;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(unsigned long long)arg5 needsOvershoot:(BOOL)arg6 ;
@end

