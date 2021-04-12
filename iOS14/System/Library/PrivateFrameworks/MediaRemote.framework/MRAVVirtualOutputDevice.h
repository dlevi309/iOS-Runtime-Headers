/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVOutputDevice.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSData, NSDictionary, NSArray, NSXPCListenerEndpoint;

@interface MRAVVirtualOutputDevice : MRAVOutputDevice {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSString* _uid;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _logicalDeviceID;
	NSString* _groupID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;
	NSString* _name;
	BOOL _canAccessRemoteAssets;
	BOOL _canAccessAppleMusic;
	BOOL _canAccessiCloudMusicLibrary;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canFetchMediaDataFromSender;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _isRemoteControllable;
	BOOL _canRelayCommunicationChannel;
	BOOL _supportsBufferedAirPlay;
	BOOL _supportsRapport;
	BOOL _isAddedToHomeKit;
	BOOL _isGroupLeader;
	BOOL _groupContainsGroupLeader;
	BOOL _airPlayReceiver;
	NSString* _parentGroupIdentifier;
	BOOL _isGroupable;
	BOOL _supportsBluetoothSharing;
	BOOL _isProxyGroupPlayer;
	BOOL _isPickedOnPairedDevice;
	float _batteryLevel;
	BOOL _hasBatteryLevel;
	BOOL _isLocalDevice;
	BOOL _supportsExternalScreen;
	unsigned _deviceType;
	unsigned _deviceSubType;
	BOOL _requiresAuthorization;
	BOOL _isVolumeControlAvailable;
	float _volume;
	NSString* _bluetoothID;
	BOOL _isUsingJSONProtocol;
	NSString* _currentBluetoothListeningMode;
	NSArray* _availableBluetoothListeningModes;
	NSXPCListenerEndpoint* _pipeEndpoint;
	NSData* _jsonDeviceDefinition;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * pipeEndpoint;              //@synthesize pipeEndpoint=_pipeEndpoint - In the implementation block
@property (nonatomic,readonly) NSData * jsonDeviceDefinition;                     //@synthesize jsonDeviceDefinition=_jsonDeviceDefinition - In the implementation block
-(BOOL)supportsBluetoothSharing;
-(BOOL)isDeviceGroupable;
-(unsigned)deviceType;
-(id)uid;
-(id)currentBluetoothListeningMode;
-(BOOL)canAccessiCloudMusicLibrary;
-(id)firmwareVersion;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(id)modelID;
-(void)setVolume:(float)arg1 ;
-(id)availableBluetoothListeningModes;
-(BOOL)isProxyGroupPlayer;
-(id)sourceInfo;
-(unsigned)deviceSubtype;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isUsingJSONProtocol;
-(id)MACAddress;
-(id)bluetoothID;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)supportsExternalScreen;
-(BOOL)isRemoteControllable;
-(BOOL)hasBatteryLevel;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)canAccessAppleMusic;
-(BOOL)isVolumeControlAvailable;
-(id)modelSpecificInfo;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(id)groupID;
-(float)batteryLevel;
-(id)parentGroupIdentifier;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)isAddedToHomeKit;
-(void)setGroupID:(id)arg1 ;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)supportsRapport;
-(NSXPCListenerEndpoint *)pipeEndpoint;
-(NSData *)jsonDeviceDefinition;
-(id)name;
-(id)playingPairedDeviceName;
-(float)volume;
-(id)initWithJSONData:(id)arg1 pipeEndpoint:(id)arg2 ;
@end

