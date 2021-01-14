/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject {

	CALNUNNotificationContentMapper* _notificationContentMapper;
	CALNUNNotificationIconMapper* _notificationIconMapper;

}

@property (nonatomic,readonly) CALNUNNotificationContentMapper * notificationContentMapper;              //@synthesize notificationContentMapper=_notificationContentMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationIconMapper * notificationIconMapper;                    //@synthesize notificationIconMapper=_notificationIconMapper - In the implementation block
-(CALNUNNotificationContentMapper *)notificationContentMapper;
-(id)calnNotificationRequestFromUNNotificationRequest:(id)arg1 ;
-(id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2 ;
-(id)unNotificationRequestFromCALNNotificationRequest:(id)arg1 ;
-(CALNUNNotificationIconMapper *)notificationIconMapper;
@end

