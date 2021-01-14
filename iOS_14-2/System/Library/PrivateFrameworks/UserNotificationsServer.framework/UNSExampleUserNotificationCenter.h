/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;
	PTTestRecipe* _basicTestRecipe;

}
-(id)sectionIdentifier;
-(void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2 ;
-(id)init;
-(void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1 ;
-(id)latestNotificationRequestIdentifier;
-(void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)update;
-(void)publish;
-(id)_basicPostUpdateRecipe;
-(id)_existingNotificationRequestForIdentifier:(id)arg1 ;
-(id)_userNotificationCenter;
-(id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)publish:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllNotifications;
@end

