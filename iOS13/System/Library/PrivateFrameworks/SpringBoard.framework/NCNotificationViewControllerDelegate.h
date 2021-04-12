/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol NCNotificationViewControllerDelegate <NSObject>
@optional
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg1;
-(long long)notificationViewControllerDateFormatStyle:(id)arg1;
-(BOOL)notificationViewControllerShouldPan:(id)arg1;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
-(BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowDragInteraction:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg1;
-(CGRect*)notificationViewController:(id)arg1 initialFrameForPresentingLongLookFromView:(id)arg2;
-(CGRect*)notificationViewController:(id)arg1 finalFrameForDismissingLongLookFromView:(id)arg2;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(BOOL)notificationViewController:(id)arg1 suggestsDismissingShortLookWithSourceGestureRecognizer:(id)arg2 animated:(BOOL)arg3;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
-(void)notificationViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2;
-(BOOL)notificationViewControllerIsCoalescedBundle:(id)arg1;
-(BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)arg1;

@required
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;

@end

