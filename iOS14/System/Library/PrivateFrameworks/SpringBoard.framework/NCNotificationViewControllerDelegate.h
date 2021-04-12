/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol NCNotificationViewControllerDelegate <NSObject>
@optional
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 willEndWithOperation:(unsigned long long)arg4;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
-(BOOL)notificationViewControllerShouldPan:(id)arg1;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg1;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
-(BOOL)notificationViewControllerShouldAllowDragInteraction:(id)arg1;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
-(BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(id)arg1;
-(void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 sessionWillBegin:(id)arg3;
-(long long)notificationViewControllerDateFormatStyle:(id)arg1;
-(BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg1;
-(CGRect*)notificationViewController:(id)arg1 initialFrameForPresentingLongLookFromView:(id)arg2;
-(CGRect*)notificationViewController:(id)arg1 finalFrameForDismissingLongLookFromView:(id)arg2;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
-(void)notificationViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2;
-(BOOL)notificationViewControllerIsCoalescedBundle:(id)arg1;
-(BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)arg1;
-(void)notificationViewController:(id)arg1 isPerformingHoverHighlighting:(BOOL)arg2;

@required
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4;

@end

