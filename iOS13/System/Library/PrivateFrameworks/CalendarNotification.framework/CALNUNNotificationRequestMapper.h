/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject {

	CALNUNNotificationContentMapper* _notificationContentMapper;
	CALNUNNotificationIconMapper* _notificationIconMapper;

}

@property (nonatomic,readonly) CALNUNNotificationContentMapper * notificationContentMapper;              //@synthesize notificationContentMapper=_notificationContentMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationIconMapper * notificationIconMapper;                    //@synthesize notificationIconMapper=_notificationIconMapper - In the implementation block
-(id)calnNotificationRequestFromUNNotificationRequest:(id)arg1 ;
-(id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2 ;
-(id)unNotificationRequestFromCALNNotificationRequest:(id)arg1 ;
-(CALNUNNotificationContentMapper *)notificationContentMapper;
-(CALNUNNotificationIconMapper *)notificationIconMapper;
@end

