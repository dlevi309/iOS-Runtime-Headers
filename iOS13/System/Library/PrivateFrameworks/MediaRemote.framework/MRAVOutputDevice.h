/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData, NSDictionary, MRAVOutputDeviceSourceInfo, NSArray, MRAVEndpoint, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDevice : NSObject {

	BOOL _canAccessRemoteAssets;
	BOOL _canAccessAppleMusic;
	BOOL _canAccessiCloudMusicLibrary;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canFetchMediaDataFromSender;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _remoteControllable;
	BOOL _groupLeader;
	BOOL _groupContainsGroupLeader;
	BOOL _airPlayReceiverSessionActive;
	BOOL _groupable;
	BOOL _supportsBluetoothSharing;
	BOOL _proxyGroupPlayer;
	BOOL _canRelayCommunicationChannel;
	BOOL _supportsBufferedAirPlay;
	BOOL _supportsRapport;
	BOOL _isAddedToHomeKit;
	BOOL _deviceGroupable;
	BOOL _pickedOnPairedDevice;
	BOOL _hasBatteryLevel;
	BOOL _localDevice;
	BOOL _supportsExternalScreen;
	BOOL _requiresAuthorization;
	BOOL _parentGroupContainsDiscoverableLeader;
	BOOL _volumeControlAvailable;
	BOOL _supportsHAP;
	unsigned _deviceType;
	unsigned _deviceSubtype;
	float _batteryLevel;
	float _volume;
	NSString* _name;
	NSString* _uid;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _groupID;
	NSString* _logicalDeviceID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;
	NSString* _parentGroupIdentifier;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSString* _bluetoothID;
	NSString* _currentBluetoothListeningMode;
	NSArray* _availableBluetoothListeningModes;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,readonly) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * modelID;                                                                   //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) NSString * firmwareVersion;                                                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                                       //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSString * logicalDeviceID;                                                           //@synthesize logicalDeviceID=_logicalDeviceID - In the implementation block
@property (nonatomic,readonly) NSData * MACAddress;                                                                  //@synthesize MACAddress=_MACAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * modelSpecificInfo;                                                     //@synthesize modelSpecificInfo=_modelSpecificInfo - In the implementation block
@property (nonatomic,readonly) NSString * playingPairedDeviceName;                                                   //@synthesize playingPairedDeviceName=_playingPairedDeviceName - In the implementation block
@property (nonatomic,readonly) BOOL canAccessRemoteAssets;                                                           //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (nonatomic,readonly) BOOL canAccessAppleMusic;                                                             //@synthesize canAccessAppleMusic=_canAccessAppleMusic - In the implementation block
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary;                                                     //@synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary - In the implementation block
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets;                                       //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender;                                                     //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;                 //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (getter=isRemoteControllable,nonatomic,readonly) BOOL remoteControllable;                                  //@synthesize remoteControllable=_remoteControllable - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader;                                                //@synthesize groupLeader=_groupLeader - In the implementation block
@property (nonatomic,readonly) BOOL groupContainsGroupLeader;                                                        //@synthesize groupContainsGroupLeader=_groupContainsGroupLeader - In the implementation block
@property (getter=isAirPlayReceiverSessionActive,nonatomic,readonly) BOOL airPlayReceiverSessionActive;              //@synthesize airPlayReceiverSessionActive=_airPlayReceiverSessionActive - In the implementation block
@property (getter=isGroupable,nonatomic,readonly) BOOL groupable;                                                    //@synthesize groupable=_groupable - In the implementation block
@property (nonatomic,readonly) BOOL supportsBluetoothSharing;                                                        //@synthesize supportsBluetoothSharing=_supportsBluetoothSharing - In the implementation block
@property (getter=isProxyGroupPlayer,nonatomic,readonly) BOOL proxyGroupPlayer;                                      //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel;                                                    //@synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel - In the implementation block
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay;                                                         //@synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay - In the implementation block
@property (nonatomic,readonly) BOOL supportsRapport;                                                                 //@synthesize supportsRapport=_supportsRapport - In the implementation block
@property (nonatomic,readonly) BOOL isAddedToHomeKit;                                                                //@synthesize isAddedToHomeKit=_isAddedToHomeKit - In the implementation block
@property (getter=isDeviceGroupable,nonatomic,readonly) BOOL deviceGroupable;                                        //@synthesize deviceGroupable=_deviceGroupable - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) BOOL pickedOnPairedDevice;                              //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned deviceType;                                                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                                               //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) float batteryLevel;                                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasBatteryLevel;                                                                 //@synthesize hasBatteryLevel=_hasBatteryLevel - In the implementation block
@property (getter=isLocalDevice,nonatomic,readonly) BOOL localDevice;                                                //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,readonly) BOOL supportsExternalScreen;                                                          //@synthesize supportsExternalScreen=_supportsExternalScreen - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthorization;                                                           //@synthesize requiresAuthorization=_requiresAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL parentGroupContainsDiscoverableLeader;                                           //@synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader - In the implementation block
@property (nonatomic,copy) NSString * parentGroupIdentifier;                                                         //@synthesize parentGroupIdentifier=_parentGroupIdentifier - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;                          //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (nonatomic,readonly) unsigned volumeCapabilities; 
@property (nonatomic,readonly) MRAVOutputDeviceSourceInfo * sourceInfo;                                              //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (assign,nonatomic) float volume;                                                                           //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL isPersonalRoute; 
@property (nonatomic,readonly) NSString * bluetoothID;                                                               //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (nonatomic,readonly) NSString * debugName; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode;                                             //@synthesize currentBluetoothListeningMode=_currentBluetoothListeningMode - In the implementation block
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes;                                           //@synthesize availableBluetoothListeningModes=_availableBluetoothListeningModes - In the implementation block
@property (nonatomic,readonly) BOOL supportsHAP;                                                                     //@synthesize supportsHAP=_supportsHAP - In the implementation block
@property (assign,nonatomic,__weak) MRAVEndpoint * endpoint;                                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) NSString * capabilitiesDescription; 
@property (nonatomic,readonly) NSString * composedTypeDescription; 
@property (nonatomic,readonly) NSString * roleDescription; 
@property (nonatomic,readonly) NSDictionary * jsonEncodableDictionaryRepresentation; 
+(id)localDeviceUID;
+(id)localDeviceLocalizedName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(MRAVEndpoint *)endpoint;
-(NSString *)uid;
-(void)setEndpoint:(MRAVEndpoint *)arg1 ;
-(unsigned)deviceType;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
-(NSString *)debugName;
-(NSString *)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)batteryLevel;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(NSData *)MACAddress;
-(NSString *)parentGroupIdentifier;
-(NSString *)bluetoothID;
-(NSString *)modelID;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isGroupLeader;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBluetoothSharing;
-(NSArray *)availableBluetoothListeningModes;
-(NSString *)currentBluetoothListeningMode;
-(BOOL)hasBatteryLevel;
-(NSString *)roleDescription;
-(BOOL)isVolumeControlAvailable;
-(unsigned)volumeCapabilities;
-(BOOL)isProxyGroupPlayer;
-(NSString *)playingPairedDeviceName;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isLocalDevice;
-(unsigned)deviceSubtype;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)isAddedToHomeKit;
-(BOOL)supportsHAP;
-(void)setParentGroupIdentifier:(NSString *)arg1 ;
-(NSDictionary *)modelSpecificInfo;
-(BOOL)supportsExternalScreen;
-(NSString *)capabilitiesDescription;
-(NSString *)composedTypeDescription;
-(NSDictionary *)jsonEncodableDictionaryRepresentation;
-(BOOL)isPersonalRoute;
-(BOOL)supportsRapport;
@end

