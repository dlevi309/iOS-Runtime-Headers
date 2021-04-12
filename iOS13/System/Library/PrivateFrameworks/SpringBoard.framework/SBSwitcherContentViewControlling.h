/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBBestAppSuggestion;


@protocol SBSwitcherContentViewControlling <SBLayoutStateTransitionObserver,SBSwitcherAnimatedTransitioning>
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource; 
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion; 
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation; 
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled; 
@required
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(void)setDataSource:(id)arg1;
-(BOOL)isUserInteractionEnabled;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)setContentOrientation:(long long)arg1;
-(long long)contentOrientation;
-(double)minimumHomeScreenScale;
-(id)handleGestureDidBegin:(id)arg1;
-(id)handleGestureDidEnd:(id)arg1;
-(id)animationControllerForTransitionRequest:(id)arg1;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
-(void)relinquishTransientOverlayViewController:(id)arg1;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandHomeGrabberView;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(id)handleGestureDidUpdate:(id)arg1;
-(double)snapshotScaleForSceneHandle:(id)arg1;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3;
-(BOOL)isWindowVisible;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
-(id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
-(id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3;
-(id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
-(id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
-(id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3;
-(id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2;
-(void)handleModifierAction:(id)arg1;
-(void)noteAppLayoutsDidChange;
-(id)enterAppExposeForBundleID:(id)arg1;
-(void)setBestAppSuggestion:(id)arg1;
-(BOOL)isShowingModifierTimeline;
-(void)setShowModifierTimeline:(BOOL)arg1;
-(BOOL)isLiveContentRasterizationDisabled;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1;

@end

