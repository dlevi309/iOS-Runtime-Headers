/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol NCNotificationStructuredListViewControllerDelegate <UIScrollViewDelegate>
@optional
-(void)notificationStructuredListViewController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(BOOL)notificationStructuredListViewController:(id)arg1 isClockNotificationRequest:(id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(BOOL)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)arg1;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
-(id)notificationStructuredListViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 presentingLongLook:(BOOL)arg2;
-(id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1;
-(id)legibilitySettingsForNotificationStructuredListViewController:(id)arg1;
-(id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)arg1;
-(void)notificationStructuredListViewController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)arg1;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
-(BOOL)notificationStructuredListViewController:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
-(void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)arg1;
-(id)notificationStructuredListViewController:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(BOOL)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)arg1;
-(BOOL)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)arg1;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1;
-(void)notificationStructuredListViewController:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)arg1;
-(void)notificationStructuredListViewControllerDidScroll:(id)arg1;
-(void)notificationStructuredListViewControllerDidEndScrolling:(id)arg1;

@required
-(void)notificationStructuredListViewController:(id)arg1 requestsAuthenticationAndPerformBlock:(/*^block*/id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4;
-(void)notificationStructuredListViewController:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
-(void)notificationStructuredListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6;
-(void)notificationStructuredListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;

@end

