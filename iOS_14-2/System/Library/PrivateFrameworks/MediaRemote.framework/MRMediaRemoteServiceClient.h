/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRAVRoutingClientController, MRPlayerPath, NSMutableSet, MRNotificationServiceClient, MRMediaRemoteService, MRNotificationClient, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	MRPlayerPath* _activePlayerPath;
	NSMutableSet* _playerPathInvalidationHandlers;
	MRNotificationServiceClient* _notificationService;
	MRMediaRemoteService* _service;
	MRNotificationClient* _notificationClient;
	NSObject*<OS_dispatch_queue> _playbackQueueDispatchQueue;

}

@property (nonatomic,readonly) MRMediaRemoteService * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) MRNotificationClient * notificationClient;                          //@synthesize notificationClient=_notificationClient - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workerQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playbackQueueDispatchQueue;              //@synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue - In the implementation block
@property (nonatomic,retain) MRPlayerPath * activePlayerPath; 
+(id)sharedServiceClient;
-(MRPlayerPath *)activePlayerPath;
-(NSArray *)registeredOrigins;
-(id)init;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1 ;
-(id)debugDescription;
-(id)addPlayerPathInvalidationHandler:(id)arg1 ;
-(void)processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isOriginRegistered:(id)arg1 ;
-(void)setActivePlayerPath:(MRPlayerPath *)arg1 ;
-(void)unregisterAllOriginsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(void)removeInvalidationHandler:(id)arg1 ;
-(void)setPlaybackQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)playbackQueueDispatchQueue;
-(void)unregisterOrigin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(MRMediaRemoteService *)service;
-(void)dealloc;
-(MRNotificationClient *)notificationClient;
@end

