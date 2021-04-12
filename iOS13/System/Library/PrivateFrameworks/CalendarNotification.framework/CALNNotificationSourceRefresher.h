/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNNotificationSource, CALNNotificationManager;
@class NSArray, CALNInboxNotificationMonitor;

@interface CALNNotificationSourceRefresher : NSObject {

	NSArray*<CALNNotificationSource> _sources;
	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	id<CALNNotificationManager> _notificationManager;

}

@property (nonatomic,copy,readonly) NSArray*<CALNNotificationSource> sources;                        //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;              //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;                      //@synthesize notificationManager=_notificationManager - In the implementation block
-(NSArray*<CALNNotificationSource>)sources;
-(id<CALNNotificationManager>)notificationManager;
-(void)refreshNotifications:(id)arg1 ;
-(void)handleNotificationsChangedNotification:(id)arg1 ;
-(void)_withdrawExpiredNotificationsForSource:(id)arg1 ;
-(id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3 ;
-(void)refreshNotifications;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
@end

