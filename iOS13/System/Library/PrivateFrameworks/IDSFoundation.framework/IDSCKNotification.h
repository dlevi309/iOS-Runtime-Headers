/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSCKNotification : NSObject {

	long long _notificationType;
	NSString* _subscriptionID;

}

@property (nonatomic,readonly) long long notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
+(Class)__class;
-(NSString *)subscriptionID;
-(long long)notificationType;
@end

