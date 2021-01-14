/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDTaskServer.h>
#import <libobjc.A.dylib/ASServerInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class ASActivitySharingManager, HDHealthStoreClient, NSUUID, NSObject, NSString;

@interface ASServer : NSObject <HDTaskServer, ASServerInterface, _HKXPCExportable> {

	ASActivitySharingManager* _activitySharingManager;
	HDHealthStoreClient* _client;
	NSUUID* _taskUUID;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(id)taskUUID;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_pushActivityDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_pushFakeActivityDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_expireChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_friendWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_queryAppBadgeCountWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 client:(id)arg2 activitySharingManager:(id)arg3 ;
@end

