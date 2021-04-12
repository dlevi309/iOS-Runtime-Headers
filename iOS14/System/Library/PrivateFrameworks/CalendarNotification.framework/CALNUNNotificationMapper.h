/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject {

	CALNUNNotificationRequestMapper* _notificationRequestMapper;

}

@property (nonatomic,readonly) CALNUNNotificationRequestMapper * notificationRequestMapper;              //@synthesize notificationRequestMapper=_notificationRequestMapper - In the implementation block
-(id)calnNotificationsFromUNNotifications:(id)arg1 ;
-(CALNUNNotificationRequestMapper *)notificationRequestMapper;
-(id)initWithNotificationRequestMapper:(id)arg1 ;
-(id)_calnNotificationFromUNNotification:(id)arg1 ;
-(id)calnNotificationFromUNNotification:(id)arg1 ;
@end

