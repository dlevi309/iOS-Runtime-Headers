/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRAVRoutingClientController, _MRNowPlayingPlayerPathProtobuf, NSMutableSet, MRNotificationServiceClient, MRBlockGuard, MRMediaRemoteService, MRNotificationClient, NSArray;

@interface MRMediaRemoteServiceClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _registeredOrigins;
	MRAVRoutingClientController* _routingClientController;
	_MRNowPlayingPlayerPathProtobuf* _activePlayerPath;
	int _notifyRestoreClientStateForLaunch;
	NSMutableSet* _playerPathInvalidationHandlers;
	MRNotificationServiceClient* _notificationService;
	BOOL _xpcConnectionIsActive;
	MRBlockGuard* _xpcConnectionIgnoreNextInvalidationTimer;
	MRMediaRemoteService* _service;
	MRNotificationClient* _notificationClient;
	NSObject*<OS_dispatch_queue> _playbackQueueDispatchQueue;

}

@property (nonatomic,readonly) MRMediaRemoteService * service;                                     //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) MRNotificationClient * notificationClient;                          //@synthesize notificationClient=_notificationClient - In the implementation block
@property (nonatomic,readonly) NSArray * registeredOrigins; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workerQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> playbackQueueDispatchQueue;              //@synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue - In the implementation block
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * activePlayerPath; 
+(id)sharedServiceClient;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(MRMediaRemoteService *)service;
-(void)_initializeConnection;
-(_MRNowPlayingPlayerPathProtobuf *)activePlayerPath;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(MRNotificationClient *)notificationClient;
-(void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1 ;
-(void)_registerCallbacks;
-(void)setPlaybackQueueDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidateConnectionWithTimer:(BOOL)arg1 ;
-(void)_resumeConnection;
-(void)processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(void)_onQueue_setActivePlayerPath:(id)arg1 ;
-(void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(void)_callInvalidationHandler:(id)arg1 ;
-(NSArray *)registeredOrigins;
-(void)setActivePlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterOrigin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unregisterAllOriginsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isOriginRegistered:(id)arg1 ;
-(void)fetchPickableRoutesWithCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)addPlayerPathInvalidationHandler:(id)arg1 ;
-(void)removeInvalidationHandler:(id)arg1 ;
-(void)_processPlayerPathInvalidationHandlersWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)playbackQueueDispatchQueue;
@end

