/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTNotificationCenter <NSObject>
@optional
-(void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2;
-(void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
-(void)removeAllDeliveredNotifications;
-(void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
-(void)dismissNotificationsWithIdentifiers:(id)arg1;

@required
-(void)dismissNotificationsForTimer:(id)arg1;
-(void)dismissNotificationsForAlarm:(id)arg1;
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2;

@end

