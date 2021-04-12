/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SBSwitcherContentViewControlling.h>

@protocol SBSwitcherContentViewControllerDelegate, SBSwitcherContentViewControllerDataSource;
@class SBApplicationSceneView, SBBestAppSuggestion, NSString, BSAnimationSettings;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling> {

	id<SBSwitcherContentViewControllerDelegate> _delegate;
	SBApplicationSceneView* _temporaryAppView;
	SBApplicationSceneView* _temporarySideAppView;
	SBBestAppSuggestion* _bestAppSuggestion;
	BOOL _liveContentRasterizationDisabled;
	id<SBSwitcherContentViewControllerDataSource> _dataSource;
	long long _contentOrientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canInterruptActiveTransition; 
@property (nonatomic,copy,readonly) BSAnimationSettings * defaultTransitionAnimationSettings; 
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                      //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation;                                                                 //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled;              //@synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled - In the implementation block
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherContentViewControllerDelegate>)arg1 ;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<SBSwitcherContentViewControllerDataSource>)arg1 ;
-(void)viewDidLoad;
-(BOOL)isUserInteractionEnabled;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)setContentOrientation:(long long)arg1 ;
-(long long)contentOrientation;
-(double)minimumHomeScreenScale;
-(id)handleGestureDidBegin:(id)arg1 ;
-(id)handleGestureDidEnd:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(double)switcherCardScale;
-(void)failMultitaskingGesturesForReason:(id)arg1 ;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandHomeGrabberView;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(id)handleGestureDidUpdate:(id)arg1 ;
-(BOOL)canInterruptActiveTransition;
-(double)snapshotScaleForSceneHandle:(id)arg1 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(BOOL)isWindowVisible;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1 ;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3 ;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2 ;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3 ;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2 ;
-(void)handleModifierAction:(id)arg1 ;
-(void)noteAppLayoutsDidChange;
-(id)enterAppExposeForBundleID:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(BOOL)isShowingModifierTimeline;
-(void)setShowModifierTimeline:(BOOL)arg1 ;
-(BOOL)isLiveContentRasterizationDisabled;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(id)_appLayouts;
@end

