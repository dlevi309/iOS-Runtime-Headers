/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UNUserNotificationCenter, NSString;

@interface SBExampleUserNotificationCenter : NSObject {

	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,readonly) NSString * latestNotificationRequestIdentifier; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)sharedInstance;
-(NSString *)sectionIdentifier;
-(void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1 ;
-(NSString *)latestNotificationRequestIdentifier;
-(void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)update;
-(void)publish;
-(id)_existingNotificationRequestForIdentifier:(id)arg1 ;
-(id)_userNotificationCenter;
-(id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)publish:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllNotifications;
@end

