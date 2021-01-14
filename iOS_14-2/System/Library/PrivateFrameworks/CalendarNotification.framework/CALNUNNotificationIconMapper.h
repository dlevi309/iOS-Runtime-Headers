/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject {

	CALNNotificationIconCache* _notificationIconCache;

}

@property (nonatomic,readonly) CALNNotificationIconCache * notificationIconCache;              //@synthesize notificationIconCache=_notificationIconCache - In the implementation block
-(id)initWithNotificationIconCache:(id)arg1 ;
-(id)iconIdentifierFromUNNotificationIcon:(id)arg1 ;
-(id)unNotificationIconFromIconIdentifier:(id)arg1 ;
-(CALNNotificationIconCache *)notificationIconCache;
@end

