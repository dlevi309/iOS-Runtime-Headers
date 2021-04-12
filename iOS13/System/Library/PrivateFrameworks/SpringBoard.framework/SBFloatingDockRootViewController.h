/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBFloatingDockViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>

@protocol SBFloatingDockRootViewControllerDelegate, SBIconViewProviding;
@class _UILegibilitySettings, SBApplication, FBDisplayLayoutElement, SBFloatingDockViewController, SBIconController, SBApplicationController, SBAppSuggestionManager, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBFAnalyticsClient, SBWorkspaceApplicationSceneTransitionContext, SBFloatingDockSuggestionsModel, SBFolderController, SBIconListView, NSString, NSSet;

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBIconViewQuerying, SBIconLocationPresenting> {

	SCD_Struct_SB38 _delegateRespondsTo;
	double _presentedProgress;
	BOOL _supressingKeyboard;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _transitioningPresentation;
	BOOL _useDismissHitTestPadding;
	id<SBFloatingDockRootViewControllerDelegate> _delegate;
	SBApplication* _requestedSuggestedApplication;
	FBDisplayLayoutElement* _displayLayoutElement;
	SBFloatingDockViewController* _floatingDockViewController;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBAppSuggestionManager* _appSuggestionManager;
	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	SBRecentDisplayItemsController* _recentsController;
	SBRecentDisplayItemsDataStore* _recentsDataStore;
	SBFAnalyticsClient* _analyticsClient;
	SBWorkspaceApplicationSceneTransitionContext* _currentTransitionContext;
	id<SBIconViewProviding> _iconViewProvider;
	SBFloatingDockSuggestionsModel* _suggestionsModel;

}

@property (nonatomic,readonly) SBIconController * iconController;                                                  //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBApplicationController * applicationController;                                    //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,readonly) SBAppSuggestionManager * appSuggestionManager;                                      //@synthesize appSuggestionManager=_appSuggestionManager - In the implementation block
@property (nonatomic,retain) SBFloatingDockViewController * floatingDockViewController;                            //@synthesize floatingDockViewController=_floatingDockViewController - In the implementation block
@property (nonatomic,retain) SBLayoutStateTransitionCoordinator * layoutStateTransitionCoordinator;                //@synthesize layoutStateTransitionCoordinator=_layoutStateTransitionCoordinator - In the implementation block
@property (nonatomic,retain) SBRecentDisplayItemsController * recentsController;                                   //@synthesize recentsController=_recentsController - In the implementation block
@property (nonatomic,retain) SBRecentDisplayItemsDataStore * recentsDataStore;                                     //@synthesize recentsDataStore=_recentsDataStore - In the implementation block
@property (assign,getter=isTransitioningPresentation,nonatomic) BOOL transitioningPresentation;                    //@synthesize transitioningPresentation=_transitioningPresentation - In the implementation block
@property (assign,nonatomic) BOOL useDismissHitTestPadding;                                                        //@synthesize useDismissHitTestPadding=_useDismissHitTestPadding - In the implementation block
@property (nonatomic,retain) SBFAnalyticsClient * analyticsClient;                                                 //@synthesize analyticsClient=_analyticsClient - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplicationSceneTransitionContext * currentTransitionContext;              //@synthesize currentTransitionContext=_currentTransitionContext - In the implementation block
@property (nonatomic,__weak,readonly) id<SBIconViewProviding> iconViewProvider;                                    //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,retain) SBFloatingDockSuggestionsModel * suggestionsModel;                                    //@synthesize suggestionsModel=_suggestionsModel - In the implementation block
@property (assign,nonatomic,__weak) id<SBFloatingDockRootViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFloatingDockPresented,nonatomic,readonly) BOOL floatingDockPresented; 
@property (getter=isFloatingDockFullyPresented,nonatomic,readonly) BOOL floatingDockFullyPresented; 
@property (nonatomic,readonly) double presentedProgress; 
@property (nonatomic,readonly) double maximumFloatingDockHeight; 
@property (nonatomic,readonly) double floatingDockHeight; 
@property (nonatomic,readonly) double effectiveFloatingDockHeight; 
@property (nonatomic,readonly) double preferredVerticalMargin; 
@property (nonatomic,readonly) double floatingDockViewTopMargin; 
@property (nonatomic,readonly) double translationFromFullyPresentedFrame; 
@property (nonatomic,readonly) CGRect floatingDockScreenFrame; 
@property (nonatomic,readonly) CGRect floatingDockScreenPresentationFrame; 
@property (nonatomic,readonly) double maximumDockContinuousCornerRadius; 
@property (nonatomic,retain) SBApplication * requestedSuggestedApplication;                                        //@synthesize requestedSuggestedApplication=_requestedSuggestedApplication - In the implementation block
@property (getter=isPresentingFolder,nonatomic,readonly) BOOL presentingFolder; 
@property (nonatomic,readonly) SBFolderController * presentedFolderController; 
@property (nonatomic,readonly) FBDisplayLayoutElement * displayLayoutElement;                                      //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) SBIconListView * userIconListView; 
@property (nonatomic,readonly) SBIconListView * suggestionsIconListView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
-(id)initWithCoder:(id)arg1 ;
-(id<SBFloatingDockRootViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBFloatingDockRootViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_beginPresentationTransition;
-(SBApplicationController *)applicationController;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(double)translationFromFullyPresentedFrame;
-(void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2 ;
-(SBIconListView *)userIconListView;
-(void)setFloatingDockViewController:(SBFloatingDockViewController *)arg1 ;
-(double)maximumDockContinuousCornerRadius;
-(SBFolderController *)presentedFolderController;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningContent:(id)arg1 ;
-(BOOL)isPresentingFolder;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id<SBIconViewProviding>)iconViewProvider;
-(void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(BOOL)arg4 ;
-(void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(double)statusBarHeightForFloatingDockViewController:(id)arg1 ;
-(double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(void)floatingDockViewController:(id)arg1 wantsToBePresented:(BOOL)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(double)preferredVerticalMargin;
-(CGRect)floatingDockScreenFrame;
-(CGRect)floatingDockScreenPresentationFrame;
-(void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3 ;
-(void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(SBFloatingDockViewController *)floatingDockViewController;
-(SBIconController *)iconController;
-(SBLayoutStateTransitionCoordinator *)layoutStateTransitionCoordinator;
-(BOOL)isFloatingDockPresented;
-(double)floatingDockHeight;
-(double)floatingDockViewTopMargin;
-(BOOL)isFloatingDockFullyPresented;
-(void)registerAsSharedInstance;
-(SBIconListView *)suggestionsIconListView;
-(SBApplication *)requestedSuggestedApplication;
-(void)setRequestedSuggestedApplication:(SBApplication *)arg1 ;
-(SBFloatingDockSuggestionsModel *)suggestionsModel;
-(SBRecentDisplayItemsDataStore *)recentsDataStore;
-(SBAppSuggestionManager *)appSuggestionManager;
-(void)setLayoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 appSuggestionManager:(id)arg5 layoutStateTransitionCoordinator:(id)arg6 iconViewProvider:(id)arg7 analyticsClient:(id)arg8 ;
-(double)maximumFloatingDockHeight;
-(double)effectiveFloatingDockHeight;
-(void)dismissPresentedFolderAnimated:(BOOL)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPresentationProgress:(double)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(double)presentedProgress;
-(BOOL)isTransitioningPresentation;
-(void)prepareForTransitionToEnvironmentMode:(long long)arg1 fromDockVisible:(BOOL)arg2 toDockVisible:(BOOL)arg3 ;
-(void)cleanupAfterTransitionToEnvironmentMode:(long long)arg1 ;
-(void)setSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 ;
-(void)_layoutFloatingDockViewWithProgress:(double)arg1 ;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_setPresentedProgress:(double)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 ;
-(void)setCurrentTransitionContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 ;
-(void)setUseDismissHitTestPadding:(BOOL)arg1 ;
-(BOOL)useDismissHitTestPadding;
-(CGRect)_calculateStandardDockFrame;
-(void)_endPresentationTransition;
-(void)setTransitioningPresentation:(BOOL)arg1 ;
-(double)_floatingDockViewTranslation;
-(double)_floatingDockViewTranslationForHeight:(double)arg1 ;
-(SBWorkspaceApplicationSceneTransitionContext *)currentTransitionContext;
-(void)setPresentationProgressInteractively:(double)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPresentationProgressInteractively:(double)arg1 ;
-(void)setPresentationProgress:(double)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(SBRecentDisplayItemsController *)recentsController;
-(void)setRecentsController:(SBRecentDisplayItemsController *)arg1 ;
-(void)setRecentsDataStore:(SBRecentDisplayItemsDataStore *)arg1 ;
-(SBFAnalyticsClient *)analyticsClient;
-(void)setAnalyticsClient:(SBFAnalyticsClient *)arg1 ;
@end

