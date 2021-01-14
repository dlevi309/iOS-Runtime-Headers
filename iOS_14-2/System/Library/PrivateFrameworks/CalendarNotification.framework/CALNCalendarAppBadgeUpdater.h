/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInboxNotificationMonitor:(id)arg1 ;
-(CALNInboxNotificationMonitor *)inboxNotificationMonitor;
-(void)handleNotificationCountChangedNotification:(id)arg1 ;
@end

