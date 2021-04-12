/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BNPostingPrivate.h>
#import <libobjc.A.dylib/BNPresentingDelegate.h>
#import <libobjc.A.dylib/BNBannerSourceListenerDelegate.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>
#import <libobjc.A.dylib/BNPosting.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>

@protocol BSInvalidatable;
@class SBBannerAuthority, BNBannerController, BNContentViewController, BNBannerSourceListener, NSMutableArray, UIPanGestureRecognizer, NSMapTable, NSHashTable, NSMutableSet, UIWindow, NSString;

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, BNPosting, SBButtonEventsHandler> {

	SBBannerAuthority* _bannerAuthority;
	BNBannerController* _bannerController;
	BNContentViewController* _contentViewController;
	BNBannerSourceListener* _bannerSourceListener;
	NSMutableArray* _windowLevelAssertions;
	UIPanGestureRecognizer* _panGesture;
	BOOL _installedAsSystemGesture;
	NSMutableArray* _gesturePriorityAssertions;
	NSMapTable* _presentablesToGesturePriorityAssertions;
	id<BSInvalidatable> _presenterVisibilityGestureRecognizerPriorityAssertion;
	NSHashTable* _suppressionAssertions;
	NSMutableSet* _clientSuppressionAssertions;
	id<BSInvalidatable> _systemStatusBarAssertion;
	id<BSInvalidatable> _appsStatusBarAssertion;
	NSMutableSet* _statusBarAssertionReasons;
	UIWindow* _bannerWindow;

}

@property (nonatomic,readonly) UIWindow * bannerWindow;                                      //@synthesize bannerWindow=_bannerWindow - In the implementation block
@property (nonatomic,readonly) id<BNLayoutManaging> layoutManager; 
@property (getter=isPresentingBanner,nonatomic,readonly) BOOL presentingBanner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultAuthorizedBundleIDs;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)_handleButtonEventWithTest:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleVolumeUpButtonPress;
-(void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertion;
-(id)_newBannerWindow;
-(BOOL)handleHomeButtonPress;
-(BOOL)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id*)arg5 ;
-(BOOL)isPresentingBanner;
-(void)presenter:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4 ;
-(void)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(id)init;
-(id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(out id*)arg6 ;
-(void)dismissAllBannersAnimated:(BOOL)arg1 reason:(id)arg2 ;
-(void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertion;
-(id)_bannerSuspensionReasonForSuppressionAssertionReason:(id)arg1 ;
-(id)_statusBarAssertionReasonForPresentable:(id)arg1 ;
-(void)presenter:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3 userInfo:(id)arg4 ;
-(id)panGestureRecognizerForPresenter:(id)arg1 ;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(void)_revealStatusIfNecessaryForPresentable:(id)arg1 ;
-(id<BNLayoutManaging>)layoutManager;
-(void)presenterRelinquishesVisibility:(id)arg1 ;
-(void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2 ;
-(id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id*)arg2 ;
-(id)acquireBannerSuppressionAssertionForReason:(id)arg1 ;
-(CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 translationInView:(id)arg3 ;
-(id)_acquireGestureRecognizerPriorityAssertionWithPriority:(long long)arg1 reason:(id)arg2 ;
-(id)_layoutDescriptionWithBounds:(CGRect)arg1 ;
-(UIWindow *)bannerWindow;
-(BOOL)_shouldHideStatusBarForPresentable:(id)arg1 ;
-(id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)arg1 priority:(long long)arg2 reason:(id)arg3 ;
-(CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 velocityInView:(id)arg3 ;
-(void)_updateWindowLevel;
-(void)presenter:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(BOOL)bannerSourceListener:(id)arg1 recommendsSuspending:(BOOL)arg2 forReason:(id)arg3 revokingCurrent:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_isPresentableHUD:(id)arg1 ;
-(void)presenterRequestsVisibility:(id)arg1 ;
-(void)_hideStatusIfNecessaryForPresentable:(id)arg1 ;
-(CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForEvent:(id)arg3 inView:(id)arg4 ;
-(void)bannerSourceListener:(id)arg1 presentationSize:(out CGSize*)arg2 containerSize:(out CGSize*)arg3 error:(id*)arg4 ;
-(void)_updateGesturePriority;
-(BOOL)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4 ;
-(void)assistantWillAppear:(id)arg1 ;
-(id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id*)arg5 ;
-(CGPoint)presenter:(id)arg1 gestureRecognizer:(id)arg2 locationForTouch:(id)arg3 inView:(id)arg4 ;
-(id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2 ;
-(id)bannerSourceListener:(id)arg1 requestsRevokingPresentablesWithIdentification:(id)arg2 reason:(id)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(id*)arg6 ;
@end

