/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue, ASServerInterface;
@class NSObject, HKProxyProvider, NSString;

@interface ASClient : NSObject <_HKXPCExportable> {

	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<ASServerInterface> _serverProxy;
	HKProxyProvider* _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionInvalidated;
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(id)exportedInterface;
-(void)queryAppBadgeCountWithCompletion:(/*^block*/id)arg1 ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(void)fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)expireChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_remoteProxy:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_clientQueueSuccessCompletion:(/*^block*/id)arg1 ;
-(void)friendWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

