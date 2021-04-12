/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRNowPlayingControllerDelegate, OS_dispatch_queue;
@class NSString, MRClient, MRPlayer, MRNowPlayingPlayerResponse, MRAVEndpointObserver, NSMutableArray, NSObject, MRPlayerPath, MRAVEndpoint;

@interface MRNowPlayingController : NSObject {

	BOOL _registeredForNotifications;
	BOOL _registeredForEndpointChanges;
	BOOL _registeredForPlayerPathInvalidations;
	BOOL _updateLoadingEnabled;
	BOOL _requestingQueue;
	NSString* _uid;
	MRClient* _client;
	MRPlayer* _player;
	id<MRNowPlayingControllerDelegate> _delegate;
	MRNowPlayingPlayerResponse* _response;
	id _playerPathInvalidationObserver;
	MRAVEndpointObserver* _endpointObserver;
	NSString* _endpointObserverGroupUID;
	NSMutableArray* _deferredContentItemsToMerge;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	MRPlayerPath* _unresolvedPlayerPath;
	MRPlayerPath* _resolvedPlayerPath;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,copy) MRNowPlayingPlayerResponse * response;                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id playerPathInvalidationObserver;                               //@synthesize playerPathInvalidationObserver=_playerPathInvalidationObserver - In the implementation block
@property (nonatomic,retain) MRAVEndpointObserver * endpointObserver;                         //@synthesize endpointObserver=_endpointObserver - In the implementation block
@property (nonatomic,retain) NSString * endpointObserverGroupUID;                             //@synthesize endpointObserverGroupUID=_endpointObserverGroupUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferredContentItemsToMerge;                    //@synthesize deferredContentItemsToMerge=_deferredContentItemsToMerge - In the implementation block
@property (assign,nonatomic) BOOL registeredForNotifications;                                 //@synthesize registeredForNotifications=_registeredForNotifications - In the implementation block
@property (assign,nonatomic) BOOL registeredForEndpointChanges;                               //@synthesize registeredForEndpointChanges=_registeredForEndpointChanges - In the implementation block
@property (assign,nonatomic) BOOL registeredForPlayerPathInvalidations;                       //@synthesize registeredForPlayerPathInvalidations=_registeredForPlayerPathInvalidations - In the implementation block
@property (assign,nonatomic) BOOL updateLoadingEnabled;                                       //@synthesize updateLoadingEnabled=_updateLoadingEnabled - In the implementation block
@property (assign,nonatomic) BOOL requestingQueue;                                            //@synthesize requestingQueue=_requestingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) MRPlayerPath * unresolvedPlayerPath;                             //@synthesize unresolvedPlayerPath=_unresolvedPlayerPath - In the implementation block
@property (nonatomic,retain) MRPlayerPath * resolvedPlayerPath;                               //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (nonatomic,retain) MRAVEndpoint * endpoint;                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) MRClient * client;                                             //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) MRPlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MRNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)localRouteController;
+(id)proactiveEndpointController;
-(MRPlayer *)player;
-(MRPlayerPath *)resolvedPlayerPath;
-(NSString *)uid;
-(MRClient *)client;
-(BOOL)registeredForNotifications;
-(id<MRNowPlayingControllerDelegate>)delegate;
-(void)setEndpointObserver:(MRAVEndpointObserver *)arg1 ;
-(void)setEndpoint:(MRAVEndpoint *)arg1 ;
-(MRAVEndpoint *)endpoint;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithUID:(id)arg1 ;
-(void)setDelegate:(id<MRNowPlayingControllerDelegate>)arg1 ;
-(void)beginLoadingUpdates;
-(MRNowPlayingPlayerResponse *)response;
-(void)setResponse:(MRNowPlayingPlayerResponse *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithUID:(id)arg1 client:(id)arg2 player:(id)arg3 ;
-(void)_unregisterForPlayerPathInvalidations;
-(BOOL)updateLoadingEnabled;
-(void)setUpdateLoadingEnabled:(BOOL)arg1 ;
-(void)_onQueue_updateByReplacingWithNewResponse:(id)arg1 ;
-(void)_notifyDelegateOfError:(id)arg1 ;
-(void)_notifyDelegateOfNewResponse:(id)arg1 ;
-(void)_unregisterForEndpointChanges;
-(void)_loadNowPlayingStateForUID:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_unregisterNotificationHandlers;
-(void)_onQueue_clearState;
-(void)setUnresolvedPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setEndpointObserverGroupUID:(NSString *)arg1 ;
-(void)_loadNowPlayingStateForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_registerForEndpointChangesIfNeeded;
-(void)_onQueue_retrieveEndpointForUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPlayerPathInvalidationsIfNeeded;
-(void)_registerNotificationHandlersIfNeeded;
-(id)_loadNowPlayingStateForPlayerPath:(id)arg1 error:(id*)arg2 ;
-(void)_resolvePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createPlayerPathForEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestPlaybackQueueForPlayerPath:(id)arg1 includeArtwork:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setRequestingQueue:(BOOL)arg1 ;
-(NSMutableArray *)deferredContentItemsToMerge;
-(NSString *)endpointObserverGroupUID;
-(void)_handlePlaybackQueueChangedNotification:(id)arg1 ;
-(BOOL)requestingQueue;
-(MRAVEndpointObserver *)endpointObserver;
-(void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg1 ;
-(void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg1 ;
-(void)endLoadingUpdates;
-(void)_handlePlaybackStateChangedNotification:(id)arg1 ;
-(void)_handleSupportedCommandsChangedNotification:(id)arg1 ;
-(void)_onQueue_updateWithNewPlaybackQueue:(id)arg1 ;
-(void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg1 toNewQueue:(id)arg2 ;
-(id)_onQueue_updateByMergingContentItemChanges:(id)arg1 ;
-(MRPlayerPath *)unresolvedPlayerPath;
-(void)_notifyDelegateOfUpdatedContentItems:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg1 ;
-(void)_requestContentItemArtwork:(id)arg1 forPlayerPath:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_onQueue_updateWithNewPlaybackState:(unsigned)arg1 ;
-(void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned)arg1 toNewState:(unsigned)arg2 ;
-(void)_notifyDelegateOfInvalidation;
-(void)_onQueue_updateWithNewSupportedCommands:(id)arg1 ;
-(void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg1 toNewCommands:(id)arg2 ;
-(void)_reloadForCompleteInvalidation;
-(BOOL)registeredForPlayerPathInvalidations;
-(void)_reloadForPlayerPathInvalidation;
-(id)playerPathInvalidationObserver;
-(void)setPlayerPathInvalidationObserver:(id)arg1 ;
-(void)setRegisteredForPlayerPathInvalidations:(BOOL)arg1 ;
-(BOOL)registeredForEndpointChanges;
-(void)_handleActiveSystemEndpointChangedNotification:(id)arg1 ;
-(void)setRegisteredForEndpointChanges:(BOOL)arg1 ;
-(void)setDeferredContentItemsToMerge:(NSMutableArray *)arg1 ;
-(void)setResolvedPlayerPath:(MRPlayerPath *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

