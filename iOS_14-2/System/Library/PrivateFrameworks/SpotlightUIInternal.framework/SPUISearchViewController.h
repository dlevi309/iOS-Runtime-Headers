/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SPUISearchHeaderDelegate.h>
#import <libobjc.A.dylib/SearchUIFirstTimeExperienceDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/SearchUIResultsViewDelegate.h>

@protocol SPUISearchViewControllerDelegate, SPUISearchViewControllerSizingDelegate;
@class _UILegibilitySettings, SPUISearchHeader, NSMutableSet, SPUISearchFirstTimeViewController, SPUIResultsViewController, SPUILockScreenFooterView, UIView, SPUITestingHelper, NSTimer, SPUINavigationController, NSString;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUIResultsViewDelegate, UIGestureRecognizerDelegate, SFFeedbackListener, SearchUIResultsViewDelegate> {

	BOOL _internetOverrideForPPT;
	BOOL _lastQueryWasAuthenticated;
	BOOL _clearQueryOnDismissal;
	BOOL _expandPlatterOnAppear;
	id<SPUISearchViewControllerDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	SPUISearchHeader* _searchHeader;
	NSMutableSet* _allHeaderViews;
	SPUISearchFirstTimeViewController* _firstTimeExperienceViewController;
	SPUIResultsViewController* _searchResultViewController;
	SPUIResultsViewController* _proactiveResultViewController;
	SPUILockScreenFooterView* _lockScreenFooterView;
	UIView* _tapToRadarView;
	unsigned long long _presentationMode;
	double _timeAtDismissal;
	SPUITestingHelper* _testingHelper;
	NSTimer* _windowExpansionTimer;
	unsigned long long _feedbackBackgroundTaskIdentifier;
	unsigned long long _queryIdAtInvoke;
	id<SPUISearchViewControllerSizingDelegate> _sizingDelegate;
	unsigned long long _presentationSource;

}

@property (retain) SPUISearchHeader * searchHeader;                                                    //@synthesize searchHeader=_searchHeader - In the implementation block
@property (retain) NSMutableSet * allHeaderViews;                                                      //@synthesize allHeaderViews=_allHeaderViews - In the implementation block
@property (retain) SPUISearchFirstTimeViewController * firstTimeExperienceViewController;              //@synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController - In the implementation block
@property (retain) SPUIResultsViewController * searchResultViewController;                             //@synthesize searchResultViewController=_searchResultViewController - In the implementation block
@property (retain) SPUIResultsViewController * proactiveResultViewController;                          //@synthesize proactiveResultViewController=_proactiveResultViewController - In the implementation block
@property (retain) SPUILockScreenFooterView * lockScreenFooterView;                                    //@synthesize lockScreenFooterView=_lockScreenFooterView - In the implementation block
@property (retain) UIView * tapToRadarView;                                                            //@synthesize tapToRadarView=_tapToRadarView - In the implementation block
@property (assign) unsigned long long presentationMode;                                                //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign) BOOL internetOverrideForPPT;                                                        //@synthesize internetOverrideForPPT=_internetOverrideForPPT - In the implementation block
@property (assign) BOOL lastQueryWasAuthenticated;                                                     //@synthesize lastQueryWasAuthenticated=_lastQueryWasAuthenticated - In the implementation block
@property (assign) BOOL clearQueryOnDismissal;                                                         //@synthesize clearQueryOnDismissal=_clearQueryOnDismissal - In the implementation block
@property (assign) BOOL expandPlatterOnAppear;                                                         //@synthesize expandPlatterOnAppear=_expandPlatterOnAppear - In the implementation block
@property (assign) double timeAtDismissal;                                                             //@synthesize timeAtDismissal=_timeAtDismissal - In the implementation block
@property (retain) SPUITestingHelper * testingHelper;                                                  //@synthesize testingHelper=_testingHelper - In the implementation block
@property (retain) SPUINavigationController * navigationController; 
@property (retain) NSTimer * windowExpansionTimer;                                                     //@synthesize windowExpansionTimer=_windowExpansionTimer - In the implementation block
@property (assign) unsigned long long feedbackBackgroundTaskIdentifier;                                //@synthesize feedbackBackgroundTaskIdentifier=_feedbackBackgroundTaskIdentifier - In the implementation block
@property (assign) unsigned long long queryIdAtInvoke;                                                 //@synthesize queryIdAtInvoke=_queryIdAtInvoke - In the implementation block
@property (__weak) id<SPUISearchViewControllerSizingDelegate> sizingDelegate;                          //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
@property (readonly) unsigned long long presentationSource;                                            //@synthesize presentationSource=_presentationSource - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,readonly) SPUISearchHeader * headerView; 
@property (assign,nonatomic) BOOL shouldShowKeyboardInputBars; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)displayTapToRadar;
+(BOOL)isFeedbackSelector:(SEL)arg1 ;
+(void)_updateHeaderView:(id)arg1 fromText:(id)arg2 fromToken:(id)arg3 ;
+(BOOL)shouldShowAsTypedSuggestion;
-(unsigned long long)presentationSource;
-(void)dictationButtonPressed;
-(void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2 ;
-(void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 queryKind:(unsigned long long)arg3 ;
-(void)setInternetOverrideForPPT:(BOOL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)currentQuery;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)returnKeyPressed;
-(SPUISearchFirstTimeViewController *)firstTimeExperienceViewController;
-(BOOL)sectionShouldBeExpanded:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(id<SPUISearchViewControllerSizingDelegate>)sizingDelegate;
-(void)setTestingHelper:(SPUITestingHelper *)arg1 ;
-(void)dragInitiated;
-(BOOL)lastQueryWasAuthenticated;
-(void)performWebSearch;
-(void)updatePlatterMode;
-(BOOL)optOutOfGoButton;
-(id)init;
-(double)distanceToTopOfAppIcons;
-(void)activateFirstTimeExperienceViewIfNecessary;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1 ;
-(id<SPUISearchViewControllerDelegate>)delegate;
-(void)clearTimerExpired;
-(BOOL)hasContentInSearchField;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SPUIResultsViewController *)proactiveResultViewController;
-(void)endBackgroundTaskIfNeeded;
-(void)performReturnKeyPressAndExpandWidowIfNeeded;
-(void)setWindowExpansionTimer:(NSTimer *)arg1 ;
-(BOOL)currentQueryIdMatchesResultInGeneralModel;
-(void)purgeMemory;
-(void)spotlightDidBackground;
-(unsigned long long)feedbackBackgroundTaskIdentifier;
-(void)expandWindowIfNeeded;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)tapToRadarPressed;
-(id)userActivityFromIntent:(id)arg1 ;
-(void)clearSearchResults;
-(SPUITestingHelper *)testingHelper;
-(SPUISearchHeader *)searchHeader;
-(id)createAdditionalHeaderView;
-(id)proactiveResultsTestingObject;
-(void)getUserActivityForResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)presentationSupportsChunky;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)cancelButtonPressed;
-(void)firstTimeExperienceContinueButtonPressed;
-(BOOL)internetOverrideForPPT;
-(void)setDelegate:(id<SPUISearchViewControllerDelegate>)arg1 ;
-(void)searchViewDidDismissWithReason:(unsigned long long)arg1 ;
-(void)showVerticalScrollIndicators:(BOOL)arg1 ;
-(void)setTimeAtDismissal:(double)arg1 ;
-(void)launchSiriWithUtteranceText:(id)arg1 source:(long long)arg2 ;
-(UIView *)tapToRadarView;
-(void)setAllHeaderViews:(NSMutableSet *)arg1 ;
-(BOOL)expandPlatterOnAppear;
-(void)resultsViewController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(BOOL)arg3 ;
-(void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)setFirstTimeExperienceViewController:(SPUISearchFirstTimeViewController *)arg1 ;
-(BOOL)shouldShowKeyboardInputBars;
-(void)didEngageResult:(id)arg1 ;
-(void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(BOOL)arg3 ;
-(void)setSizingDelegate:(id<SPUISearchViewControllerSizingDelegate>)arg1 ;
-(void)setClearQueryOnDismissal:(BOOL)arg1 ;
-(NSMutableSet *)allHeaderViews;
-(unsigned long long)presentationMode;
-(void)setSearchResultViewController:(SPUIResultsViewController *)arg1 ;
-(NSTimer *)windowExpansionTimer;
-(void)animateChunkyEnabled:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)didScrollPastBottomOfContent;
-(void)setExpandPlatterOnAppear:(BOOL)arg1 ;
-(void)searchViewWillDismissWithReason:(unsigned long long)arg1 ;
-(void)invalidateWindowExpansionTimer;
-(void)didChangeExpansionStateForSection:(id)arg1 expanded:(BOOL)arg2 ;
-(void)updateResponderChainIfNeeded;
-(void)searchThroughPunchoutForResult:(id)arg1 forQuery:(id)arg2 ;
-(void)setQueryIdAtInvoke:(unsigned long long)arg1 ;
-(BOOL)allowInternet;
-(void)didBeginScrollingResults;
-(unsigned long long)queryIdAtInvoke;
-(void)enableChunky:(BOOL)arg1 ;
-(SPUILockScreenFooterView *)lockScreenFooterView;
-(void)setInternetOverrideToDisable:(BOOL)arg1 ;
-(void)setLastQueryWasAuthenticated:(BOOL)arg1 ;
-(void)setSearchHeader:(SPUISearchHeader *)arg1 ;
-(void)didBeginEditing;
-(double)timeAtDismissal;
-(void)updateHeaderViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setFeedbackBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(SPUISearchHeader *)headerView;
-(void)setTapToRadarView:(UIView *)arg1 ;
-(id)viewControllerForPresenting;
-(void)searchViewWillPresentFromSource:(unsigned long long)arg1 ;
-(void)activateViewController:(id)arg1 animate:(BOOL)arg2 ;
-(id)contentScrollView;
-(void)searchThroughPunchoutForResult:(id)arg1 resultTitle:(id)arg2 forQuery:(id)arg3 ;
-(void)didTapInEmptyRegion;
-(void)searchViewDidUpdatePresentationProgress:(double)arg1 ;
-(void)updateFooterView;
-(id)searchResultsTestingObject;
-(void)setShouldShowKeyboardInputBars:(BOOL)arg1 ;
-(void)willUpdateFromResultsWithHighlightedResult:(id)arg1 ;
-(void)searchViewDidPresentFromSource:(unsigned long long)arg1 ;
-(void)setProactiveResultViewController:(SPUIResultsViewController *)arg1 ;
-(id)activeViewController;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)checkClearTimer;
-(void)setLockScreenFooterView:(SPUILockScreenFooterView *)arg1 ;
-(id)firstResultIgnoringSuggestionsIfNeeded;
-(void)scheduleWindowExpansionWithInterval:(double)arg1 ;
-(void)dealloc;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(double)contentHeight;
-(SPUIResultsViewController *)searchResultViewController;
-(void)activateFirstTimeExperienceViewAnimate:(BOOL)arg1 ;
-(BOOL)clearQueryOnDismissal;
@end

