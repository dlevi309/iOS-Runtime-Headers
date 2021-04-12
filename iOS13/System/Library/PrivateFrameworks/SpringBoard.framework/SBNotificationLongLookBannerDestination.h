/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NCNotificationViewControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@protocol NCNotificationAlertDestinationNCNotificationViewControllerDelegatePrivateNCNotificationViewControllerObserving, BSInvalidatable;
@class NCNotificationViewController, NSString;

@interface SBNotificationLongLookBannerDestination : NSObject <NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving, SBHomeGestureParticipantDelegate> {

	NCNotificationViewController* _presentedBanner;
	id<NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> _parentDestination;
	id<BSInvalidatable> _idleTimerDisableAssertion;
	id<BSInvalidatable> _starModeDisableAssertion;

}

@property (assign,nonatomic,__weak) id<NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> parentDestination;              //@synthesize parentDestination=_parentDestination - In the implementation block
@property (nonatomic,retain) NCNotificationViewController * presentedBanner;                                                                                                               //@synthesize presentedBanner=_presentedBanner - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> idleTimerDisableAssertion;                                                                                                                //@synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> starModeDisableAssertion;                                                                                                                 //@synthesize starModeDisableAssertion=_starModeDisableAssertion - In the implementation block
@property (getter=isPresentingBanner,nonatomic,readonly) BOOL presentingBanner; 
@property (getter=isPreventingAutomaticLock,nonatomic,readonly) BOOL preventingAutomaticLock; 
@property (getter=isPreemptingSTAR,nonatomic,readonly) BOOL preemptingSTAR; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldNotificationRequestPresentAsLongLook:(id)arg1 ;
-(id)_delegate;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1 ;
-(void)notificationViewControllerWillPresent:(id)arg1 ;
-(void)notificationViewControllerDidPresent:(id)arg1 ;
-(void)notificationViewControllerWillDismiss:(id)arg1 ;
-(void)notificationViewControllerDidDismiss:(id)arg1 ;
-(BOOL)isPresentingBanner;
-(NCNotificationViewController *)presentedBanner;
-(id<BSInvalidatable>)idleTimerDisableAssertion;
-(void)setIdleTimerDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(id)initWithParentDestination:(id)arg1 ;
-(BOOL)isPreventingAutomaticLock;
-(BOOL)isPreemptingSTAR;
-(BOOL)shouldReceiveNotificationRequest:(id)arg1 ;
-(BOOL)canModifyNotificationRequest:(id)arg1 ;
-(BOOL)_presentedBannerMatchesNotificationRequest:(id)arg1 ;
-(BOOL)canWithdrawNotificationRequest:(id)arg1 ;
-(void)dismissPresentedBannerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)postNotificationRequest:(id)arg1 withPresentingViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setReadyForNotificationRequests;
-(id<BSInvalidatable>)starModeDisableAssertion;
-(void)setStarModeDisableAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_dismissBannerCompleted;
-(void)setPresentedBanner:(NCNotificationViewController *)arg1 ;
-(id<NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving>)parentDestination;
-(void)setParentDestination:(id<NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving>)arg1 ;
@end

