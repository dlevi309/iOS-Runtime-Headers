/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData, _MRAVOutputDeviceSourceInfoProtobuf;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	float _batteryLevel;
	NSString* _bluetoothID;
	NSMutableArray* _clusterCompositions;
	unsigned _clusterType;
	unsigned _configuredClusterSize;
	int _deviceSubType;
	int _deviceType;
	NSString* _firmwareVersion;
	NSString* _groupID;
	NSString* _logicalDeviceID;
	NSData* _macAddress;
	NSString* _modelID;
	NSData* _modelSpecificInfoData;
	NSString* _name;
	NSString* _parentGroupIdentifier;
	NSString* _primaryUID;
	_MRAVOutputDeviceSourceInfoProtobuf* _sourceInfo;
	NSString* _uniqueIdentifier;
	float _volume;
	int _volumeCapabilities;
	BOOL _canAccessAppleMusic;
	BOOL _canAccessRemoteAssets;
	BOOL _canAccessiCloudMusicLibrary;
	BOOL _canFetchMediaDataFromSender;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canRelayCommunicationChannel;
	BOOL _groupContainsGroupLeader;
	BOOL _isAddedToHomeKit;
	BOOL _isAirPlayReceiverSessionActive;
	BOOL _isDeviceGroupable;
	BOOL _isGroupLeader;
	BOOL _isGroupable;
	BOOL _isLocalDevice;
	BOOL _isProxyGroupPlayer;
	BOOL _isRemoteControllable;
	BOOL _isVolumeControlAvailable;
	BOOL _parentGroupContainsDiscoverableLeader;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _requiresAuthorization;
	BOOL _shouldForceRemoteControlabillity;
	BOOL _supportsBufferedAirPlay;
	BOOL _supportsExternalScreen;
	BOOL _supportsHAP;
	BOOL _usingJSONProtocol;
	SCD_Struct_MR23 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupID; 
@property (nonatomic,retain) NSString * groupID;                                                                   //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) BOOL hasModelID; 
@property (nonatomic,retain) NSString * modelID;                                                                   //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) BOOL hasMacAddress; 
@property (nonatomic,retain) NSData * macAddress;                                                                  //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessRemoteAssets; 
@property (assign,nonatomic) BOOL canAccessRemoteAssets;                                                           //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (assign,nonatomic) BOOL hasIsRemoteControllable; 
@property (assign,nonatomic) BOOL isRemoteControllable;                                                            //@synthesize isRemoteControllable=_isRemoteControllable - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupLeader; 
@property (assign,nonatomic) BOOL isGroupLeader;                                                                   //@synthesize isGroupLeader=_isGroupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupable; 
@property (assign,nonatomic) BOOL isGroupable;                                                                     //@synthesize isGroupable=_isGroupable - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) int deviceType;                                                                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceSubType; 
@property (assign,nonatomic) int deviceSubType;                                                                    //@synthesize deviceSubType=_deviceSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasModelSpecificInfoData; 
@property (nonatomic,retain) NSData * modelSpecificInfoData;                                                       //@synthesize modelSpecificInfoData=_modelSpecificInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryLevel; 
@property (assign,nonatomic) float batteryLevel;                                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocalDevice; 
@property (assign,nonatomic) BOOL isLocalDevice;                                                                   //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsExternalScreen; 
@property (assign,nonatomic) BOOL supportsExternalScreen;                                                          //@synthesize supportsExternalScreen=_supportsExternalScreen - In the implementation block
@property (assign,nonatomic) BOOL hasRequiresAuthorization; 
@property (assign,nonatomic) BOOL requiresAuthorization;                                                           //@synthesize requiresAuthorization=_requiresAuthorization - In the implementation block
@property (assign,nonatomic) BOOL hasShouldForceRemoteControlabillity; 
@property (assign,nonatomic) BOOL shouldForceRemoteControlabillity;                                                //@synthesize shouldForceRemoteControlabillity=_shouldForceRemoteControlabillity - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceInfo; 
@property (nonatomic,retain) _MRAVOutputDeviceSourceInfoProtobuf * sourceInfo;                                     //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsDeviceGroupable; 
@property (assign,nonatomic) BOOL isDeviceGroupable;                                                               //@synthesize isDeviceGroupable=_isDeviceGroupable - In the implementation block
@property (assign,nonatomic) BOOL hasCanRelayCommunicationChannel; 
@property (assign,nonatomic) BOOL canRelayCommunicationChannel;                                                    //@synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasLogicalDeviceID; 
@property (nonatomic,retain) NSString * logicalDeviceID;                                                           //@synthesize logicalDeviceID=_logicalDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasIsProxyGroupPlayer; 
@property (assign,nonatomic) BOOL isProxyGroupPlayer;                                                              //@synthesize isProxyGroupPlayer=_isProxyGroupPlayer - In the implementation block
@property (nonatomic,readonly) BOOL hasFirmwareVersion; 
@property (nonatomic,retain) NSString * firmwareVersion;                                                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                                                                         //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL hasIsVolumeControlAvailable; 
@property (assign,nonatomic) BOOL isVolumeControlAvailable;                                                        //@synthesize isVolumeControlAvailable=_isVolumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessAppleMusic; 
@property (assign,nonatomic) BOOL canAccessAppleMusic;                                                             //@synthesize canAccessAppleMusic=_canAccessAppleMusic - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessiCloudMusicLibrary; 
@property (assign,nonatomic) BOOL canAccessiCloudMusicLibrary;                                                     //@synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary - In the implementation block
@property (assign,nonatomic) BOOL hasGroupContainsGroupLeader; 
@property (assign,nonatomic) BOOL groupContainsGroupLeader;                                                        //@synthesize groupContainsGroupLeader=_groupContainsGroupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsBufferedAirPlay; 
@property (assign,nonatomic) BOOL supportsBufferedAirPlay;                                                         //@synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay - In the implementation block
@property (assign,nonatomic) BOOL hasCanPlayEncryptedProgressiveDownloadAssets; 
@property (assign,nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets;                                       //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (assign,nonatomic) BOOL hasCanFetchMediaDataFromSender; 
@property (assign,nonatomic) BOOL canFetchMediaDataFromSender;                                                     //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (assign,nonatomic) BOOL hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (assign,nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;                 //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (assign,nonatomic) BOOL hasIsAirPlayReceiverSessionActive; 
@property (assign,nonatomic) BOOL isAirPlayReceiverSessionActive;                                                  //@synthesize isAirPlayReceiverSessionActive=_isAirPlayReceiverSessionActive - In the implementation block
@property (nonatomic,readonly) BOOL hasParentGroupIdentifier; 
@property (nonatomic,retain) NSString * parentGroupIdentifier;                                                     //@synthesize parentGroupIdentifier=_parentGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasParentGroupContainsDiscoverableLeader; 
@property (assign,nonatomic) BOOL parentGroupContainsDiscoverableLeader;                                           //@synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsAddedToHomeKit; 
@property (assign,nonatomic) BOOL isAddedToHomeKit;                                                                //@synthesize isAddedToHomeKit=_isAddedToHomeKit - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeCapabilities; 
@property (assign,nonatomic) int volumeCapabilities;                                                               //@synthesize volumeCapabilities=_volumeCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasBluetoothID; 
@property (nonatomic,retain) NSString * bluetoothID;                                                               //@synthesize bluetoothID=_bluetoothID - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsHAP; 
@property (assign,nonatomic) BOOL supportsHAP;                                                                     //@synthesize supportsHAP=_supportsHAP - In the implementation block
@property (assign,nonatomic) BOOL hasUsingJSONProtocol; 
@property (assign,nonatomic) BOOL usingJSONProtocol;                                                               //@synthesize usingJSONProtocol=_usingJSONProtocol - In the implementation block
@property (nonatomic,retain) NSMutableArray * clusterCompositions;                                                 //@synthesize clusterCompositions=_clusterCompositions - In the implementation block
@property (assign,nonatomic) BOOL hasClusterType; 
@property (assign,nonatomic) unsigned clusterType;                                                                 //@synthesize clusterType=_clusterType - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryUID; 
@property (nonatomic,retain) NSString * primaryUID;                                                                //@synthesize primaryUID=_primaryUID - In the implementation block
@property (assign,nonatomic) BOOL hasConfiguredClusterSize; 
@property (assign,nonatomic) unsigned configuredClusterSize;                                                       //@synthesize configuredClusterSize=_configuredClusterSize - In the implementation block
+(Class)clusterCompositionType;
-(BOOL)hasDeviceType;
-(void)setVolumeCapabilities:(int)arg1 ;
-(int)volumeCapabilities;
-(BOOL)isDeviceGroupable;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)hasCanAccessAppleMusic;
-(void)setSupportsExternalScreen:(BOOL)arg1 ;
-(int)deviceType;
-(void)setDeviceSubType:(int)arg1 ;
-(BOOL)canAccessiCloudMusicLibrary;
-(void)setIsLocalDevice:(BOOL)arg1 ;
-(NSString *)firmwareVersion;
-(void)setHasCanAccessAppleMusic:(BOOL)arg1 ;
-(int)deviceSubType;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(NSString *)modelID;
-(BOOL)hasUsingJSONProtocol;
-(int)StringAsDeviceType:(id)arg1 ;
-(BOOL)hasCanAccessiCloudMusicLibrary;
-(void)setVolume:(float)arg1 ;
-(void)setHasRequiresAuthorization:(BOOL)arg1 ;
-(void)setSupportsHAP:(BOOL)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(_MRAVOutputDeviceSourceInfoProtobuf *)sourceInfo;
-(BOOL)supportsHAP;
-(NSString *)primaryUID;
-(BOOL)hasName;
-(BOOL)supportsBufferedAirPlay;
-(NSString *)bluetoothID;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(void)setHasIsDeviceGroupable:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(int)StringAsDeviceSubType:(id)arg1 ;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)supportsExternalScreen;
-(BOOL)hasIsGroupLeader;
-(BOOL)hasSourceInfo;
-(void)setHasCanRelayCommunicationChannel:(BOOL)arg1 ;
-(BOOL)isRemoteControllable;
-(BOOL)hasBatteryLevel;
-(BOOL)hasIsProxyGroupPlayer;
-(void)setDeviceType:(int)arg1 ;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)hasParentGroupContainsDiscoverableLeader;
-(BOOL)hasPrimaryUID;
-(BOOL)isAirPlayReceiverSessionActive;
-(void)setHasUsingJSONProtocol:(BOOL)arg1 ;
-(BOOL)hasMacAddress;
-(BOOL)hasIsAirPlayReceiverSessionActive;
-(BOOL)canAccessAppleMusic;
-(BOOL)isVolumeControlAvailable;
-(void)setHasCanPlayEncryptedProgressiveDownloadAssets:(BOOL)arg1 ;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(unsigned)clusterType;
-(NSString *)groupID;
-(void)setHasIsRemoteControllable:(BOOL)arg1 ;
-(float)batteryLevel;
-(NSString *)parentGroupIdentifier;
-(BOOL)hasModelID;
-(BOOL)hasCanRelayCommunicationChannel;
-(BOOL)isGroupLeader;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessRemoteAssets;
-(BOOL)isGroupable;
-(void)setBluetoothID:(NSString *)arg1 ;
-(BOOL)isLocalDevice;
-(void)setParentGroupContainsDiscoverableLeader:(BOOL)arg1 ;
-(BOOL)canRelayCommunicationChannel;
-(NSString *)uniqueIdentifier;
-(unsigned)configuredClusterSize;
-(id)deviceTypeAsString:(int)arg1 ;
-(BOOL)isAddedToHomeKit;
-(void)setHasCanAccessiCloudMusicLibrary:(BOOL)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasParentGroupContainsDiscoverableLeader:(BOOL)arg1 ;
-(id)clusterCompositionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIsVolumeControlAvailable;
-(void)setPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets:(BOOL)arg1 ;
-(BOOL)hasCanAccessRemoteAssets;
-(BOOL)hasIsAddedToHomeKit;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)setHasCanFetchMediaDataFromSender:(BOOL)arg1 ;
-(void)setCanAccessiCloudMusicLibrary:(BOOL)arg1 ;
-(BOOL)hasFirmwareVersion;
-(BOOL)hasVolumeCapabilities;
-(void)setCanAccessRemoteAssets:(BOOL)arg1 ;
-(NSData *)modelSpecificInfoData;
-(void)setCanPlayEncryptedProgressiveDownloadAssets:(BOOL)arg1 ;
-(BOOL)hasClusterType;
-(NSString *)name;
-(void)clearClusterCompositions;
-(void)setIsAirPlayReceiverSessionActive:(BOOL)arg1 ;
-(BOOL)hasGroupID;
-(BOOL)hasVolume;
-(void)setMacAddress:(NSData *)arg1 ;
-(NSData *)macAddress;
-(void)setHasCanAccessRemoteAssets:(BOOL)arg1 ;
-(BOOL)hasIsDeviceGroupable;
-(void)setHasVolumeCapabilities:(BOOL)arg1 ;
-(BOOL)hasIsGroupable;
-(BOOL)hasGroupContainsGroupLeader;
-(void)setBatteryLevel:(float)arg1 ;
-(BOOL)usingJSONProtocol;
-(id)description;
-(void)setConfiguredClusterSize:(unsigned)arg1 ;
-(void)setUsingJSONProtocol:(BOOL)arg1 ;
-(void)setSupportsBufferedAirPlay:(BOOL)arg1 ;
-(BOOL)hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(void)setIsVolumeControlAvailable:(BOOL)arg1 ;
-(void)setGroupContainsGroupLeader:(BOOL)arg1 ;
-(void)setHasSupportsExternalScreen:(BOOL)arg1 ;
-(void)addClusterComposition:(id)arg1 ;
-(void)setHasIsAirPlayReceiverSessionActive:(BOOL)arg1 ;
-(void)setHasGroupContainsGroupLeader:(BOOL)arg1 ;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(BOOL)hasSupportsHAP;
-(void)setHasConfiguredClusterSize:(BOOL)arg1 ;
-(BOOL)hasLogicalDeviceID;
-(BOOL)hasSupportsExternalScreen;
-(void)setIsAddedToHomeKit:(BOOL)arg1 ;
-(BOOL)hasBluetoothID;
-(void)setHasSupportsHAP:(BOOL)arg1 ;
-(void)setHasClusterType:(BOOL)arg1 ;
-(void)setHasIsGroupLeader:(BOOL)arg1 ;
-(BOOL)shouldForceRemoteControlabillity;
-(void)setIsGroupable:(BOOL)arg1 ;
-(BOOL)hasCanPlayEncryptedProgressiveDownloadAssets;
-(void)setPrimaryUID:(NSString *)arg1 ;
-(BOOL)hasIsLocalDevice;
-(unsigned long long)hash;
-(void)setIsDeviceGroupable:(BOOL)arg1 ;
-(BOOL)hasIsRemoteControllable;
-(void)setHasShouldForceRemoteControlabillity:(BOOL)arg1 ;
-(void)setCanAccessAppleMusic:(BOOL)arg1 ;
-(BOOL)hasCanFetchMediaDataFromSender;
-(void)setHasSupportsBufferedAirPlay:(BOOL)arg1 ;
-(void)setShouldForceRemoteControlabillity:(BOOL)arg1 ;
-(void)setModelID:(NSString *)arg1 ;
-(void)setHasIsLocalDevice:(BOOL)arg1 ;
-(void)setIsRemoteControllable:(BOOL)arg1 ;
-(BOOL)hasShouldForceRemoteControlabillity;
-(BOOL)readFrom:(id)arg1 ;
-(void)setClusterCompositions:(NSMutableArray *)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setParentGroupIdentifier:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setHasIsGroupable:(BOOL)arg1 ;
-(void)setRequiresAuthorization:(BOOL)arg1 ;
-(void)setHasIsAddedToHomeKit:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setModelSpecificInfoData:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIsGroupLeader:(BOOL)arg1 ;
-(void)setHasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets:(BOOL)arg1 ;
-(void)setHasVolume:(BOOL)arg1 ;
-(float)volume;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(unsigned long long)clusterCompositionsCount;
-(void)setCanRelayCommunicationChannel:(BOOL)arg1 ;
-(BOOL)hasModelSpecificInfoData;
-(void)setHasDeviceSubType:(BOOL)arg1 ;
-(BOOL)hasParentGroupIdentifier;
-(void)setClusterType:(unsigned)arg1 ;
-(void)setLogicalDeviceID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)deviceSubTypeAsString:(int)arg1 ;
-(void)setCanFetchMediaDataFromSender:(BOOL)arg1 ;
-(BOOL)hasSupportsBufferedAirPlay;
-(void)setHasIsVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)hasRequiresAuthorization;
-(NSMutableArray *)clusterCompositions;
-(BOOL)hasConfiguredClusterSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasBatteryLevel:(BOOL)arg1 ;
-(BOOL)hasDeviceSubType;
-(void)setSourceInfo:(_MRAVOutputDeviceSourceInfoProtobuf *)arg1 ;
@end

