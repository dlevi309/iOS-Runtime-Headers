/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIBannerTargetImplementation.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/SBBannerContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBBulletinWindowClient.h>
#import <libobjc.A.dylib/SBBulletinBusyClient.h>

@protocol BSInvalidatable;
@class NSHashTable, NSMutableArray, SBBannerContainerViewController, NSMapTable, NSString;

@interface SBBannerController : NSObject <SBUIBannerTargetImplementation, SBAssistantObserver, SBBannerContainerViewControllerDelegate, SBBulletinWindowClient, SBBulletinBusyClient> {

	NSHashTable* _sources;
	NSHashTable* _suppressionAssertions;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	SBBannerContainerViewController* _bannerViewController;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	unsigned long long _transitionCount;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	long long _overdueDismissReason;
	/*^block*/id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	/*^block*/id _assistantRevealCompletionBlock;
	/*^block*/id _assistantDismissCompletionBlock;
	NSMapTable* _bannerContextToViewControllerCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) long long bannerTargetIdiom; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_viewControllerForPresentation;
-(void*)bannerTargetIdentifier;
-(long long)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(id)_bannerItem;
-(id)_bannerContext;
-(void)assistantWillAppear:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
-(void)assistantWillDisappear:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 ;
-(id)acquireBannerSuppressionAssertionForReason:(id)arg1 ;
-(BOOL)isShowingBanner;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_updateBannerSuppressionState;
-(void)_setOverdueCompletionBlock:(/*^block*/id)arg1 ;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelBannerDismissTimers;
-(void)_tryToDismissWithAnimation:(BOOL)arg1 reason:(long long)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removePendingContextsForSourceNeedingRepop:(id)arg1 ;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(long long)arg2 ;
-(void)_presentBannerForContext:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_dequeueBannerIfPossible;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)arg1 ;
-(BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)arg1 existingDismissReason:(long long)arg2 ;
-(id)_newBannerContentViewController;
-(void)_dismissOverdueOrDequeueIfPossible;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(void)_dequeueAfterDelayIfPossible;
-(BOOL)_isItemShowable:(id)arg1 fromSource:(id)arg2 ;
-(BOOL)_canDequeueIgnoringStickyBanner:(BOOL)arg1 ;
-(id)_dequeueNextBannerContext;
-(void)_performTransition:(long long)arg1 withAnimation:(BOOL)arg2 context:(id)arg3 reason:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)_bannerContainerView;
-(BOOL)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2 ;
-(void)_acquireDeferOrientationUpdatesAssertionIfNeeded;
-(void)_setBannerSticky:(BOOL)arg1 ;
-(void)_performRevealTransitionWithContext:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performHideTransitionWithContext:(id)arg1 animated:(BOOL)arg2 reason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setBannerViewControllerForContext:(id)arg1 ;
-(void)_disposeOfDeferOrientationUpdatesAssertion;
-(void)_stopCurrentSound;
-(void)_dismissIntervalElapsed;
-(void)_replaceIntervalElapsed;
-(void)_setupBannerDismissTimers;
-(void)bannerViewControllerDidSelectAction:(id)arg1 ;
-(void)bannerViewControllerDidDismissAction:(id)arg1 ;
-(void)bulletinWindowStoppedBeingBusy;
-(BOOL)isShowingModalBannerWithKeyboard;
-(BOOL)isTransitioningBanner;
-(void)_soundDidFinishPlayingForBannerContext:(id)arg1 ;
@end

