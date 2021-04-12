/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, NSString, HMDRoom, HMDAccessoryVersion, HMDApplicationData, NSNumber, NSUUID, NSArray, NSData, HMFVersion, HMAccessoryCategory, HMDHome, HMDAccessoryNetworkAccessViolation, NSObject, HMFMessageDispatcher, HMDVendorModelEntry, NSSet;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _primary;
	BOOL _reachable;
	BOOL _remotelyReachable;
	NSMutableSet* _accessoryProfiles;
	BOOL _suspended;
	BOOL _suspendCapable;
	BOOL _remoteAccessEnabled;
	BOOL _custom1WoBLE;
	BOOL _custom1WoWLAN;
	NSString* _identifier;
	HMDRoom* _room;
	NSString* _model;
	NSString* _initialModel;
	NSString* _manufacturer;
	NSString* _initialManufacturer;
	HMDAccessoryVersion* _firmwareVersion;
	NSString* _serialNumber;
	HMDApplicationData* _appData;
	NSString* _productData;
	unsigned long long _configNumber;
	NSNumber* _networkClientIdentifier;
	NSUUID* _networkRouterUUID;
	long long _deprecatedTargetNetworkProtectionMode;
	long long _currentNetworkProtectionMode;
	long long _networkClientLAN;
	long long _wiFiCredentialType;
	NSArray* _allowedHosts;
	NSData* _wiFiUniquePreSharedKey;
	NSUUID* _configuredNetworkProtectionGroupUUID;
	NSUUID* _defaultNetworkProtectionGroupUUID;
	HMFVersion* _primaryProfileVersion;
	NSNumber* _initialCategoryIdentifier;
	NSUUID* _uuid;
	HMAccessoryCategory* _category;
	HMDHome* _home;
	NSString* _providedName;
	NSString* _configurationAppIdentifier;
	HMDAccessoryNetworkAccessViolation* _networkAccessViolation;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSNumber* _categoryIdentifier;
	NSString* _configuredName;
	unsigned long long _accessoryReprovisionState;
	double _lastPairingFailureTime;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                            //@synthesize primary=_primary - In the implementation block
@property (assign,getter=isSuspendCapable,nonatomic) BOOL suspendCapable;                              //@synthesize suspendCapable=_suspendCapable - In the implementation block
@property (nonatomic,retain) NSNumber * networkClientIdentifier;                                       //@synthesize networkClientIdentifier=_networkClientIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * networkRouterUUID;                                               //@synthesize networkRouterUUID=_networkRouterUUID - In the implementation block
@property (assign,nonatomic) long long deprecatedTargetNetworkProtectionMode;                          //@synthesize deprecatedTargetNetworkProtectionMode=_deprecatedTargetNetworkProtectionMode - In the implementation block
@property (assign,nonatomic) long long currentNetworkProtectionMode;                                   //@synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode - In the implementation block
@property (assign,nonatomic) long long networkClientLAN;                                               //@synthesize networkClientLAN=_networkClientLAN - In the implementation block
@property (assign,nonatomic) long long wiFiCredentialType;                                             //@synthesize wiFiCredentialType=_wiFiCredentialType - In the implementation block
@property (nonatomic,retain) NSArray * allowedHosts;                                                   //@synthesize allowedHosts=_allowedHosts - In the implementation block
@property (nonatomic,retain) NSData * wiFiUniquePreSharedKey;                                          //@synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey - In the implementation block
@property (nonatomic,retain) HMDAccessoryNetworkAccessViolation * networkAccessViolation;              //@synthesize networkAccessViolation=_networkAccessViolation - In the implementation block
@property (nonatomic,retain) NSUUID * configuredNetworkProtectionGroupUUID;                            //@synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * defaultNetworkProtectionGroupUUID;                             //@synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) long long reachableTransports; 
@property (assign,getter=isRemoteAccessEnabled,nonatomic) BOOL remoteAccessEnabled;                    //@synthesize remoteAccessEnabled=_remoteAccessEnabled - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                           //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIdentifier;                                            //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,retain) HMDRoom * room;                                                           //@synthesize room=_room - In the implementation block
@property (nonatomic,retain) NSString * configuredName;                                                //@synthesize configuredName=_configuredName - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                          //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                        //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryReprovisionState;                             //@synthesize accessoryReprovisionState=_accessoryReprovisionState - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                    //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL custom1WoBLE;                                                        //@synthesize custom1WoBLE=_custom1WoBLE - In the implementation block
@property (assign,nonatomic) BOOL custom1WoWLAN;                                                       //@synthesize custom1WoWLAN=_custom1WoWLAN - In the implementation block
@property (assign,nonatomic) double lastPairingFailureTime;                                            //@synthesize lastPairingFailureTime=_lastPairingFailureTime - In the implementation block
@property (getter=isCurrentAccessory,readonly) BOOL currentAccessory; 
@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSNumber * initialCategoryIdentifier;                                   //@synthesize initialCategoryIdentifier=_initialCategoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy) NSString * providedName;                                                    //@synthesize providedName=_providedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialModel;                                           //@synthesize initialModel=_initialModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturer;                                           //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialManufacturer;                                    //@synthesize initialManufacturer=_initialManufacturer - In the implementation block
@property (nonatomic,copy,readonly) HMDAccessoryVersion * firmwareVersion;                             //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * serialNumber;                                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy,readonly) HMDVendorModelEntry * vendorInfo; 
@property (nonatomic,readonly) NSString * productData;                                                 //@synthesize productData=_productData - In the implementation block
@property (nonatomic,readonly) NSString * productGroup; 
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                        //@synthesize suspended=_suspended - In the implementation block
@property (assign,getter=isRemotelyReachable,nonatomic) BOOL remotelyReachable;                        //@synthesize remotelyReachable=_remotelyReachable - In the implementation block
@property (readonly) BOOL supportsUserManagement; 
@property (readonly) BOOL requiresHomeAppForManagement; 
@property (nonatomic,readonly) BOOL supportsMediaContentProfile; 
@property (nonatomic,readonly) BOOL supportsPersonalRequests; 
@property (nonatomic,copy) NSString * configurationAppIdentifier;                                      //@synthesize configurationAppIdentifier=_configurationAppIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL supportsTargetControl; 
@property (nonatomic,readonly) BOOL supportsTargetController; 
@property (nonatomic,readonly) BOOL supportsMultiUser; 
@property (nonatomic,readonly) BOOL supportsCompanionInitiatedRestart; 
@property (nonatomic,retain) HMFVersion * primaryProfileVersion;                                       //@synthesize primaryProfileVersion=_primaryProfileVersion - In the implementation block
@property (copy,readonly) NSArray * accessoryProfiles; 
@property (nonatomic,retain) HMDApplicationData * appData;                                             //@synthesize appData=_appData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)validateProductData:(id)arg1 ;
+(BOOL)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id*)arg2 productNumber:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)model;
-(NSString *)contextID;
-(void)setModel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(NSString *)serialNumber;
-(HMDAccessoryVersion *)firmwareVersion;
-(void)setCategoryIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)categoryIdentifier;
-(id)privateDescription;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDRoom *)room;
-(id)urlString;
-(id)logIdentifier;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(void)setRoom:(HMDRoom *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(void)didEncounterError:(id)arg1 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(HMDVendorModelEntry *)vendorInfo;
-(id)dumpState;
-(void)setFirmwareVersion:(HMDAccessoryVersion *)arg1 ;
-(id)messageDestination;
-(NSArray *)accessoryProfiles;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSArray *)allowedHosts;
-(void)setAllowedHosts:(NSArray *)arg1 ;
-(BOOL)supportsWiFiReconfiguration;
-(BOOL)supportsTargetControl;
-(BOOL)supportsTargetController;
-(void)setAccessoryReprovisionState:(unsigned long long)arg1 ;
-(BOOL)isCurrentAccessory;
-(void)setSuspendCapable:(BOOL)arg1 ;
-(long long)reachableTransports;
-(void)setAccessoryProfiles:(NSArray *)arg1 ;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCompanionInitiatedRestart;
-(unsigned long long)accessoryReprovisionState;
-(id)networkProtectionGroupUUID;
-(BOOL)isSuspendCapable;
-(unsigned long long)configNumber;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(void)_registerForMessages;
-(NSSet *)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(void)unconfigure;
-(void)updateMediaSession:(id)arg1 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 ;
-(id)runtimeState;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)setProvidedName:(NSString *)arg1 ;
-(NSString *)providedName;
-(void)setConfigurationAppIdentifier:(NSString *)arg1 ;
-(BOOL)shouldEnableDaemonRelaunch;
-(void)_handleUpdateNetworkProtection:(id)arg1 ;
-(id)modelWithUpdatedRoom:(id)arg1 ;
-(void)updateRoom:(id)arg1 ;
-(void)removeCloudData;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)remoteAccessEnabled:(BOOL)arg1 ;
-(void)addAdvertisement:(id)arg1 ;
-(void)autoConfigureTargetControllers;
-(long long)wiFiCredentialType;
-(NSNumber *)networkClientIdentifier;
-(id)getConfiguredName;
-(void)setNetworkClientIdentifier:(NSNumber *)arg1 ;
-(void)setNetworkClientLAN:(long long)arg1 ;
-(NSUUID *)networkRouterUUID;
-(void)setNetworkRouterUUID:(NSUUID *)arg1 ;
-(void)setWiFiUniquePreSharedKey:(NSData *)arg1 ;
-(void)setWiFiCredentialType:(long long)arg1 ;
-(BOOL)supportsUserManagement;
-(void)logDuetRoomEvent;
-(BOOL)custom1WoBLE;
-(void)_remoteAccessEnabled:(BOOL)arg1 ;
-(BOOL)supportsMinimumUserPrivilege;
-(void)removeAdvertisement:(id)arg1 ;
-(double)lastPairingFailureTime;
-(void)setLastPairingFailureTime:(double)arg1 ;
-(void)updateCategory:(id)arg1 ;
-(void)updateProvidedName:(id)arg1 ;
-(int)networkProtectionStatusForAWD;
-(void)takeOwnershipOfAppData:(id)arg1 ;
-(id)assistantObject;
-(BOOL)isRemotelyReachable;
-(NSString *)initialModel;
-(NSString *)initialManufacturer;
-(NSNumber *)initialCategoryIdentifier;
-(NSString *)configurationAppIdentifier;
-(id)_updateCategory:(id)arg1 notifyClients:(BOOL)arg2 ;
-(long long)targetNetworkProtectionMode;
-(long long)currentNetworkProtectionMode;
-(NSData *)wiFiUniquePreSharedKey;
-(HMFVersion *)primaryProfileVersion;
-(long long)deprecatedTargetNetworkProtectionMode;
-(void)setCurrentNetworkProtectionMode:(long long)arg1 ;
-(HMDAccessoryNetworkAccessViolation *)networkAccessViolation;
-(NSUUID *)configuredNetworkProtectionGroupUUID;
-(long long)networkClientLAN;
-(void)__handleUpdateRoom:(id)arg1 ;
-(void)__handleRename:(id)arg1 ;
-(void)__handleSetAppData:(id)arg1 ;
-(void)__handleGetAccessoryAdvertisingParams:(id)arg1 ;
-(void)__handleListPairings:(id)arg1 ;
-(void)__handlePairingIdentityRequest:(id)arg1 ;
-(void)__handleIdentify:(id)arg1 ;
-(BOOL)isRemoteAccessEnabled;
-(void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1 ;
-(BOOL)_updateRoom:(id)arg1 ;
-(void)_renameAccessory:(id)arg1 resetName:(BOOL)arg2 message:(id)arg3 ;
-(void)_handleUpdatedName:(id)arg1 ;
-(void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 remoteAccessChanged:(BOOL)arg2 ;
-(void)setRemoteAccessEnabled:(BOOL)arg1 ;
-(BOOL)isReachableForXPCClients;
-(NSUUID *)defaultNetworkProtectionGroupUUID;
-(void)appDataUpdated:(id)arg1 message:(id)arg2 ;
-(void)appDataRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)supportsNetworkProtection;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg1 ;
-(BOOL)providesHashRouteID;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(void)registerForMessagesWithNewUUID:(id)arg1 ;
-(void)setInitialCategoryIdentifier:(NSNumber *)arg1 ;
-(void)setInitialModel:(NSString *)arg1 ;
-(void)setInitialManufacturer:(NSString *)arg1 ;
-(NSString *)productGroup;
-(void)updateManufacturer:(id)arg1 model:(id)arg2 firmwareVersion:(id)arg3 serialNumber:(id)arg4 ;
-(void)notifyAccessoryNameChanged:(BOOL)arg1 ;
-(BOOL)requiresHomeAppForManagement;
-(BOOL)supportsMediaContentProfile;
-(BOOL)supportsPersonalRequests;
-(void)setSuspendedCapable:(BOOL)arg1 ;
-(void)addAccessoryProfile:(id)arg1 ;
-(void)removeAccessoryProfile:(id)arg1 ;
-(void)setPrimaryProfileVersion:(HMFVersion *)arg1 ;
-(void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 ;
-(void)setDeprecatedTargetNetworkProtectionMode:(long long)arg1 ;
-(void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 appliedFirewallWANRules:(id)arg3 ;
-(void)setWifiCredentialType:(long long)arg1 ;
-(void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2 ;
-(void)saveNetworkAccessViolation:(id)arg1 ;
-(void)setConfiguredNetworkProtectionGroupUUID:(NSUUID *)arg1 ;
-(void)didUpdateCurrentNetworkProtection;
-(id)dumpSimpleState;
-(id)hashRouteID;
-(void)setNetworkAccessViolation:(HMDAccessoryNetworkAccessViolation *)arg1 ;
-(void)setCustom1WoBLE:(BOOL)arg1 ;
-(BOOL)custom1WoWLAN;
-(void)setCustom1WoWLAN:(BOOL)arg1 ;
-(id)vendorDetailsForAWD;
-(id)assistantUniqueIdentifier;
-(id)networkProtectionReportForAWD;
@end

