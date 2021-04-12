/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@class NSMutableDictionary;

@interface NCNotificationSection : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,retain) NSMutableDictionary * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationRequestsCount; 
-(id)init;
-(NSMutableDictionary *)requests;
-(void)setRequests:(NSMutableDictionary *)arg1 ;
-(BOOL)addNotificationRequest:(id)arg1 ;
-(BOOL)removeNotificationRequest:(id)arg1 ;
-(BOOL)replaceNotificationRequest:(id)arg1 ;
-(unsigned long long)notificationRequestsCount;
-(id)notificationRequestMatchingNotificationIdentifier:(id)arg1 ;
@end

