/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDActiveXPCClientConnectionsPeriodicTimerDelegate.h>
#import <libobjc.A.dylib/HMDPersonDataReceiver.h>

@protocol OS_dispatch_queue, HMDPersonDataSource;
@class NSObject, NSUUID, HMFMessageDispatcher, HMDActiveXPCClientConnectionsPeriodicTimer, NSString, HMIHomePersonManager, HMIExternalPersonManager;

@interface HMDHomeKitPersonDataReceiver : HMFObject <HMFLogging, HMFMessageReceiver, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDPersonDataReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _UUID;
	HMFMessageDispatcher* _messageDispatcher;
	HMDActiveXPCClientConnectionsPeriodicTimer* _clientConnectionsTimer;
	id<HMDPersonDataSource> _dataSource;
	/*^block*/id _fetchServerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                               //@synthesize UUID=_UUID - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                         //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer * clientConnectionsTimer;              //@synthesize clientConnectionsTimer=_clientConnectionsTimer - In the implementation block
@property (__weak) id<HMDPersonDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) id fetchServerFactory;                                                                //@synthesize fetchServerFactory=_fetchServerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) HMIHomePersonManager * homePersonManager; 
@property (readonly) HMIExternalPersonManager * photosPersonManager; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id<HMDPersonDataSource>)dataSource;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setDataSource:(id<HMDPersonDataSource>)arg1 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 ;
-(void)configureWithDataSource:(id)arg1 home:(id)arg2 ;
-(void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleFetchSettingsMessage:(id)arg1 ;
-(void)clientConnectionsTimerDidFire:(id)arg1 ;
-(void)handleSubscribeMessage:(id)arg1 ;
-(void)handleUnsubscribeMessage:(id)arg1 ;
-(void)handlePerformCloudPullMessage:(id)arg1 ;
-(void)handleUpdateSettingsMessage:(id)arg1 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 clientConnectionsTimer:(id)arg4 ;
-(HMDActiveXPCClientConnectionsPeriodicTimer *)clientConnectionsTimer;
-(id)fetchServerFactory;
-(void)handleFetchPersonsMessage:(id)arg1 ;
-(void)handleFetchFaceCropsMessage:(id)arg1 ;
-(void)handleFetchPersonFaceCropsMessage:(id)arg1 ;
-(void)handleFetchUnassociatedFaceCropsMessage:(id)arg1 ;
-(void)handleFetchFaceprintsMessage:(id)arg1 ;
-(void)handleAddOrUpdatePersonsMessage:(id)arg1 ;
-(void)handleAddOrUpdateFaceCropsMessage:(id)arg1 ;
-(void)handleAddOrUpdateFaceprintsMessage:(id)arg1 ;
-(void)handleAssociateFaceCropsMessage:(id)arg1 ;
-(void)handleDisassociateFaceCropsMessage:(id)arg1 ;
-(void)handleRemovePersonsMessage:(id)arg1 ;
-(void)handleRemoveFaceCropsMessage:(id)arg1 ;
-(void)handleRemoveFaceprintsMessage:(id)arg1 ;
-(void)_notifySubscribersOfMessageWithName:(id)arg1 payload:(id)arg2 ;
-(void)_performCloudPull;
-(void)setFetchServerFactory:(id)arg1 ;
@end

