/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

