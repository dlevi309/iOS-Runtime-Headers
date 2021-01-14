/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject {

	CALNUNNotificationMapper* _notificationMapper;

}

@property (nonatomic,readonly) CALNUNNotificationMapper * notificationMapper;              //@synthesize notificationMapper=_notificationMapper - In the implementation block
+(id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1 ;
-(id)initWithNotificationMapper:(id)arg1 ;
-(id)calnNotificationResponseFromUNNotificationResponse:(id)arg1 ;
-(CALNUNNotificationMapper *)notificationMapper;
@end

