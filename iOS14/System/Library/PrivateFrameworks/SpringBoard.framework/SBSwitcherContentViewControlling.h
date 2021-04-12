/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class SBBestAppSuggestion;


@protocol SBSwitcherContentViewControlling <SBButtonEventsHandler,SBLayoutStateTransitionObserver,SBSwitcherAnimatedTransitioning>
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource; 
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion; 
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation; 
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled; 
@required
-(double)minimumHomeScreenScale;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(long long)contentOrientation;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(void)setContentOrientation:(long long)arg1;
-(BOOL)isUserInteractionEnabled;
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(void)setBestAppSuggestion:(id)arg1;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3;
-(void)handleGestureDidEnd:(id)arg1;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(void)relinquishTransientOverlayViewController:(id)arg1;
-(BOOL)isWindowVisible;
-(void)setShowModifierTimeline:(BOOL)arg1;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(BOOL)isShowingModifierTimeline;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
-(void)setDelegate:(id)arg1;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1;
-(void)setDataSource:(id)arg1;
-(void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3;
-(void)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3;
-(void)handleGestureDidUpdate:(id)arg1;
-(BOOL)isLiveContentRasterizationDisabled;
-(double)snapshotScaleForSceneHandle:(id)arg1;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1;
-(void)noteAppLayoutsDidChange;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
-(void)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
-(void)handleGestureDidBegin:(id)arg1;
-(id)iconForAppLayout:(id)arg1;
-(void)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
-(id)animationControllerForTransitionRequest:(id)arg1;

@end

