/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, _MRAVOutputDeviceSourceInfoProtobuf;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	float _batteryLevel;
	NSString* _bluetoothID;
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
	SCD_Struct_MR22 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(int)deviceType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)groupID;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(BOOL)hasGroupID;
-(BOOL)hasName;
-(NSData *)macAddress;
-(NSString *)firmwareVersion;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(float)batteryLevel;
-(void)setDeviceType:(int)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(_MRAVOutputDeviceSourceInfoProtobuf *)sourceInfo;
-(void)setSourceInfo:(_MRAVOutputDeviceSourceInfoProtobuf *)arg1 ;
-(BOOL)hasSourceInfo;
-(void)setBatteryLevel:(float)arg1 ;
-(NSString *)parentGroupIdentifier;
-(NSString *)bluetoothID;
-(void)setBluetoothID:(NSString *)arg1 ;
-(NSString *)modelID;
-(int)deviceSubType;
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
-(BOOL)hasBatteryLevel;
-(id)deviceTypeAsString:(int)arg1 ;
-(int)StringAsDeviceType:(id)arg1 ;
-(BOOL)hasDeviceType;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(BOOL)isVolumeControlAvailable;
-(int)volumeCapabilities;
-(BOOL)isProxyGroupPlayer;
-(void)setRequiresAuthorization:(BOOL)arg1 ;
-(BOOL)isLocalDevice;
-(void)setHasVolume:(BOOL)arg1 ;
-(BOOL)hasVolume;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(BOOL)isAddedToHomeKit;
-(BOOL)supportsHAP;
-(void)setLogicalDeviceID:(NSString *)arg1 ;
-(void)setModelID:(NSString *)arg1 ;
-(void)setMacAddress:(NSData *)arg1 ;
-(void)setCanAccessRemoteAssets:(BOOL)arg1 ;
-(void)setCanAccessAppleMusic:(BOOL)arg1 ;
-(void)setCanAccessiCloudMusicLibrary:(BOOL)arg1 ;
-(void)setCanPlayEncryptedProgressiveDownloadAssets:(BOOL)arg1 ;
-(void)setCanFetchMediaDataFromSender:(BOOL)arg1 ;
-(void)setPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets:(BOOL)arg1 ;
-(void)setIsRemoteControllable:(BOOL)arg1 ;
-(void)setCanRelayCommunicationChannel:(BOOL)arg1 ;
-(void)setSupportsBufferedAirPlay:(BOOL)arg1 ;
-(void)setIsGroupLeader:(BOOL)arg1 ;
-(void)setGroupContainsGroupLeader:(BOOL)arg1 ;
-(void)setIsAirPlayReceiverSessionActive:(BOOL)arg1 ;
-(void)setParentGroupContainsDiscoverableLeader:(BOOL)arg1 ;
-(void)setParentGroupIdentifier:(NSString *)arg1 ;
-(void)setIsGroupable:(BOOL)arg1 ;
-(void)setIsDeviceGroupable:(BOOL)arg1 ;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)setDeviceSubType:(int)arg1 ;
-(void)setIsAddedToHomeKit:(BOOL)arg1 ;
-(void)setVolumeCapabilities:(int)arg1 ;
-(void)setIsVolumeControlAvailable:(BOOL)arg1 ;
-(void)setSupportsHAP:(BOOL)arg1 ;
-(void)setModelSpecificInfoData:(NSData *)arg1 ;
-(void)setIsLocalDevice:(BOOL)arg1 ;
-(BOOL)supportsExternalScreen;
-(void)setSupportsExternalScreen:(BOOL)arg1 ;
-(NSData *)modelSpecificInfoData;
-(BOOL)hasVolumeCapabilities;
-(void)setHasIsVolumeControlAvailable:(BOOL)arg1 ;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(BOOL)hasIsProxyGroupPlayer;
-(void)setHasVolumeCapabilities:(BOOL)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)hasModelID;
-(BOOL)hasMacAddress;
-(void)setHasCanAccessRemoteAssets:(BOOL)arg1 ;
-(BOOL)hasCanAccessRemoteAssets;
-(void)setHasIsRemoteControllable:(BOOL)arg1 ;
-(BOOL)hasIsRemoteControllable;
-(void)setHasIsGroupLeader:(BOOL)arg1 ;
-(BOOL)hasIsGroupLeader;
-(void)setHasIsGroupable:(BOOL)arg1 ;
-(BOOL)hasIsGroupable;
-(void)setHasDeviceSubType:(BOOL)arg1 ;
-(BOOL)hasDeviceSubType;
-(id)deviceSubTypeAsString:(int)arg1 ;
-(int)StringAsDeviceSubType:(id)arg1 ;
-(BOOL)hasModelSpecificInfoData;
-(void)setHasBatteryLevel:(BOOL)arg1 ;
-(void)setHasIsLocalDevice:(BOOL)arg1 ;
-(BOOL)hasIsLocalDevice;
-(void)setHasSupportsExternalScreen:(BOOL)arg1 ;
-(BOOL)hasSupportsExternalScreen;
-(void)setHasRequiresAuthorization:(BOOL)arg1 ;
-(BOOL)hasRequiresAuthorization;
-(void)setShouldForceRemoteControlabillity:(BOOL)arg1 ;
-(void)setHasShouldForceRemoteControlabillity:(BOOL)arg1 ;
-(BOOL)hasShouldForceRemoteControlabillity;
-(void)setHasIsDeviceGroupable:(BOOL)arg1 ;
-(BOOL)hasIsDeviceGroupable;
-(void)setHasCanRelayCommunicationChannel:(BOOL)arg1 ;
-(BOOL)hasCanRelayCommunicationChannel;
-(BOOL)hasLogicalDeviceID;
-(BOOL)hasFirmwareVersion;
-(BOOL)hasIsVolumeControlAvailable;
-(void)setHasCanAccessAppleMusic:(BOOL)arg1 ;
-(BOOL)hasCanAccessAppleMusic;
-(void)setHasCanAccessiCloudMusicLibrary:(BOOL)arg1 ;
-(BOOL)hasCanAccessiCloudMusicLibrary;
-(void)setHasGroupContainsGroupLeader:(BOOL)arg1 ;
-(BOOL)hasGroupContainsGroupLeader;
-(void)setHasSupportsBufferedAirPlay:(BOOL)arg1 ;
-(BOOL)hasSupportsBufferedAirPlay;
-(void)setHasCanPlayEncryptedProgressiveDownloadAssets:(BOOL)arg1 ;
-(BOOL)hasCanPlayEncryptedProgressiveDownloadAssets;
-(void)setHasCanFetchMediaDataFromSender:(BOOL)arg1 ;
-(BOOL)hasCanFetchMediaDataFromSender;
-(void)setHasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets:(BOOL)arg1 ;
-(BOOL)hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(void)setHasIsAirPlayReceiverSessionActive:(BOOL)arg1 ;
-(BOOL)hasIsAirPlayReceiverSessionActive;
-(BOOL)hasParentGroupIdentifier;
-(void)setHasParentGroupContainsDiscoverableLeader:(BOOL)arg1 ;
-(BOOL)hasParentGroupContainsDiscoverableLeader;
-(void)setHasIsAddedToHomeKit:(BOOL)arg1 ;
-(BOOL)hasIsAddedToHomeKit;
-(BOOL)hasBluetoothID;
-(void)setHasSupportsHAP:(BOOL)arg1 ;
-(BOOL)hasSupportsHAP;
-(BOOL)shouldForceRemoteControlabillity;
@end

