/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject {

	UNSNotificationRecord* _notificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * notificationRecord;              //@synthesize notificationRecord=_notificationRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UNSNotificationRecord *)notificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 ;
@end

