/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFloatingDockRootViewControllerDelegate.h>
#import <libobjc.A.dylib/SBFolderPresentationObserver.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBRootFolderPageStateObserver.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBReusableViewMapDelegate.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBIconLocationPresenting.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>

@protocol BSInvalidatable, SBFloatingDockControllerDelegate;
@class NSSet, SBFloatingDockRootViewController, NSPointerArray, SBFAnalyticsClient, SBFloatingDockBehaviorAssertion, SBDeviceOrientationUpdateDeferralAssertion, SBReusableViewMap, PTToggleTestRecipe, SBMainScreenActiveInterfaceOrientationWindow, SBIndirectPanGestureRecognizer, UIHoverGestureRecognizer, SBFailingSystemGestureRecognizer, SBIconController, SBLayoutStateTransitionCoordinator, SBFolderController, SBFloatingDockViewController, UIViewController, SBIconListView, SBApplication, _UILegibilitySettings, NSString;

@interface SBFloatingDockController : NSObject <SBFloatingDockRootViewControllerDelegate, SBFolderPresentationObserver, SBSystemGestureRecognizerDelegate, SBRootFolderPageStateObserver, SBAssistantObserver, BSDescriptionProviding, SBReusableViewMapDelegate, SBLayoutStateTransitionObserver, SBIconViewQuerying, SBIconLocationPresenting, SBIconViewProviding> {

	SBFloatingDockRootViewController* _viewController;
	BOOL _homeScreenTransitioningToTodayView;
	BOOL _homeScreenTodayViewTransitioning;
	NSPointerArray* _floatingDockBehaviorAssertionsByLevel[12];
	NSPointerArray* _floatingDockWindowLevelAssertionsByPriority[5];
	SBFAnalyticsClient* _analyticsClient;
	SBFloatingDockBehaviorAssertion* _inAppFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _todayViewFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _openFolderOverHomeScreenFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _openFolderOverSceneLayoutFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _activeGestureFloatingDockBehaviorAssertion;
	SBFloatingDockBehaviorAssertion* _assistantFloatingDockBehaviorAssertion;
	SBDeviceOrientationUpdateDeferralAssertion* _deferOrientationUpdatesAssertion;
	SBReusableViewMap* _iconViewMap;
	id<BSInvalidatable> _floatingDockStateDumpHandle;
	PTToggleTestRecipe* _testRecipe;
	BOOL _wasFloatingDockPresentedByPointer;
	SBMainScreenActiveInterfaceOrientationWindow* _floatingDockWindow;
	id<SBFloatingDockControllerDelegate> _delegate;
	SBIndirectPanGestureRecognizer* _presentFloatingDockIndirectPanGestureRecognizer;
	UIHoverGestureRecognizer* _dismissFloatingDockHoverGestureRecognizer;
	SBFailingSystemGestureRecognizer* _dismissFloatingDockSystemGestureRecognizer;
	SBIconController* _iconController;
	SBFloatingDockBehaviorAssertion* _activeAssertion;
	SBLayoutStateTransitionCoordinator* _transitionCoordinator;

}

@property (nonatomic,readonly) SBFailingSystemGestureRecognizer * dismissFloatingDockSystemGestureRecognizer;                 //@synthesize dismissFloatingDockSystemGestureRecognizer=_dismissFloatingDockSystemGestureRecognizer - In the implementation block
@property (nonatomic,readonly) SBIconController * iconController;                                                             //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBMainScreenActiveInterfaceOrientationWindow * floatingDockWindow;                             //@synthesize floatingDockWindow=_floatingDockWindow - In the implementation block
@property (assign,nonatomic,__weak) SBFloatingDockBehaviorAssertion * activeAssertion;                                        //@synthesize activeAssertion=_activeAssertion - In the implementation block
@property (assign,nonatomic,__weak) SBLayoutStateTransitionCoordinator * transitionCoordinator;                               //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (getter=isPresentingFolder,nonatomic,readonly) BOOL presentingFolder; 
@property (nonatomic,readonly) SBFolderController * presentedFolderController; 
@property (nonatomic,readonly) SBFloatingDockViewController * floatingDockViewController; 
@property (assign,nonatomic,__weak) id<SBFloatingDockControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                             //@synthesize viewController=_viewController - In the implementation block
@property (getter=isFloatingDockPresented,nonatomic,readonly) BOOL floatingDockPresented; 
@property (getter=isFloatingDockFullyPresented,nonatomic,readonly) BOOL floatingDockFullyPresented; 
@property (assign,nonatomic) BOOL wasFloatingDockPresentedByPointer;                                                          //@synthesize wasFloatingDockPresentedByPointer=_wasFloatingDockPresentedByPointer - In the implementation block
@property (getter=isGesturePossible,nonatomic,readonly) BOOL gesturePossible; 
@property (nonatomic,readonly) SBIndirectPanGestureRecognizer * presentFloatingDockIndirectPanGestureRecognizer;              //@synthesize presentFloatingDockIndirectPanGestureRecognizer=_presentFloatingDockIndirectPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIHoverGestureRecognizer * dismissFloatingDockHoverGestureRecognizer;                          //@synthesize dismissFloatingDockHoverGestureRecognizer=_dismissFloatingDockHoverGestureRecognizer - In the implementation block
@property (nonatomic,readonly) double maximumFloatingDockHeight; 
@property (nonatomic,readonly) double floatingDockHeight; 
@property (nonatomic,readonly) double effectiveFloatingDockHeight; 
@property (nonatomic,readonly) double preferredVerticalMargin; 
@property (nonatomic,readonly) double floatingDockViewTopMargin; 
@property (nonatomic,readonly) double translationFromFullyPresentedFrame; 
@property (nonatomic,readonly) CGRect floatingDockScreenFrame; 
@property (nonatomic,readonly) CGRect floatingDockScreenPresentationFrame; 
@property (nonatomic,readonly) double maximumDockContinuousCornerRadius; 
@property (nonatomic,readonly) SBIconListView * userIconListView; 
@property (nonatomic,readonly) SBIconListView * suggestionsIconListView; 
@property (nonatomic,retain) SBApplication * requestedSuggestedApplication; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
+(BOOL)isFloatingDockSupported;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<SBFloatingDockControllerDelegate>)delegate;
-(void)setDelegate:(id<SBFloatingDockControllerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SBLayoutStateTransitionCoordinator *)transitionCoordinator;
-(UIViewController *)viewController;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 ;
-(unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2 ;
-(BOOL)viewMap:(id)arg1 shouldRecycleView:(id)arg2 ;
-(id)recycledViewsContainerProviderForViewMap:(id)arg1 ;
-(double)translationFromFullyPresentedFrame;
-(SBIconListView *)userIconListView;
-(double)maximumDockContinuousCornerRadius;
-(SBFolderController *)presentedFolderController;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(NSSet *)presentedIconLocations;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)isPresentingFolder;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(void)recycleIconView:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(void)dismissPresentedFolderAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
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
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4 ;
-(void)_setupStateDumper;
-(SBFloatingDockViewController *)floatingDockViewController;
-(id)iconViewMap;
-(void)iconManager:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)dismissFloatingDockIfPresentedAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentFloatingDockIfDismissedAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SBIconController *)iconController;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)initWithIconController:(id)arg1 ;
-(BOOL)isFloatingDockPresented;
-(void)assistantWillAppear:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(double)floatingDockHeight;
-(double)floatingDockViewTopMargin;
-(BOOL)isFloatingDockFullyPresented;
-(BOOL)isGesturePossible;
-(SBMainScreenActiveInterfaceOrientationWindow *)floatingDockWindow;
-(void)registerAsSharedInstance;
-(SBIconListView *)suggestionsIconListView;
-(BOOL)shouldShowCloseBoxForIconView:(id)arg1 proposedValue:(BOOL)arg2 ;
-(BOOL)handlePromptingUserToUninstallIcon:(id)arg1 location:(id)arg2 ;
-(void)assistantDidDisappear:(id)arg1 ;
-(SBApplication *)requestedSuggestedApplication;
-(void)setRequestedSuggestedApplication:(SBApplication *)arg1 ;
-(void)handlePresentFloatingDockHoverGesture:(id)arg1 ;
-(void)_handleDismissFloatingDockHoverGesture:(id)arg1 ;
-(id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 transitionCoordinator:(id)arg5 appSuggestionManager:(id)arg6 analyticsClient:(id)arg7 ;
-(id)initWithIconController:(id)arg1 analyticsClient:(id)arg2 ;
-(double)maximumFloatingDockHeight;
-(double)effectiveFloatingDockHeight;
-(BOOL)_canPresentFloatingDock;
-(void)setWasFloatingDockPresentedByPointer:(BOOL)arg1 ;
-(void)_presentFloatingDockIfDismissedAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_dismissFloatingDockIfPresentedAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissPresentedFolderAnimated:(BOOL)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_recalculateWindowLevelForWindowLevelAssertions;
-(unsigned long long)_indexOfPointerArray:(id)arg1 ofObject:(void*)arg2 ;
-(void)_clearGestureAssertion;
-(void)_evaluateAssertions:(unsigned long long)arg1 interactive:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_deriveActiveAssertion:(id*)arg1 dockProgress:(double*)arg2 ;
-(BOOL)wasFloatingDockPresentedByPointer;
-(double)_dockProgressForHoverTranslation:(double)arg1 ;
-(void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(SBFailingSystemGestureRecognizer *)dismissFloatingDockSystemGestureRecognizer;
-(SBIndirectPanGestureRecognizer *)presentFloatingDockIndirectPanGestureRecognizer;
-(UIHoverGestureRecognizer *)dismissFloatingDockHoverGestureRecognizer;
-(BOOL)_allowGestureRecognizers;
-(void)_handleTransitionForFolder:(id)arg1 atLevel:(unsigned long long)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)_configureFloatingDockBehaviorAssertionForOpenFolder:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2 ;
-(void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(BOOL)arg2 ;
-(BOOL)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1 ;
-(void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1 ;
-(double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1 ;
-(id)initWithAnalyticsClient:(id)arg1 ;
-(void)_addFloatingDockWindowLevelAssertion:(id)arg1 ;
-(void)_removeFloatingDockWindowLevelAssertion:(id)arg1 ;
-(void)_addFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateFloatingDockBehaviorAssertionsInteractive:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSystemGestureRecognizer:(id)arg1 ;
-(SBFloatingDockBehaviorAssertion *)activeAssertion;
-(void)setActiveAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
@end

