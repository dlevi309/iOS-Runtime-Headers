/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@class UNNotificationRequest, NSString;

@interface ASFriendNotificationContainer : NSObject {

	UNNotificationRequest* _notificationRequest;
	NSString* _friendUUID;
	long long _notificationRequestType;

}

@property (nonatomic,readonly) UNNotificationRequest * notificationRequest;              //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (nonatomic,readonly) NSString * friendUUID;                                    //@synthesize friendUUID=_friendUUID - In the implementation block
@property (nonatomic,readonly) long long notificationRequestType;                        //@synthesize notificationRequestType=_notificationRequestType - In the implementation block
+(id)containerWithNotificationRequest:(id)arg1 friendUUID:(id)arg2 bulletinType:(long long)arg3 ;
-(NSString *)friendUUID;
-(UNNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 friendUUID:(id)arg2 bulletinType:(long long)arg3 ;
-(long long)notificationRequestType;
@end

