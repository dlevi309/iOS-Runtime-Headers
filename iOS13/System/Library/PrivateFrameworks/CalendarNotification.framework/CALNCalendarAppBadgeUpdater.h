/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNInboxNotificationMonitor, UISApplicationState;

@interface CALNCalendarAppBadgeUpdater : NSObject {

	CALNInboxNotificationMonitor* _inboxNotificationMonitor;
	UISApplicationState* _applicationState;

}

@property (nonatomic,readonly) CALNInboxNotificationMonitor * inboxNotificationMonitor;              //@synthesize inboxNotificationMonitor=_inboxNotificationMonitor - In the implementation block
@property (nonatomic,readonly) UISApplicationState * applicationState;                               //@synthesize applicationState=_applicationState - In the implementation block
-(UISApplicationState *)applicationState;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(void)handleNotificationCountChangedNotification:(id)arg1 ;
-(id)initWithInboxNotificationMonitor:(id)arg1 ;
@end

