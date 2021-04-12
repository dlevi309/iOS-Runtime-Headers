/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSUUID;

@interface SBTransitionSwitcherModifier : SBSwitcherModifier {

	BOOL _wantsResignActiveAndAsyncRenderingAssertions;
	BOOL _isTransitioningToSwitcher;
	NSArray* _appLayoutsToEnsureExist;
	unsigned long long _transitionPhase;
	NSUUID* _transitionID;

}

@property (nonatomic,readonly) unsigned long long transitionPhase;              //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (nonatomic,readonly) NSUUID * transitionID;                           //@synthesize transitionID=_transitionID - In the implementation block
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(id)handleScrollEvent:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(id)transitionWillUpdate;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(id)transitionDidEnd;
-(id)handleTimerEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)appLayoutsToResignActive;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)transitionPhase;
-(id)transitionWillBegin;
-(id)initWithTransitionID:(id)arg1 ;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(NSUUID *)transitionID;
-(long long)transitionLiveContentRasterizationStyle;
-(id)_handleTransitionEvent:(id)arg1 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(void)_setTransitionPhase:(unsigned long long)arg1 ;
@end

