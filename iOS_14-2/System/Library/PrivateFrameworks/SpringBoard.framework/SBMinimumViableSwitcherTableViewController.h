/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherContentViewControllerDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                      //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,getter=isShowingModifierTimeline,nonatomic) BOOL showModifierTimeline; 
@property (assign,nonatomic) long long contentOrientation;                                                                 //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,getter=isLiveContentRasterizationDisabled,nonatomic) BOOL liveContentRasterizationDisabled;              //@synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canInterruptActiveTransition; 
@property (nonatomic,copy,readonly) BSAnimationSettings * defaultTransitionAnimationSettings; 
-(double)minimumHomeScreenScale;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BSAnimationSettings *)defaultTransitionAnimationSettings;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(long long)contentOrientation;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(BOOL)handleHomeButtonPress;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)switcherCardScale;
-(BOOL)isUserInteractionEnabled;
-(id<SBSwitcherContentViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)failMultitaskingGesturesForReason:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleGestureDidEnd:(id)arg1 ;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(id<SBSwitcherContentViewControllerDataSource>)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(BOOL)isWindowVisible;
-(void)setShowModifierTimeline:(BOOL)arg1 ;
-(void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(BOOL)canInterruptActiveTransition;
-(BOOL)isShowingModifierTimeline;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)setDelegate:(id<SBSwitcherContentViewControllerDelegate>)arg1 ;
-(BOOL)isStatusBarHiddenForAppLayout:(id)arg1 ;
-(void)setDataSource:(id<SBSwitcherContentViewControllerDataSource>)arg1 ;
-(void)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(BOOL)arg3 ;
-(void)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(BOOL)arg3 ;
-(void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleGestureDidUpdate:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)isLiveContentRasterizationDisabled;
-(double)snapshotScaleForSceneHandle:(id)arg1 ;
-(void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)noteAppLayoutsDidChange;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 ;
-(void)handleGestureDidBegin:(id)arg1 ;
-(id)iconForAppLayout:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(id)_appLayouts;
@end

