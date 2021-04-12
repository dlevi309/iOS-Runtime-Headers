/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class PETScalarEventTracker, ATXNotificationsLoggingClient;

@interface NCNotificationEventTracker : NSObject {

	PETScalarEventTracker* _shortLookDefaultActionTracker;
	PETScalarEventTracker* _shortLookDismissTracker;
	PETScalarEventTracker* _shortLookClearTracker;
	PETScalarEventTracker* _notificationCenterClearDayTracker;
	PETScalarEventTracker* _notificationCenterClearAllTracker;
	PETScalarEventTracker* _longLookPresentationTracker;
	PETScalarEventTracker* _longLookDefaultActionTracker;
	PETScalarEventTracker* _longLookCustomActionTracker;
	PETScalarEventTracker* _longLookDismissTracker;
	PETScalarEventTracker* _longLookReparkTracker;
	ATXNotificationsLoggingClient* _logger;

}
+(id)sharedInstance;
+(id)createATXNotificationInterfaceFromRequest:(id)arg1 ;
+(unsigned long long)convertBBObserverFeedToATXNotificationsFeed:(unsigned long long)arg1 ;
-(id)init;
-(id)_destinationProperty;
-(void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)defaultActionForNotification:(id)arg1 ;
-(void)dismissActionForNotification:(id)arg1 ;
-(void)silenceActionForNotification:(id)arg1 ;
-(id)_triggerPropertyForEvent:(id)arg1 ;
-(id)_firstPartyAppProperty;
-(id)_attachmentCountProperty;
-(id)_primaryAttachmentTypeProperty;
-(id)_customExtensionProperty;
-(id)_customActionsCountProperty;
-(id)_textInputProperty;
-(id)_shortLookDefaultActionTracker;
-(id)notificationDestinationForState:(id)arg1 ;
-(id)_shortLookDismissTracker;
-(id)_shortLookClearTracker;
-(id)_notificationCenterClearDayTracker;
-(id)_notificationCenterClearAllTracker;
-(id)_longLookDefaultActionTracker;
-(id)_longLookCustomActionTracker;
-(id)_longLookDismissTracker;
-(id)_longLookReparkTracker;
-(unsigned long long)primaryAttachmentTypeForRequest:(id)arg1 ;
-(id)_longLookPresentationTracker;
-(void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)notificationCenterDayCleared;
-(void)notificationCenterClearAll;
-(void)longLookDidPresentForNotificationRequest:(id)arg1 ;
-(void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)pulldownActionForNotification:(id)arg1 ;
-(void)receivedNotification:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(void)removedNotificationFromLockScreen:(id)arg1 ;
-(void)removedNotificationFromAllFeeds:(id)arg1 ;
-(void)tappedCoalescedNotification:(id)arg1 inBundle:(id)arg2 ;
-(void)realTimeTuningOutcome:(long long)arg1 withBundleId:(id)arg2 ;
-(void)realTimeTuningTrigger:(long long)arg1 ;
@end

