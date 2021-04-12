/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannelIDs;

}

@property (nonatomic,copy,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recommendedNotificationChannelIDs;                 //@synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2 ;
-(NSArray *)preSubscribedNotificationsChannelIDs;
-(NSArray *)recommendedNotificationChannelIDs;
@end

