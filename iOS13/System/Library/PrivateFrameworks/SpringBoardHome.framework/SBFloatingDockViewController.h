/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBIconListViewDragDelegate.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>
#import <libobjc.A.dylib/SBFolderControllerDelegate.h>
#import <libobjc.A.dylib/SBFolderPresentingViewControllerDelegate.h>
#import <libobjc.A.dylib/SBScaleIconZoomAnimationContaining.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBFloatingDockViewControllerDelegate, SBFloatingDockSuggestionsViewProviding, SBIconViewProviding;
@class NSSet, SBFloatingDockView, _UILegibilitySettings, NSHashTable, UIViewController, SBHIconManager, SBIconListModel, SBFolderPresentingViewController, SBHomeScreenIconTransitionAnimator, NSMutableArray, SBFTouchPassThroughView, SBHFloatingDockStyleConfiguration, SBFolderController, NSString, UIView, UIWindow, NSArray, SBHIconModel, SBIconListView;

@interface SBFloatingDockViewController : SBFTouchPassThroughViewController <SBIconListViewDragDelegate, SBIconListModelObserver, SBFolderControllerDelegate, SBFolderPresentingViewControllerDelegate, SBScaleIconZoomAnimationContaining, SBIconViewProviding, SBIconViewQuerying, SBIconLocationPresenting, BSDescriptionProviding> {

	SBFloatingDockView* _dockView;
	_UILegibilitySettings* _legibilitySettings;
	NSHashTable* _bouncedDropSessions;
	CFRunLoopObserverRef _resizeRunLoopObserver;
	BOOL _wantsFastIconReordering;
	BOOL _shouldIndicateImpossibleDrop;
	BOOL _transitioningUnderlyingPresentationStyleConfiguration;
	id<SBFloatingDockViewControllerDelegate> _delegate;
	UIViewController*<SBFloatingDockSuggestionsViewProviding> _suggestionsViewController;
	double _dockOffscreenProgress;
	SBHIconManager* _iconManager;
	id<SBIconViewProviding> _iconViewProvider;
	SBIconListModel* _dockListModel;
	SBFolderPresentingViewController* _folderPresentingViewController;
	SBHomeScreenIconTransitionAnimator* _currentFolderAnimator;
	NSMutableArray* _currentExpandCompletions;
	NSMutableArray* _currentCollapseCompletions;
	SBFTouchPassThroughView* _scalingView;
	double _lastDockHeight;
	SBHFloatingDockStyleConfiguration* _underlyingPresentationStyleConfiguration;
	SBHFloatingDockStyleConfiguration* _transitionTargetUnderlyingPresentationStyleConfiguration;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                                                                          //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,__weak,readonly) id<SBIconViewProviding> iconViewProvider;                                                                       //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,retain) SBIconListModel * dockListModel;                                                                                         //@synthesize dockListModel=_dockListModel - In the implementation block
@property (nonatomic,retain) SBFloatingDockView * dockView; 
@property (nonatomic,retain) SBFolderPresentingViewController * folderPresentingViewController;                                                       //@synthesize folderPresentingViewController=_folderPresentingViewController - In the implementation block
@property (nonatomic,retain) SBHomeScreenIconTransitionAnimator * currentFolderAnimator;                                                              //@synthesize currentFolderAnimator=_currentFolderAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentExpandCompletions;                                                                               //@synthesize currentExpandCompletions=_currentExpandCompletions - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentCollapseCompletions;                                                                             //@synthesize currentCollapseCompletions=_currentCollapseCompletions - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * scalingView;                                                                                   //@synthesize scalingView=_scalingView - In the implementation block
@property (assign,nonatomic) double lastDockHeight;                                                                                                   //@synthesize lastDockHeight=_lastDockHeight - In the implementation block
@property (nonatomic,copy) SBHFloatingDockStyleConfiguration * underlyingPresentationStyleConfiguration;                                              //@synthesize underlyingPresentationStyleConfiguration=_underlyingPresentationStyleConfiguration - In the implementation block
@property (assign,getter=isTransitioningUnderlyingBackgroundStyle,nonatomic) BOOL transitioningUnderlyingPresentationStyleConfiguration;              //@synthesize transitioningUnderlyingPresentationStyleConfiguration=_transitioningUnderlyingPresentationStyleConfiguration - In the implementation block
@property (nonatomic,copy) SBHFloatingDockStyleConfiguration * transitionTargetUnderlyingPresentationStyleConfiguration;                              //@synthesize transitionTargetUnderlyingPresentationStyleConfiguration=_transitionTargetUnderlyingPresentationStyleConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<SBFloatingDockViewControllerDelegate> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController*<SBFloatingDockSuggestionsViewProviding> suggestionsViewController;                                     //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (nonatomic,readonly) double contentHeight; 
@property (nonatomic,readonly) double maximumContentHeight; 
@property (nonatomic,readonly) CGRect floatingDockScreenFrame; 
@property (nonatomic,readonly) CGRect floatingDockScreenPresentationFrame; 
@property (nonatomic,readonly) double preferredVerticalMargin; 
@property (assign,nonatomic) double requestedVerticalMargin; 
@property (nonatomic,readonly) double translationFromFullyPresentedFrame; 
@property (nonatomic,readonly) double maximumDockContinuousCornerRadius; 
@property (assign,nonatomic) double dockOffscreenProgress;                                                                                            //@synthesize dockOffscreenProgress=_dockOffscreenProgress - In the implementation block
@property (assign,nonatomic) BOOL wantsFastIconReordering;                                                                                            //@synthesize wantsFastIconReordering=_wantsFastIconReordering - In the implementation block
@property (assign,nonatomic) BOOL shouldIndicateImpossibleDrop;                                                                                       //@synthesize shouldIndicateImpossibleDrop=_shouldIndicateImpossibleDrop - In the implementation block
@property (getter=isPresentingFolder,nonatomic,readonly) BOOL presentingFolder; 
@property (nonatomic,readonly) SBFolderController * presentedFolderController; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIWindow * animationWindow; 
@property (nonatomic,readonly) UIView * fallbackIconContainerView; 
@property (nonatomic,readonly) UIView * extraViewsContainer; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
@property (nonatomic,readonly) SBHIconModel * iconModel; 
@property (nonatomic,readonly) SBIconListView * currentIconListView; 
@property (nonatomic,readonly) SBIconListView * dockIconListView; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
-(void)dealloc;
-(NSString *)description;
-(id<SBFloatingDockViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBFloatingDockViewControllerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIView *)containerView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(SBFloatingDockView *)dockView;
-(void)setDockView:(SBFloatingDockView *)arg1 ;
-(double)maximumContentHeight;
-(SBHIconManager *)iconManager;
-(double)contentHeight;
-(UIWindow *)animationWindow;
-(SBHIconModel *)iconModel;
-(SBIconListView *)currentIconListView;
-(SBIconListView *)dockIconListView;
-(UIView *)fallbackIconContainerView;
-(id)targetIconContainerView;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)setUnderlyingPresentationStyleConfiguration:(SBHFloatingDockStyleConfiguration *)arg1 ;
-(SBIconListModel *)dockListModel;
-(void)_rebuildUserIconListView;
-(UIViewController*<SBFloatingDockSuggestionsViewProviding>)suggestionsViewController;
-(void)setFolderPresentingViewController:(SBFolderPresentingViewController *)arg1 ;
-(void)setScalingView:(SBFTouchPassThroughView *)arg1 ;
-(void)iconManagerDidChangeIconModel:(id)arg1 ;
-(void)iconModelDidLayout:(id)arg1 ;
-(void)iconEditingDidChange:(id)arg1 ;
-(void)iconDraggingDidChange:(id)arg1 ;
-(void)reduceTransparencyEnabledStateDidChange:(id)arg1 ;
-(void)_sizeCategoryDidChange:(id)arg1 ;
-(double)contentHeightForFrame:(CGRect)arg1 ;
-(double)translationFromFullyPresentedFrame;
-(double)lastDockHeight;
-(void)setLastDockHeight:(double)arg1 ;
-(id)userIconListView;
-(id)recentIconListView;
-(double)dockOffscreenProgress;
-(double)minimumVerticalMarginForFrame:(CGRect)arg1 ;
-(double)maximumDockContinuousCornerRadius;
-(SBFolderPresentingViewController *)folderPresentingViewController;
-(SBFolderController *)presentedFolderController;
-(void)enumerateIconListViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVisibleIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)dockViewWillBecomeVisible;
-(void)dockViewWillResignVisible;
-(void)dockViewDidResignVisible;
-(void)dockViewDidBecomeVisible;
-(id)userIconLocation;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(id)suggestionsIconLocation;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(void)setTransitioningUnderlyingPresentationStyleConfiguration:(BOOL)arg1 ;
-(void)setTransitionTargetUnderlyingPresentationStyleConfiguration:(SBHFloatingDockStyleConfiguration *)arg1 ;
-(void)_updateDockForStyleConfiguration:(id)arg1 ;
-(SBHFloatingDockStyleConfiguration *)transitionTargetUnderlyingPresentationStyleConfiguration;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(id)dockViewIfExists;
-(void)setDockListModel:(SBIconListModel *)arg1 ;
-(void)_resizeDockForChangedNumberOfIconsAnimated:(BOOL)arg1 ;
-(SBHFloatingDockStyleConfiguration *)underlyingPresentationStyleConfiguration;
-(void)_updateFolderIconBackgroundsForStyleConfiguration:(id)arg1 ;
-(void)_updatePresentedFolderBackgroundForStyleConfiguration:(id)arg1 ;
-(void)_updatePlatterShadowForStyleConfiguration:(id)arg1 ;
-(BOOL)wantsFastIconReordering;
-(void)setWantsFastIconReordering:(BOOL)arg1 ;
-(unsigned long long)_backgroundEffectForPresentedFolder;
-(void)_rebuildAfterIconModelChange;
-(BOOL)isPresentingFolder;
-(unsigned long long)_platterEffectForPresentedFolder;
-(BOOL)shouldIndicateImpossibleDrop;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)_coalesceRequestsToResizeDockForChangedNumberOfIcons;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(unsigned long long)_currentFolderIconBackgroundStyle;
-(SBHomeScreenIconTransitionAnimator *)currentFolderAnimator;
-(NSMutableArray *)currentExpandCompletions;
-(void)setCurrentExpandCompletions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentCollapseCompletions;
-(void)setCurrentCollapseCompletions:(NSMutableArray *)arg1 ;
-(void)_presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldOpenFolderIcon:(id)arg1 ;
-(BOOL)_isInAppToAppTransition;
-(void)setCurrentFolderAnimator:(SBHomeScreenIconTransitionAnimator *)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(SBFTouchPassThroughView *)scalingView;
-(void)dismissPresentedFolderAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3 ;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(Class)controllerClassForFolder:(id)arg1 ;
-(BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2 ;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2 ;
-(BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2 ;
-(void)folderControllerShouldBeginEditing:(id)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg1 ;
-(void)folderControllerWillBeginScrolling:(id)arg1 ;
-(void)folderControllerDidEndScrolling:(id)arg1 ;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3 ;
-(id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4 ;
-(BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4 ;
-(void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3 ;
-(void)folderControllerWillOpen:(id)arg1 ;
-(void)folderControllerDidOpen:(id)arg1 ;
-(void)folderControllerWillClose:(id)arg1 ;
-(void)folderControllerDidClose:(id)arg1 ;
-(id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2 ;
-(id)folderPresentationController:(id)arg1 animationControllerForTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)folderPresentationController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(double)statusBarHeightForFolderPresentationController:(id)arg1 ;
-(double)minimumHomeScreenScaleForFolderPresentationController:(id)arg1 ;
-(id)folderPresentationController:(id)arg1 sourceViewForPresentingViewController:(id)arg2 ;
-(UIView *)extraViewsContainer;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithIconManager:(id)arg1 iconViewProvider:(id)arg2 ;
-(void)setSuggestionsViewController:(UIViewController*<SBFloatingDockSuggestionsViewProviding>)arg1 ;
-(double)preferredVerticalMargin;
-(double)requestedVerticalMargin;
-(void)setRequestedVerticalMargin:(double)arg1 ;
-(CGRect)floatingDockScreenFrame;
-(CGRect)floatingDockScreenPresentationFrame;
-(void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(void)enumerateIconListsUsingBlock:(/*^block*/id)arg1 ;
-(void)prepareForTransitionToStyleConfiguration:(id)arg1 fromDockVisible:(BOOL)arg2 toDockVisible:(BOOL)arg3 ;
-(void)cleanUpAfterUnderlyingBackgroundStyleTransition;
-(void)setDockOffscreenProgress:(double)arg1 ;
-(void)_addDockGestureRecognizer:(id)arg1 ;
-(void)_setPaddingEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)floatingDockSuggestionsViewControllerDidChangeNumberOfVisibleSuggestions:(id)arg1 ;
-(void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setShouldIndicateImpossibleDrop:(BOOL)arg1 ;
-(BOOL)isTransitioningUnderlyingBackgroundStyle;
@end

