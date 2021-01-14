/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRExternalDevice.h>
#import <libobjc.A.dylib/MRAVDistantExternalDeviceClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVDistantExternalDeviceMetadata, NSXPCConnection, MROrigin, NSArray, NSNumber, NSXPCListenerEndpoint, NSString;

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	MRAVDistantExternalDeviceMetadata* _externalDeviceMetadata;
	NSXPCConnection* _hostedExternalDeviceConnection;
	unsigned long long _deviceNotifications;
	unsigned _connectionState;
	MROrigin* _customOrigin;
	BOOL _isValid;
	BOOL _hasEverAtteptedToConnectWhileInvalid;
	NSArray* _subscribedPlayerPaths;
	NSNumber* _isPaired;
	BOOL _hasEverAttemptedToConnect;
	unsigned long long _callbacks;
	/*^block*/id _connectionStateCallback;
	NSObject*<OS_dispatch_queue> _connectionStateCallbackQueue;
	/*^block*/id _nameCallback;
	NSObject*<OS_dispatch_queue> _nameCallbackQueue;
	/*^block*/id _customDataCallback;
	NSObject*<OS_dispatch_queue> _customDataCallbackQueue;
	/*^block*/id _volumeCallback;
	NSObject*<OS_dispatch_queue> _volumeCallbackQueue;

}

@property (nonatomic,copy) id connectionStateCallback;                                               //@synthesize connectionStateCallback=_connectionStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionStateCallbackQueue;              //@synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id nameCallback;                                                          //@synthesize nameCallback=_nameCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nameCallbackQueue;                         //@synthesize nameCallbackQueue=_nameCallbackQueue - In the implementation block
@property (nonatomic,copy) id customDataCallback;                                                    //@synthesize customDataCallback=_customDataCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> customDataCallbackQueue;                   //@synthesize customDataCallbackQueue=_customDataCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeCallback;                                                        //@synthesize volumeCallback=_volumeCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeCallbackQueue;                       //@synthesize volumeCallbackQueue=_volumeCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (nonatomic,readonly) BOOL hasEverAttemptedToConnect;                                       //@synthesize hasEverAttemptedToConnect=_hasEverAttemptedToConnect - In the implementation block
@property (nonatomic,readonly) unsigned long long callbacks;                                         //@synthesize callbacks=_callbacks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceInterface;
+(id)clientInterface;
-(BOOL)isPaired;
-(long long)port;
-(void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
-(id)deviceInfo;
-(unsigned)connectionState;
-(unsigned long long)callbacks;
-(void)unpair;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)debugDescription;
-(id)name;
-(id)hostName;
-(NSString *)description;
-(BOOL)isValid;
-(void)connectWithOptions:(unsigned)arg1 userInfo:(id)arg2 ;
-(id)supportedMessages;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setNameCallback:(id)arg1 ;
-(void)sendCustomData:(id)arg1 withName:(id)arg2 ;
-(id)nameCallback;
-(void)hostedExternalDeviceConnectionStateDidChange:(unsigned)arg1 withError:(id)arg2 ;
-(void)hostedExternalDeviceNameDidChange:(id)arg1 ;
-(void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2 ;
-(void)hostedExternalDeviceEndpointDidChange:(id)arg1 ;
-(void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3 ;
-(id)connectionStateCallback;
-(void)_handleDeviceInfoDidChange:(id)arg1 ;
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
-(id)customOrigin;
-(id)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(id)arg1 ;
-(id)personalOutputDevices;
-(id)initWithExternalDeviceListenerEndpoint:(id)arg1 ;
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
-(BOOL)hasEverAttemptedToConnect;
-(void)disconnect:(id)arg1 ;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)setVolumeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)dealloc;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
@end

