/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannelIDs;

}

@property (nonatomic,copy,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recommendedNotificationChannelIDs;                 //@synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs - In the implementation block
-(id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2 ;
-(unsigned long long)hash;
-(NSArray *)recommendedNotificationChannelIDs;
-(NSArray *)preSubscribedNotificationsChannelIDs;
-(BOOL)isEqual:(id)arg1 ;
@end

