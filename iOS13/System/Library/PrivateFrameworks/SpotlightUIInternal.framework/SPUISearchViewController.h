/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SPUISearchHeaderDelegate.h>
#import <libobjc.A.dylib/SearchUIFirstTimeExperienceDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/SearchUIResultsViewDelegate.h>
#import <libobjc.A.dylib/APUIShortLookViewControllerDelegate.h>

@protocol SPUISearchViewControllerDelegate;
@class _UILegibilitySettings, SPUISearchHeader, NSMutableSet, SPUISearchFirstTimeViewController, SPUIResultsViewController, SPUILockScreenFooterView, SPUITestingHelper, NSString;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUIResultsViewDelegate, UIGestureRecognizerDelegate, SFFeedbackListener, SearchUIResultsViewDelegate, APUIShortLookViewControllerDelegate> {

	BOOL _internetOverrideForPPT;
	BOOL _lastQueryWasAuthenticated;
	id<SPUISearchViewControllerDelegate> _delegate;
	_UILegibilitySettings* _legibilitySettings;
	SPUISearchHeader* _searchHeader;
	NSMutableSet* _allHeaderViews;
	SPUISearchFirstTimeViewController* _firstTimeExperienceViewController;
	SPUIResultsViewController* _searchResultViewController;
	SPUIResultsViewController* _proactiveResultViewController;
	SPUILockScreenFooterView* _lockScreenFooterView;
	unsigned long long _presentationMode;
	double _timeAtDismissal;
	SPUITestingHelper* _testingHelper;
	unsigned long long _queryId;
	unsigned long long _feedbackBackgroundTaskIdentifier;

}

@property (retain) SPUISearchHeader * searchHeader;                                                    //@synthesize searchHeader=_searchHeader - In the implementation block
@property (retain) NSMutableSet * allHeaderViews;                                                      //@synthesize allHeaderViews=_allHeaderViews - In the implementation block
@property (retain) SPUISearchFirstTimeViewController * firstTimeExperienceViewController;              //@synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController - In the implementation block
@property (retain) SPUIResultsViewController * searchResultViewController;                             //@synthesize searchResultViewController=_searchResultViewController - In the implementation block
@property (retain) SPUIResultsViewController * proactiveResultViewController;                          //@synthesize proactiveResultViewController=_proactiveResultViewController - In the implementation block
@property (retain) SPUILockScreenFooterView * lockScreenFooterView;                                    //@synthesize lockScreenFooterView=_lockScreenFooterView - In the implementation block
@property (assign) unsigned long long presentationMode;                                                //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign) BOOL internetOverrideForPPT;                                                        //@synthesize internetOverrideForPPT=_internetOverrideForPPT - In the implementation block
@property (assign) BOOL lastQueryWasAuthenticated;                                                     //@synthesize lastQueryWasAuthenticated=_lastQueryWasAuthenticated - In the implementation block
@property (assign) double timeAtDismissal;                                                             //@synthesize timeAtDismissal=_timeAtDismissal - In the implementation block
@property (retain) SPUITestingHelper * testingHelper;                                                  //@synthesize testingHelper=_testingHelper - In the implementation block
@property (assign) unsigned long long queryId;                                                         //@synthesize queryId=_queryId - In the implementation block
@property (assign) unsigned long long feedbackBackgroundTaskIdentifier;                                //@synthesize feedbackBackgroundTaskIdentifier=_feedbackBackgroundTaskIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SPUISearchViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,readonly) SPUISearchHeader * headerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateHeaderView:(id)arg1 fromText:(id)arg2 fromToken:(id)arg3 ;
+(BOOL)shouldShowAsTypedSuggestion;
+(BOOL)isFeedbackSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<SPUISearchViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SPUISearchViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(SPUISearchHeader *)headerView;
-(id)contentScrollView;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)hideKeyboard;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)didEngageResult:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(unsigned long long)queryId;
-(id)currentQuery;
-(void)clearSearchResults;
-(SPUISearchHeader *)searchHeader;
-(id)activeViewController;
-(unsigned long long)presentationMode;
-(void)cancelButtonPressed;
-(void)endBackgroundTaskIfNeeded;
-(BOOL)allowInternet;
-(void)firstTimeExperienceContinueButtonPressed;
-(void)returnKeyPressed;
-(id)viewControllerForPresenting;
-(void)dismissIfNecessaryForIconDrag;
-(void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)purgeMemory;
-(BOOL)sectionShouldBeExpanded:(id)arg1 ;
-(void)getUserActivityForResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didChangeExpansionStateForSection:(id)arg1 expanded:(BOOL)arg2 ;
-(BOOL)hasShortLookViewControllerForResult:(id)arg1 ;
-(id)shortLookViewControllerForResult:(id)arg1 ;
-(void)didScrollPastBottomOfContent;
-(void)didBeginScrollingResults;
-(void)didTapInEmptyRegion;
-(double)distanceToTopOfAppIcons;
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2 ;
-(void)shortLookViewController:(id)arg1 willDisplayLongLookWithReason:(long long)arg2 ;
-(void)shortLookViewController:(id)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 shouldClearAction:(BOOL)arg4 ;
-(void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 shouldClearAction:(BOOL)arg4 ;
-(void)setTimeAtDismissal:(double)arg1 ;
-(void)setAllHeaderViews:(NSMutableSet *)arg1 ;
-(void)setSearchResultViewController:(SPUIResultsViewController *)arg1 ;
-(SPUIResultsViewController *)searchResultViewController;
-(void)setProactiveResultViewController:(SPUIResultsViewController *)arg1 ;
-(SPUIResultsViewController *)proactiveResultViewController;
-(void)activateViewController:(id)arg1 animate:(BOOL)arg2 ;
-(id)createAdditionalHeaderView;
-(void)setSearchHeader:(SPUISearchHeader *)arg1 ;
-(void)checkClearTimer;
-(void)spotlightDidBackground;
-(double)timeAtDismissal;
-(void)clearTimerExpired;
-(NSMutableSet *)allHeaderViews;
-(void)searchThroughPunchoutForResult:(id)arg1 forQuery:(id)arg2 ;
-(void)launchSiriWithUtteranceText:(id)arg1 source:(long long)arg2 ;
-(void)performSearchWithSuggestion:(id)arg1 ;
-(id)userActivityFromIntent:(id)arg1 ;
-(void)sendActionFeedbackFromShortLookViewController:(id)arg1 isPunchout:(BOOL)arg2 ;
-(void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(unsigned long long)arg3 ;
-(void)showVerticalScrollIndicators:(BOOL)arg1 ;
-(SPUILockScreenFooterView *)lockScreenFooterView;
-(void)setLockScreenFooterView:(SPUILockScreenFooterView *)arg1 ;
-(BOOL)queryIsPresent;
-(void)activateFirstTimeExperienceViewIfNecessary;
-(SPUISearchFirstTimeViewController *)firstTimeExperienceViewController;
-(unsigned long long)feedbackBackgroundTaskIdentifier;
-(void)setFeedbackBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)activateFirstTimeExperienceViewAnimate:(BOOL)arg1 ;
-(void)setFirstTimeExperienceViewController:(SPUISearchFirstTimeViewController *)arg1 ;
-(void)setInternetOverrideForPPT:(BOOL)arg1 ;
-(void)setTestingHelper:(SPUITestingHelper *)arg1 ;
-(SPUITestingHelper *)testingHelper;
-(void)setLastQueryWasAuthenticated:(BOOL)arg1 ;
-(void)updateHeaderViewsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)internetOverrideForPPT;
-(void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(BOOL)arg3 ;
-(void)didBeginEditing;
-(void)dictationButtonPressed;
-(void)willUpdateFromResults;
-(void)searchViewWillPresentFromSource:(unsigned long long)arg1 ;
-(void)searchViewDidUpdatePresentationProgress:(double)arg1 ;
-(void)dismissCancelButtonAnimated;
-(void)searchViewDidPresentFromSource:(unsigned long long)arg1 ;
-(void)searchViewWillDismissWithReason:(unsigned long long)arg1 ;
-(void)searchViewDidDismissWithReason:(unsigned long long)arg1 ;
-(void)setInternetOverrideToDisable:(BOOL)arg1 ;
-(id)searchResultsTestingObject;
-(id)proactiveResultsTestingObject;
-(BOOL)lastQueryWasAuthenticated;
@end

