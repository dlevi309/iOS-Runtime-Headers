/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate {

	BOOL _shouldRepost;
	UNSNotificationRecord* _replacedNotificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * replacedNotificationRecord;              //@synthesize replacedNotificationRecord=_replacedNotificationRecord - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepost;                                               //@synthesize shouldRepost=_shouldRepost - In the implementation block
+(id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UNSNotificationRecord *)replacedNotificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)shouldRepost;
@end

