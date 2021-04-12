/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject {

	CALNNotificationIconCache* _notificationIconCache;

}

@property (nonatomic,readonly) CALNNotificationIconCache * notificationIconCache;              //@synthesize notificationIconCache=_notificationIconCache - In the implementation block
-(id)initWithNotificationIconCache:(id)arg1 ;
-(id)unNotificationIconFromIconIdentifier:(id)arg1 ;
-(id)iconIdentifierFromUNNotificationIcon:(id)arg1 ;
-(CALNNotificationIconCache *)notificationIconCache;
@end

