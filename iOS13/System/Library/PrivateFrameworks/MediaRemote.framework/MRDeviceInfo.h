/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData, NSArray, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfo : NSObject {

	BOOL _tightSyncGroup;
	BOOL _pairingAllowed;
	BOOL _supportsSystemPairing;
	BOOL _supportsACL;
	BOOL _supportsSharedQueue;
	BOOL _proxyGroupPlayer;
	BOOL _connected;
	BOOL _supportsExtendedMotion;
	BOOL _groupLeader;
	BOOL _airPlayActive;
	NSString* _name;
	NSString* _identifier;
	NSString* _localizedModelName;
	NSString* _buildVersion;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _systemMediaApplication;
	NSString* _deviceUID;
	NSString* _localReceiverPairingIdentity;
	NSString* _managedConfigurationDeviceIdentifier;
	unsigned long long _protocolVersion;
	long long _type;
	unsigned long long _groupedDeviceCount;
	NSString* _tightSyncUID;
	NSString* _groupUID;
	NSString* _groupName;
	NSString* _senderDefaultGroupUID;
	unsigned long long _sharedQueueVersion;
	NSData* _bluetoothAddress;
	unsigned long long _groupLogicalDeviceCount;
	NSArray* _groupedDevices;
	NSArray* _airPlayReceivers;
	NSString* _linkAgent;
	NSString* _systemPodcastApplication;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * protobuf; 
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedModelName;                                  //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;                                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * systemMediaApplication;                              //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
@property (nonatomic,copy) NSString * systemPodcastApplication;                            //@synthesize systemPodcastApplication=_systemPodcastApplication - In the implementation block
@property (nonatomic,copy) NSString * deviceUID;                                           //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy) NSString * managedConfigurationDeviceIdentifier;                //@synthesize managedConfigurationDeviceIdentifier=_managedConfigurationDeviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * tightSyncUID;                                        //@synthesize tightSyncUID=_tightSyncUID - In the implementation block
@property (nonatomic,copy) NSString * groupUID;                                            //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                           //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * senderDefaultGroupUID;                               //@synthesize senderDefaultGroupUID=_senderDefaultGroupUID - In the implementation block
@property (assign,getter=isPairingAllowed,nonatomic) BOOL pairingAllowed;                  //@synthesize pairingAllowed=_pairingAllowed - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemPairing;                                   //@synthesize supportsSystemPairing=_supportsSystemPairing - In the implementation block
@property (assign,nonatomic) BOOL supportsACL;                                             //@synthesize supportsACL=_supportsACL - In the implementation block
@property (assign,nonatomic) BOOL supportsSharedQueue;                                     //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) unsigned long long sharedQueueVersion;                        //@synthesize sharedQueueVersion=_sharedQueueVersion - In the implementation block
@property (assign,getter=isProxyGroupPlayer,nonatomic) BOOL proxyGroupPlayer;              //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                            //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL supportsExtendedMotion;                                  //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
@property (nonatomic,copy) NSData * bluetoothAddress;                                      //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (assign,nonatomic) unsigned long long groupLogicalDeviceCount;                   //@synthesize groupLogicalDeviceCount=_groupLogicalDeviceCount - In the implementation block
@property (nonatomic,copy) NSArray * groupedDevices;                                       //@synthesize groupedDevices=_groupedDevices - In the implementation block
@property (assign,getter=isGroupLeader,nonatomic) BOOL groupLeader;                        //@synthesize groupLeader=_groupLeader - In the implementation block
@property (assign,getter=isAirPlayActive,nonatomic) BOOL airPlayActive;                    //@synthesize airPlayActive=_airPlayActive - In the implementation block
@property (nonatomic,copy) NSArray * airPlayReceivers;                                     //@synthesize airPlayReceivers=_airPlayReceivers - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * localReceiverPairingIdentity;               //@synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity - In the implementation block
@property (nonatomic,readonly) unsigned long long groupedDeviceCount;                      //@synthesize groupedDeviceCount=_groupedDeviceCount - In the implementation block
@property (getter=isTightSyncGroup,nonatomic,readonly) BOOL tightSyncGroup;                //@synthesize tightSyncGroup=_tightSyncGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkAgent;                                  //@synthesize linkAgent=_linkAgent - In the implementation block
+(long long)type;
+(id)currentDeviceInfo;
+(id)networkIdentifier;
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(unsigned long long)protocolVersion;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)protobuf;
-(NSData *)bluetoothAddress;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(BOOL)isGroupLeader;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(NSString *)groupUID;
-(id)initWithOutputDevice:(id)arg1 ;
-(NSString *)deviceUID;
-(void)setDeviceUID:(NSString *)arg1 ;
-(void)setGroupLeader:(BOOL)arg1 ;
-(BOOL)isAirPlayActive;
-(void)setAirPlayActive:(BOOL)arg1 ;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(void)setManagedConfigurationDeviceIdentifier:(NSString *)arg1 ;
-(void)setPairingAllowed:(BOOL)arg1 ;
-(void)setTightSyncUID:(NSString *)arg1 ;
-(void)setProxyGroupPlayer:(BOOL)arg1 ;
-(void)setGroupUID:(NSString *)arg1 ;
-(void)setSenderDefaultGroupUID:(NSString *)arg1 ;
-(NSString *)tightSyncUID;
-(void)setGroupLogicalDeviceCount:(unsigned long long)arg1 ;
-(void)setGroupedDevices:(NSArray *)arg1 ;
-(void)setSupportsExtendedMotion:(BOOL)arg1 ;
-(void)setSupportsSystemPairing:(BOOL)arg1 ;
-(void)setSystemMediaApplication:(NSString *)arg1 ;
-(void)setSystemPodcastApplication:(NSString *)arg1 ;
-(void)setAirPlayReceivers:(NSArray *)arg1 ;
-(void)setSupportsSharedQueue:(BOOL)arg1 ;
-(void)setSharedQueueVersion:(unsigned long long)arg1 ;
-(void)setSupportsACL:(BOOL)arg1 ;
-(NSString *)localizedModelName;
-(NSString *)systemMediaApplication;
-(NSString *)senderDefaultGroupUID;
-(BOOL)supportsSystemPairing;
-(BOOL)supportsACL;
-(BOOL)supportsSharedQueue;
-(unsigned long long)sharedQueueVersion;
-(BOOL)supportsExtendedMotion;
-(NSArray *)groupedDevices;
-(NSString *)linkAgent;
-(NSString *)managedConfigurationDeviceIdentifier;
-(BOOL)isTightSyncGroup;
-(BOOL)isPairingAllowed;
-(unsigned long long)groupLogicalDeviceCount;
-(NSArray *)airPlayReceivers;
-(NSString *)localReceiverPairingIdentity;
-(unsigned long long)groupedDeviceCount;
-(NSString *)systemPodcastApplication;
@end

