/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASServerInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class ASActivitySharingManager, HDXPCClient, NSObject, NSString;

@interface ASServer : NSObject <ASServerInterface, _HKXPCExportable> {

	ASActivitySharingManager* _activitySharingManager;
	HDXPCClient* _client;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverWithClient:(id)arg1 activitySharingManager:(id)arg2 error:(id*)arg3 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
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
-(id)initWithClient:(id)arg1 activitySharingManager:(id)arg2 ;
@end

