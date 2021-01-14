/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(UNSNotificationRecord *)replacedNotificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)shouldRepost;
@end

