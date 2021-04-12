/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _protocolVersion;
	NSMutableArray* _airplayReceivers;
	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleVersion;
	NSData* _bluetoothAddress;
	int _deviceClass;
	NSString* _deviceUID;
	NSString* _groupName;
	NSString* _groupUID;
	NSMutableArray* _groupedDevices;
	unsigned _lastSupportedMessageType;
	NSString* _linkAgent;
	NSString* _localizedModelName;
	unsigned _logicalDeviceCount;
	NSString* _managedConfigDeviceID;
	NSString* _name;
	NSString* _senderDefaultGroupUID;
	unsigned _sharedQueueVersion;
	NSString* _systemBuildVersion;
	NSString* _systemMediaApplication;
	NSString* _systemPodcastApplication;
	NSString* _tightSyncUID;
	NSString* _uniqueIdentifier;
	BOOL _allowsPairing;
	BOOL _connected;
	BOOL _isAirplayActive;
	BOOL _isGroupLeader;
	BOOL _isProxyGroupPlayer;
	BOOL _supportsACL;
	BOOL _supportsExtendedMotion;
	BOOL _supportsSharedQueue;
	BOOL _supportsSystemPairing;
	BOOL _tightlySyncedGroup;
	SCD_Struct_MR24 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedModelName; 
@property (nonatomic,retain) NSString * localizedModelName;                       //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemBuildVersion; 
@property (nonatomic,retain) NSString * systemBuildVersion;                       //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationBundleVersion; 
@property (nonatomic,retain) NSString * applicationBundleVersion;                 //@synthesize applicationBundleVersion=_applicationBundleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned long long protocolVersion;                  //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLastSupportedMessageType; 
@property (assign,nonatomic) unsigned lastSupportedMessageType;                   //@synthesize lastSupportedMessageType=_lastSupportedMessageType - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSystemPairing; 
@property (assign,nonatomic) BOOL supportsSystemPairing;                          //@synthesize supportsSystemPairing=_supportsSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsPairing; 
@property (assign,nonatomic) BOOL allowsPairing;                                  //@synthesize allowsPairing=_allowsPairing - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) BOOL connected;                                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemMediaApplication; 
@property (nonatomic,retain) NSString * systemMediaApplication;                   //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsACL; 
@property (assign,nonatomic) BOOL supportsACL;                                    //@synthesize supportsACL=_supportsACL - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsSharedQueue; 
@property (assign,nonatomic) BOOL supportsSharedQueue;                            //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsExtendedMotion; 
@property (assign,nonatomic) BOOL supportsExtendedMotion;                         //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
@property (nonatomic,readonly) BOOL hasBluetoothAddress; 
@property (nonatomic,retain) NSData * bluetoothAddress;                           //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (assign,nonatomic) BOOL hasSharedQueueVersion; 
@property (assign,nonatomic) unsigned sharedQueueVersion;                         //@synthesize sharedQueueVersion=_sharedQueueVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceUID; 
@property (nonatomic,retain) NSString * deviceUID;                                //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,readonly) BOOL hasManagedConfigDeviceID; 
@property (nonatomic,retain) NSString * managedConfigDeviceID;                    //@synthesize managedConfigDeviceID=_managedConfigDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                                     //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasLogicalDeviceCount; 
@property (assign,nonatomic) unsigned logicalDeviceCount;                         //@synthesize logicalDeviceCount=_logicalDeviceCount - In the implementation block
@property (assign,nonatomic) BOOL hasTightlySyncedGroup; 
@property (assign,nonatomic) BOOL tightlySyncedGroup;                             //@synthesize tightlySyncedGroup=_tightlySyncedGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsProxyGroupPlayer; 
@property (assign,nonatomic) BOOL isProxyGroupPlayer;                             //@synthesize isProxyGroupPlayer=_isProxyGroupPlayer - In the implementation block
@property (nonatomic,readonly) BOOL hasTightSyncUID; 
@property (nonatomic,retain) NSString * tightSyncUID;                             //@synthesize tightSyncUID=_tightSyncUID - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupUID; 
@property (nonatomic,retain) NSString * groupUID;                                 //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,retain) NSString * groupName;                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupedDevices;                     //@synthesize groupedDevices=_groupedDevices - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupLeader; 
@property (assign,nonatomic) BOOL isGroupLeader;                                  //@synthesize isGroupLeader=_isGroupLeader - In the implementation block
@property (assign,nonatomic) BOOL hasIsAirplayActive; 
@property (assign,nonatomic) BOOL isAirplayActive;                                //@synthesize isAirplayActive=_isAirplayActive - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemPodcastApplication; 
@property (nonatomic,retain) NSString * systemPodcastApplication;                 //@synthesize systemPodcastApplication=_systemPodcastApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderDefaultGroupUID; 
@property (nonatomic,retain) NSString * senderDefaultGroupUID;                    //@synthesize senderDefaultGroupUID=_senderDefaultGroupUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * airplayReceivers;                   //@synthesize airplayReceivers=_airplayReceivers - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkAgent; 
@property (nonatomic,retain) NSString * linkAgent;                                //@synthesize linkAgent=_linkAgent - In the implementation block
+(Class)groupedDevicesType;
+(Class)airplayReceiversType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)hasName;
-(int)deviceClass;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(BOOL)hasConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(unsigned long long)protocolVersion;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(BOOL)hasUniqueIdentifier;
-(NSData *)bluetoothAddress;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(void)setDeviceClass:(int)arg1 ;
-(BOOL)isGroupLeader;
-(BOOL)hasGroupName;
-(id)deviceClassAsString:(int)arg1 ;
-(int)StringAsDeviceClass:(id)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(NSString *)groupUID;
-(NSString *)deviceUID;
-(void)setDeviceUID:(NSString *)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setIsGroupLeader:(BOOL)arg1 ;
-(void)setIsProxyGroupPlayer:(BOOL)arg1 ;
-(void)setLastSupportedMessageType:(unsigned)arg1 ;
-(void)setApplicationBundleVersion:(NSString *)arg1 ;
-(BOOL)hasLastSupportedMessageType;
-(unsigned)lastSupportedMessageType;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(void)setTightSyncUID:(NSString *)arg1 ;
-(void)setGroupUID:(NSString *)arg1 ;
-(void)setSenderDefaultGroupUID:(NSString *)arg1 ;
-(NSString *)tightSyncUID;
-(void)setGroupedDevices:(NSMutableArray *)arg1 ;
-(void)setSupportsExtendedMotion:(BOOL)arg1 ;
-(void)setSupportsSystemPairing:(BOOL)arg1 ;
-(void)setSystemMediaApplication:(NSString *)arg1 ;
-(void)setSystemPodcastApplication:(NSString *)arg1 ;
-(void)setSupportsSharedQueue:(BOOL)arg1 ;
-(void)setSharedQueueVersion:(unsigned)arg1 ;
-(void)setSupportsACL:(BOOL)arg1 ;
-(NSString *)localizedModelName;
-(NSString *)applicationBundleVersion;
-(NSString *)systemMediaApplication;
-(NSString *)managedConfigDeviceID;
-(unsigned long long)groupedDevicesCount;
-(NSString *)senderDefaultGroupUID;
-(BOOL)tightlySyncedGroup;
-(BOOL)allowsPairing;
-(BOOL)supportsSystemPairing;
-(BOOL)supportsACL;
-(BOOL)supportsSharedQueue;
-(unsigned)sharedQueueVersion;
-(BOOL)supportsExtendedMotion;
-(unsigned)logicalDeviceCount;
-(NSMutableArray *)groupedDevices;
-(BOOL)isAirplayActive;
-(NSMutableArray *)airplayReceivers;
-(NSString *)linkAgent;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(void)setManagedConfigDeviceID:(NSString *)arg1 ;
-(void)setTightlySyncedGroup:(BOOL)arg1 ;
-(void)setAllowsPairing:(BOOL)arg1 ;
-(void)setLogicalDeviceCount:(unsigned)arg1 ;
-(void)setIsAirplayActive:(BOOL)arg1 ;
-(void)setAirplayReceivers:(NSMutableArray *)arg1 ;
-(void)setLinkAgent:(NSString *)arg1 ;
-(NSString *)systemPodcastApplication;
-(void)setHasIsProxyGroupPlayer:(BOOL)arg1 ;
-(BOOL)hasIsProxyGroupPlayer;
-(void)setHasSupportsSharedQueue:(BOOL)arg1 ;
-(BOOL)hasSupportsSharedQueue;
-(void)setHasIsGroupLeader:(BOOL)arg1 ;
-(BOOL)hasIsGroupLeader;
-(void)setHasSupportsExtendedMotion:(BOOL)arg1 ;
-(BOOL)hasSupportsExtendedMotion;
-(BOOL)hasDeviceUID;
-(BOOL)hasGroupUID;
-(BOOL)hasSharedQueueVersion;
-(void)addGroupedDevices:(id)arg1 ;
-(void)addAirplayReceivers:(id)arg1 ;
-(void)clearGroupedDevices;
-(id)groupedDevicesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)airplayReceiversCount;
-(void)clearAirplayReceivers;
-(id)airplayReceiversAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocalizedModelName;
-(BOOL)hasSystemBuildVersion;
-(BOOL)hasApplicationBundleIdentifier;
-(BOOL)hasApplicationBundleVersion;
-(void)setHasLastSupportedMessageType:(BOOL)arg1 ;
-(void)setHasSupportsSystemPairing:(BOOL)arg1 ;
-(BOOL)hasSupportsSystemPairing;
-(void)setHasAllowsPairing:(BOOL)arg1 ;
-(BOOL)hasAllowsPairing;
-(BOOL)hasSystemMediaApplication;
-(void)setHasSupportsACL:(BOOL)arg1 ;
-(BOOL)hasSupportsACL;
-(BOOL)hasBluetoothAddress;
-(void)setHasSharedQueueVersion:(BOOL)arg1 ;
-(BOOL)hasManagedConfigDeviceID;
-(void)setHasLogicalDeviceCount:(BOOL)arg1 ;
-(BOOL)hasLogicalDeviceCount;
-(void)setHasTightlySyncedGroup:(BOOL)arg1 ;
-(BOOL)hasTightlySyncedGroup;
-(BOOL)hasTightSyncUID;
-(void)setHasIsAirplayActive:(BOOL)arg1 ;
-(BOOL)hasIsAirplayActive;
-(BOOL)hasSystemPodcastApplication;
-(BOOL)hasSenderDefaultGroupUID;
-(BOOL)hasLinkAgent;
@end

