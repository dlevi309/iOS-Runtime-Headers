/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData, NSDictionary, NSArray, MRAVEndpoint, MRAVOutputDeviceSourceInfo, _MRAVOutputDeviceDescriptorProtobuf;

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
	BOOL _deviceGroupable;
	BOOL _pickedOnPairedDevice;
	BOOL _hasBatteryLevel;
	BOOL _localDevice;
	BOOL _supportsExternalScreen;
	BOOL _requiresAuthorization;
	BOOL _parentGroupContainsDiscoverableLeader;
	BOOL _volumeControlAvailable;
	BOOL _supportsHAP;
	BOOL _supportsRapport;
	BOOL _isAddedToHomeKit;
	unsigned _deviceType;
	unsigned _deviceSubtype;
	float _batteryLevel;
	float _volume;
	NSString* _name;
	NSString* _uid;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _groupID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;
	NSArray* _clusterComposition;
	unsigned long long _configuredClusterSize;
	NSString* _parentGroupIdentifier;
	NSString* _bluetoothID;
	NSString* _primaryID;
	MRAVEndpoint* _endpoint;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSString* _logicalDeviceID;
	NSString* _currentBluetoothListeningMode;
	NSArray* _availableBluetoothListeningModes;

}

@property (nonatomic,copy) NSString * groupID;                                                                       //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * parentGroupIdentifier;                                                         //@synthesize parentGroupIdentifier=_parentGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * primaryID;                                                                     //@synthesize primaryID=_primaryID - In the implementation block
@property (assign,nonatomic) float volume;                                                                           //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic,__weak) MRAVEndpoint * endpoint;                                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) MRAVOutputDeviceSourceInfo * sourceInfo;                                              //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) NSString * logicalDeviceID;                                                           //@synthesize logicalDeviceID=_logicalDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL supportsRapport;                                                                 //@synthesize supportsRapport=_supportsRapport - In the implementation block
@property (nonatomic,readonly) BOOL isAddedToHomeKit;                                                                //@synthesize isAddedToHomeKit=_isAddedToHomeKit - In the implementation block
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode;                                             //@synthesize currentBluetoothListeningMode=_currentBluetoothListeningMode - In the implementation block
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes;                                           //@synthesize availableBluetoothListeningModes=_availableBluetoothListeningModes - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * modelID;                                                                   //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) NSString * firmwareVersion;                                                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
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
@property (getter=isDeviceGroupable,nonatomic,readonly) BOOL deviceGroupable;                                        //@synthesize deviceGroupable=_deviceGroupable - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) BOOL pickedOnPairedDevice;                              //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned deviceType;                                                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                                               //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) NSArray * clusterComposition;                                                         //@synthesize clusterComposition=_clusterComposition - In the implementation block
@property (nonatomic,readonly) unsigned long long configuredClusterSize;                                             //@synthesize configuredClusterSize=_configuredClusterSize - In the implementation block
@property (nonatomic,readonly) unsigned clusterType; 
@property (nonatomic,readonly) float batteryLevel;                                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasBatteryLevel;                                                                 //@synthesize hasBatteryLevel=_hasBatteryLevel - In the implementation block
@property (getter=isLocalDevice,nonatomic,readonly) BOOL localDevice;                                                //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,readonly) BOOL supportsExternalScreen;                                                          //@synthesize supportsExternalScreen=_supportsExternalScreen - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthorization;                                                           //@synthesize requiresAuthorization=_requiresAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL parentGroupContainsDiscoverableLeader;                                           //@synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;                          //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (nonatomic,readonly) unsigned volumeCapabilities; 
@property (nonatomic,readonly) BOOL isPersonalRoute; 
@property (nonatomic,readonly) NSString * bluetoothID;                                                               //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (nonatomic,readonly) NSString * debugName; 
@property (getter=isUsingJSONProtocol,nonatomic,readonly) BOOL usingJSONProtocol; 
@property (nonatomic,readonly) BOOL supportsHAP;                                                                     //@synthesize supportsHAP=_supportsHAP - In the implementation block
@property (nonatomic,readonly) NSString * capabilitiesDescription; 
@property (nonatomic,readonly) NSString * composedTypeDescription; 
@property (nonatomic,readonly) NSString * roleDescription; 
@property (nonatomic,readonly) NSDictionary * jsonEncodableDictionaryRepresentation; 
+(id)localDeviceUID;
+(id)companionDeviceUID;
+(id)localDeviceLocalizedName;
-(unsigned)volumeCapabilities;
-(BOOL)supportsBluetoothSharing;
-(BOOL)isDeviceGroupable;
-(unsigned)deviceType;
-(NSString *)uid;
-(NSString *)currentBluetoothListeningMode;
-(BOOL)canAccessiCloudMusicLibrary;
-(NSString *)firmwareVersion;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(NSString *)modelID;
-(void)setVolume:(float)arg1 ;
-(NSArray *)availableBluetoothListeningModes;
-(BOOL)isProxyGroupPlayer;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(BOOL)supportsHAP;
-(unsigned)deviceSubtype;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)isUsingJSONProtocol;
-(NSData *)MACAddress;
-(NSString *)bluetoothID;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)supportsExternalScreen;
-(BOOL)isRemoteControllable;
-(BOOL)hasBatteryLevel;
-(NSArray *)clusterComposition;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)canAccessAppleMusic;
-(BOOL)isVolumeControlAvailable;
-(NSDictionary *)modelSpecificInfo;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(void)setEndpoint:(MRAVEndpoint *)arg1 ;
-(unsigned)clusterType;
-(NSString *)groupID;
-(float)batteryLevel;
-(NSString *)parentGroupIdentifier;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupable;
-(BOOL)isLocalDevice;
-(BOOL)canRelayCommunicationChannel;
-(unsigned long long)configuredClusterSize;
-(BOOL)isAddedToHomeKit;
-(void)setGroupID:(NSString *)arg1 ;
-(MRAVEndpoint *)endpoint;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)supportsRapport;
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
-(NSString *)name;
-(id)description;
-(BOOL)isEqualToOutputDevice:(id)arg1 ;
-(NSString *)capabilitiesDescription;
-(NSString *)roleDescription;
-(NSString *)composedTypeDescription;
-(BOOL)isPersonalRoute;
-(void)setPrimaryID:(NSString *)arg1 ;
-(BOOL)containsUID:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)jsonEncodableDictionaryRepresentation;
-(NSString *)playingPairedDeviceName;
-(void)setParentGroupIdentifier:(NSString *)arg1 ;
-(float)volume;
-(NSString *)primaryID;
-(NSString *)debugName;
-(BOOL)isEqual:(id)arg1 ;
@end

