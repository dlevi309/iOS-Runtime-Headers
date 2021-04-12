/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRExternalDevice.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CURunLoopThread, NSDate, MROSTransaction, NSArray, MRExternalClientConnection, MROrigin, MRDeviceInfo, MRPlayerPath, NSDictionary, NSData, MRContentItem, MRExternalDeviceTransport, NSRunLoop, NSString;

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CURunLoopThread* _runLoopThread;
	BOOL _wantsNowPlayingNotifications;
	BOOL _wantsNowPlayingArtworkNotifications;
	BOOL _wantsVolumeNotifications;
	BOOL _wantsOutputDeviceNotifications;
	BOOL _wantsSystemEndpointNotifications;
	BOOL _wantsEndpointChangeNotifications;
	BOOL _usingSystemPairing;
	NSDate* _connectionStateTimestamp;
	unsigned _connectionState;
	unsigned _connectionOptions;
	long long _cachedServerDisconnectError;
	unsigned long long _reconnectionAttemptCount;
	BOOL _forceReconnectOnConnectionFailure;
	BOOL _disconnecting;
	BOOL _isClientSyncActive;
	MROSTransaction* _transaction;
	NSArray* _subscribedPlayerPaths;
	BOOL _isCallingClientCallback;
	MRExternalClientConnection* _clientConnection;
	MROrigin* _customOrigin;
	MRDeviceInfo* _deviceInfo;
	MRPlayerPath* _playerPath;
	NSDictionary* _nowPlayingInfo;
	NSData* _nowPlayingArtwork;
	MRContentItem* _nowPlayingItem;
	MRExternalDeviceTransport* _transport;
	long long _connectionRecoveryBehavior;
	/*^block*/id _pairingCallback;
	NSObject*<OS_dispatch_queue> _pairingCallbackQueue;
	/*^block*/id _connectionStateCallback;
	NSObject*<OS_dispatch_queue> _connectionStateCallbackQueue;
	/*^block*/id _nameCallback;
	NSObject*<OS_dispatch_queue> _nameCallbackQueue;
	/*^block*/id _pairingAllowedCallback;
	NSObject*<OS_dispatch_queue> _pairingAllowedCallbackQueue;
	/*^block*/id _customDataCallback;
	NSObject*<OS_dispatch_queue> _customDataCallbackQueue;
	/*^block*/id _outputDevicesUpdatedCallback;
	NSObject*<OS_dispatch_queue> _outputDevicesUpdatedCallbackQueue;
	/*^block*/id _outputDevicesRemovedCallback;
	NSObject*<OS_dispatch_queue> _outputDevicesRemovedCallbackQueue;
	/*^block*/id _volumeCallback;
	NSObject*<OS_dispatch_queue> _volumeCallbackQueue;
	/*^block*/id _volumeControlCapabilitiesCallback;
	NSObject*<OS_dispatch_queue> _volumeControlCapabilitiesCallbackQueue;
	NSObject*<OS_dispatch_queue> _outputContextCallbackQueue;
	NSRunLoop* _runLoop;
	NSObject*<OS_dispatch_queue> _workerQueue;

}

@property (nonatomic,retain) MRExternalClientConnection * clientConnection;                                    //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) MROrigin * customOrigin;                                                          //@synthesize customOrigin=_customOrigin - In the implementation block
@property (nonatomic,retain) MRDeviceInfo * deviceInfo;                                                        //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSData * nowPlayingArtwork;                                                       //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                                                    //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRContentItem * nowPlayingItem;                                                   //@synthesize nowPlayingItem=_nowPlayingItem - In the implementation block
@property (nonatomic,retain) MRPlayerPath * playerPath;                                                        //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) id pairingCallback;                                                                 //@synthesize pairingCallback=_pairingCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingCallbackQueue;                                //@synthesize pairingCallbackQueue=_pairingCallbackQueue - In the implementation block
@property (nonatomic,copy) id connectionStateCallback;                                                         //@synthesize connectionStateCallback=_connectionStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionStateCallbackQueue;                        //@synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id nameCallback;                                                                    //@synthesize nameCallback=_nameCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nameCallbackQueue;                                   //@synthesize nameCallbackQueue=_nameCallbackQueue - In the implementation block
@property (nonatomic,copy) id pairingAllowedCallback;                                                          //@synthesize pairingAllowedCallback=_pairingAllowedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingAllowedCallbackQueue;                         //@synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue - In the implementation block
@property (nonatomic,copy) id customDataCallback;                                                              //@synthesize customDataCallback=_customDataCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> customDataCallbackQueue;                             //@synthesize customDataCallbackQueue=_customDataCallbackQueue - In the implementation block
@property (nonatomic,copy) id outputDevicesUpdatedCallback;                                                    //@synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputDevicesUpdatedCallbackQueue;                   //@synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue - In the implementation block
@property (nonatomic,copy) id outputDevicesRemovedCallback;                                                    //@synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputDevicesRemovedCallbackQueue;                   //@synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeCallback;                                                                  //@synthesize volumeCallback=_volumeCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeCallbackQueue;                                 //@synthesize volumeCallbackQueue=_volumeCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeControlCapabilitiesCallback;                                               //@synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeControlCapabilitiesCallbackQueue;              //@synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputContextCallbackQueue;                          //@synthesize outputContextCallbackQueue=_outputContextCallbackQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                                              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workerQueue;                                         //@synthesize workerQueue=_workerQueue - In the implementation block
@property (nonatomic,readonly) MRExternalDeviceTransport * transport;                                          //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) long long connectionRecoveryBehavior;                                             //@synthesize connectionRecoveryBehavior=_connectionRecoveryBehavior - In the implementation block
@property (assign,nonatomic) BOOL isCallingClientCallback;                                                     //@synthesize isCallingClientCallback=_isCallingClientCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(MRExternalClientConnection *)clientConnection;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(void)setClientConnection:(MRExternalClientConnection *)arg1 ;
-(long long)port;
-(void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(MRDeviceInfo *)deviceInfo;
-(unsigned)connectionState;
-(void)_handleUpdateClientMessage:(id)arg1 ;
-(void)_handleUpdateContentItemsMessage:(id)arg1 ;
-(void)_handleUpdateContentItemArtworkMessage:(id)arg1 ;
-(void)_handleUpdatePlayerMessage:(id)arg1 ;
-(void)setDeviceInfo:(MRDeviceInfo *)arg1 ;
-(MRExternalDeviceTransport *)transport;
-(void)_handlePromptForRouteAuthorizationMessage:(id)arg1 ;
-(void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 ;
-(void)_handleVolumeDidChangeMessage:(id)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1 ;
-(void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1 ;
-(void)_handleOutputDevicesUpdatedMessage:(id)arg1 ;
-(void)_handleOutputDevicesRemovedMessage:(id)arg1 ;
-(void)_handleSetDefaultSupportedCommandsMessage:(id)arg1 ;
-(id)pairingCallback;
-(void)_handleUpdateActiveSystemEndpoint:(id)arg1 ;
-(void)_handleSetPlayerClientPropertiesMessage:(id)arg1 ;
-(void)_handleSetOriginClientPropertiesMessage:(id)arg1 ;
-(id)_onWorkerQueue_createClientConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)_callClientPairingCallback:(/*^block*/id)arg1 ;
-(void)_handleRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 playerPath:(void*)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleLegacyPlaybackQueueRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_handlePlaybackQueueRequest:(void*)arg1 forPlayer:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handlePlaybackSessionRequest:(void*)arg1 forPlayerPath:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createPlaybackQueue:(BOOL)arg1 ;
-(void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlePlaybackQueueResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)veirfyConnectionStatusAndMaybeDisconnect:(id)arg1 ;
-(void)unpair;
-(void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_callClientNameCallback;
-(void)_handleSetStateMessageModern:(id)arg1 ;
-(long long)connectionRecoveryBehavior;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleNotificationMessageModern:(id)arg1 ;
-(void)_handleNotificationMessageLegacy:(id)arg1 ;
-(void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1 ;
-(void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1 ;
-(void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)_callClientAllowsPairingCallback;
-(void)_callVolumeControlCapabilitiesCallback:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
-(void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2 ;
-(void)setConnectionRecoveryBehavior:(long long)arg1 ;
-(void)setOutputDevicesUpdatedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setOutputDevicesRemovedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(MRContentItem *)nowPlayingItem;
-(void)setNowPlayingItem:(MRContentItem *)arg1 ;
-(void)setVolumeControlCapabilitiesCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(BOOL)isCallingClientCallback;
-(NSObject*<OS_dispatch_queue>)pairingCallbackQueue;
-(id)pairingAllowedCallback;
-(NSObject*<OS_dispatch_queue>)pairingAllowedCallbackQueue;
-(id)outputDevicesUpdatedCallback;
-(NSObject*<OS_dispatch_queue>)outputDevicesUpdatedCallbackQueue;
-(id)outputDevicesRemovedCallback;
-(NSObject*<OS_dispatch_queue>)outputDevicesRemovedCallbackQueue;
-(id)volumeControlCapabilitiesCallback;
-(NSObject*<OS_dispatch_queue>)volumeControlCapabilitiesCallbackQueue;
-(void)setWorkerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)outputContextCallbackQueue;
-(void)setOutputContextCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(id)name;
-(id)hostName;
-(NSString *)description;
-(void)setNowPlayingArtwork:(NSData *)arg1 ;
-(BOOL)isValid;
-(void)sendClientUpdatesConfigMessage;
-(id)errorForCurrentState;
-(void)setIsCallingClientCallback:(BOOL)arg1 ;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(id)currentClientUpdatesConfigMessage;
-(void)connectWithOptions:(unsigned)arg1 userInfo:(id)arg2 ;
-(MRPlayerPath *)playerPath;
-(NSData *)nowPlayingArtwork;
-(id)supportedMessages;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)setNameCallback:(id)arg1 ;
-(void)sendCustomData:(id)arg1 withName:(id)arg2 ;
-(id)nameCallback;
-(id)connectionStateCallback;
-(void)setConnectionStateCallback:(id)arg1 ;
-(void)setConnectionStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNameCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)customDataCallback;
-(void)setCustomDataCallback:(id)arg1 ;
-(void)setCustomDataCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)volumeCallback;
-(void)setVolumeCallback:(id)arg1 ;
-(void)setVolumeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionStateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)nameCallbackQueue;
-(NSObject*<OS_dispatch_queue>)customDataCallbackQueue;
-(NSObject*<OS_dispatch_queue>)volumeCallbackQueue;
-(MROrigin *)customOrigin;
-(id)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)personalOutputDevices;
-(BOOL)wantsNowPlayingNotifications;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(BOOL)isUsingSystemPairing;
-(BOOL)wantsVolumeNotifications;
-(BOOL)wantsOutputDeviceNotifications;
-(BOOL)wantsEndpointChangeNotifications;
-(void)setWantsEndpointChangeNotifications:(BOOL)arg1 ;
-(BOOL)wantsSystemEndpointNotifications;
-(void)setWantsSystemEndpointNotifications:(BOOL)arg1 ;
-(void)setPairingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setNameCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setPairingAllowedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setCustomDataCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)ping:(double)arg1 callback:(/*^block*/id)arg2 withQueue:(id)arg3 ;
-(void)sendButtonEvent:(MRHIDButtonEvent)arg1 ;
-(NSObject*<OS_dispatch_queue>)workerQueue;
-(void)_localDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_transportDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_contentItemUpdatedNotification:(id)arg1 ;
-(void)_activeSystemEndpointDidChangeNotification:(id)arg1 ;
-(void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2 ;
-(void)_cleanUpWithReason:(long long)arg1 error:(id)arg2 ;
-(void)_onSerialQueue_registerOriginCallbacks;
-(void)_updateNowPlayingInfo;
-(void)setPairingCallback:(id)arg1 ;
-(void)_handleGenericMessage:(id)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)_callClientConnectionStateCallback:(unsigned)arg1 previousConnectionState:(unsigned)arg2 error:(id)arg3 ;
-(void)setPairingCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPairingAllowedCallback:(id)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)setPairingAllowedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputDevicesUpdatedCallback:(id)arg1 ;
-(void)setOutputDevicesUpdatedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionState:(unsigned)arg1 error:(id)arg2 ;
-(void)setOutputDevicesRemovedCallback:(id)arg1 ;
-(void)setOutputDevicesRemovedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVolumeControlCapabilitiesCallback:(id)arg1 ;
-(void)setVolumeControlCapabilitiesCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanUpStreamsWithReason:(long long)arg1 error:(id)arg2 ;
-(id)_onWorkerQueue_loadDeviceInfo;
-(void)_handleSetStateMessage:(id)arg1 ;
-(id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned)arg1 userInfo:(id)arg2 ;
-(id)_onWorkerQueue_openSecuritySession;
-(id)_onWorkerQueue_registerCustomOrigin;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_onWorkerQueue_reRegisterCustomOrigin;
-(id)_onWorkerQueue_syncClientState;
-(void)_onSerialQueue_prepareToDisconnect:(id)arg1 ;
-(void)setCustomOrigin:(MROrigin *)arg1 ;
-(void)_onWorkerQueue_connectWithOptions:(unsigned)arg1 isRetry:(BOOL)arg2 clientBundleIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(void)connectWithOptions:(unsigned)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(NSRunLoop *)runLoop;
-(void)_onSerialQueue_prepareToConnectWithOptions:(unsigned)arg1 clientBundleIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_onWorkerQueue_disconnect:(id)arg1 ;
-(void)_handleSetArtworkMessage:(id)arg1 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(void)sendClientUpdatesConfigMessageWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleCryptoPairingMessage:(id)arg1 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)setVolumeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)dealloc;
-(void)_handleNotificationMessage:(id)arg1 ;
-(void)_handleTransactionMessage:(id)arg1 ;
-(void)_handleDeviceInfoUpdateMessage:(id)arg1 ;
-(void)_handleSetConnectionStateMessage:(id)arg1 ;
-(void)_handleSetNowPlayingClientMessage:(id)arg1 ;
-(void)_handleSetNowPlayingPlayerMessage:(id)arg1 ;
-(void)_handleRemoveClientMessage:(id)arg1 ;
-(void)_handleRemovePlayerMessage:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 error:(id)arg2 ;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
@end

