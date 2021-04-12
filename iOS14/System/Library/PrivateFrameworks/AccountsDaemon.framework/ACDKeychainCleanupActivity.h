/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class ACAccountStore, NSObject;

@interface ACDKeychainCleanupActivity : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSObject*<OS_dispatch_queue> _activityQueue;

}
+(id)sharedActivity;
-(id)init;
-(void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_activityQueue_removeExpiredCredentials;
-(void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1 ;
-(void)queueNonPersistentCredentialRemoval:(id)arg1 ;
-(BOOL)_removeExpiredCredentials;
-(void)_activityQueue_checkIn;
-(void)checkInIfNecessary;
-(void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1 ;
-(void)_activityQueue_unregisterActivity;
-(void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2 ;
@end

