/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol OS_dispatch_queue, CALNNotificationSource, CALNNotificationManager;
@class NSObject, NSArray, CALNInboxNotificationMonitor;

@interface CALNNotificationSourceRefresher : NSObject {

	BOOL _needsRefreshOnNotificationsLoaded;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	NSArray*<CALNNotificationSource> _sources;
	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	id<CALNNotificationManager> _notificationManager;

}

@property (nonatomic,copy,readonly) NSArray*<CALNNotificationSource> sources;                        //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;              //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;                      //@synthesize notificationManager=_notificationManager - In the implementation block
-(void)handleNotificationsLoadedNotification;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(void)handleNotificationsChangedNotification:(id)arg1 ;
-(id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3 ;
-(NSArray*<CALNNotificationSource>)sources;
-(id<CALNNotificationManager>)notificationManager;
-(void)refreshNotifications;
-(void)_withdrawExpiredNotificationsForSource:(id)arg1 ;
-(void)_refreshNotifications:(id)arg1 ;
@end

