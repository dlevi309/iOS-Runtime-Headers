/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject {

	CALNUNNotificationMapper* _notificationMapper;

}

@property (nonatomic,readonly) CALNUNNotificationMapper * notificationMapper;              //@synthesize notificationMapper=_notificationMapper - In the implementation block
+(id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1 ;
-(CALNUNNotificationMapper *)notificationMapper;
-(id)initWithNotificationMapper:(id)arg1 ;
-(id)calnNotificationResponseFromUNNotificationResponse:(id)arg1 ;
@end

