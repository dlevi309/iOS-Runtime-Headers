/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)queueNonPersistentCredentialRemoval:(id)arg1 ;
-(void)checkInIfNecessary;
-(void)_activityQueue_checkIn;
-(void)_activityQueue_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)_activityQueue_configureXPCActivityWithCriteria:(id)arg1 ;
-(void)_activityQueue_registerXPCActivityWithCriteria:(id)arg1 ;
-(void)_activityQueue_removeExpiredCredentials;
-(BOOL)_removeExpiredCredentials;
-(void)_activityQueue_unregisterActivity;
-(void)_activityQueue_removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

