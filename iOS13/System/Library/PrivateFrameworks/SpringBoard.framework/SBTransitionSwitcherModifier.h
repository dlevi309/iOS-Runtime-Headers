/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {

	BOOL _wantsResignActiveAndAsyncRenderingAssertions;
	unsigned long long _transitionPhase;
	NSUUID* _transitionID;

}

@property (nonatomic,readonly) unsigned long long transitionPhase;              //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (nonatomic,readonly) NSUUID * transitionID;                           //@synthesize transitionID=_transitionID - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)transitionPhase;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithTransitionID:(id)arg1 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(long long)liveContentRasterizationStyle;
-(id)handleTimerEvent:(id)arg1 ;
-(NSUUID *)transitionID;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(long long)layoutUpdateMode;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)wantsResignActiveAssertion;
-(long long)sceneDeactivationReason;
-(long long)keyboardSuppressionMode;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(long long)transitionLiveContentRasterizationStyle;
-(id)_handleTransitionEvent:(id)arg1 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)transitionDidEnd;
-(void)_setTransitionPhase:(unsigned long long)arg1 ;
@end

