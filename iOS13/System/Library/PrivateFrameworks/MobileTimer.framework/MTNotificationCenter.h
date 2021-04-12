/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTNotificationCenter <NSObject>
@optional
-(void)removeAllDeliveredNotifications;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
-(void)dismissNotificationsWithIdentifiers:(id)arg1;
-(void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2;
-(void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;

@required
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)dismissNotificationsForAlarm:(id)arg1;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)dismissNotificationsForTimer:(id)arg1;

@end

