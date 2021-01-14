/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSCKNotification : NSObject {

	long long _notificationType;
	NSString* _subscriptionID;

}

@property (nonatomic,readonly) long long notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
+(Class)__class;
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
-(NSString *)subscriptionID;
-(long long)notificationType;
@end

