/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProvidingDelegate.h>
#import <libobjc.A.dylib/SBFluidSwitcherModifierProviding.h>
#import <libobjc.A.dylib/SBFluidSwitcherScrollProviding.h>

@protocol SBFluidSwitcherScrollProvidingDelegate;
@class NSString;

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier <SBFluidSwitcherScrollProvidingDelegate, SBFluidSwitcherModifierProviding, SBFluidSwitcherScrollProviding> {

	BOOL _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
	id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)_setup;
-(id)handleEvent:(id)arg1 ;
-(id<SBFluidSwitcherScrollProvidingDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SBFluidSwitcherScrollProvidingDelegate>)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)multitaskingModifier;
-(CGPoint)scrollProvidingModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2 ;
-(CGPoint)scrollProvidingModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2 ;
-(id)_reduceMotionModifier;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg1 ;
-(id)handleAppExposeEvent:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleTetheredRemovalEvent:(id)arg1 ;
-(id)handleTetheredInsertionEvent:(id)arg1 ;
-(id)handleReduceMotionChangedEvent:(id)arg1 ;
-(id)floorModifierForTransitionEvent:(id)arg1 ;
-(id)multitaskingModifierForEvent:(id)arg1 ;
-(id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1 ;
-(id)floorModifier;
-(id)gestureModifierForGestureEvent:(id)arg1 ;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1 ;
-(id)appExposeModifierForAppExposeEvent:(id)arg1 ;
-(id)insertionModifierForInsertionEvent:(id)arg1 ;
-(id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1 ;
-(id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1 ;
-(id)lowEndHardwareModifier;
-(void)_updateMultitaskingModifierWithEvent:(id)arg1 ;
-(void)_updateFloorModifierWithTransitionEvent:(id)arg1 ;
-(void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg1 ;
-(void)_updateLowEndHardwareModifier;
-(id)transitionModifierForInlineTransitionEvent:(id)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)_swipeToKillModifierKeyForAppLayout:(id)arg1 ;
-(id)_appExposeModifierKeyForBundleID:(id)arg1 ;
@end

