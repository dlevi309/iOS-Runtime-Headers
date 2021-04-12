/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>
#import <libobjc.A.dylib/HMControllable.h>

@protocol HMAccessoryDelegate;
@class HMFUnfairLock, HMDevice, HMSoftwareUpdateController, NSUUID, NSString, HMHome, HMRoom, HMFSoftwareVersion, NSArray, HMAccessoryCategory, HMApplicationData, NSNumber, HMAccessorySettings, HMFPairingIdentity, HMFWiFiNetworkInfo, HMSymptomsHandler, _HMContext, HMMutableArray, HMRemoteLoginHandler, NSDictionary, HMNetworkConfigurationProfile;

@interface HMAccessory : NSObject <HMFLogging, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData, HMAccessorySettingsContainer, HMControllable> {

	HMFUnfairLock* _lock;
	BOOL _currentAccessory;
	HMDevice* _device;
	HMSoftwareUpdateController* _softwareUpdateController;
	BOOL _supportsIdentify;
	BOOL _firmwareUpdateAvailable;
	BOOL _reachable;
	BOOL _bridgedAccessory;
	BOOL _controllable;
	BOOL _supportsMediaAccessControl;
	BOOL _supportsTargetControl;
	BOOL _supportsTargetController;
	BOOL _targetControllerHardwareSupport;
	BOOL _supportsMultiUser;
	BOOL _supportsCompanionInitiatedRestart;
	BOOL _suspendCapable;
	BOOL _paired;
	NSUUID* _uniqueIdentifier;
	id<HMAccessoryDelegate> _delegate;
	NSString* _name;
	NSString* _configuredName;
	NSString* _deviceIdentifier;
	HMHome* _home;
	HMRoom* _room;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _firmwareVersion;
	NSString* _serialNumber;
	HMFSoftwareVersion* _softwareVersion;
	NSString* _bundleID;
	NSString* _storeID;
	NSArray* _uniqueIdentifiersForBridgedAccessories;
	HMAccessoryCategory* _category;
	HMApplicationData* _applicationData;
	unsigned long long _transportTypes;
	unsigned long long _additionalSetupStatus;
	NSNumber* _accessoryFlags;
	long long _certificationStatus;
	long long _associationOptions;
	NSUUID* _accountIdentifier;
	HMAccessorySettings* _settings;
	HMFPairingIdentity* _pairingIdentity;
	HMFWiFiNetworkInfo* _wifiNetworkInfo;
	NSArray* _controlTargetUUIDs;
	HMSymptomsHandler* _symptomsHandler;
	NSUUID* _networkProtectionGroupUUID;
	_HMContext* _context;
	long long _reachableTransports;
	HMMutableArray* _currentServices;
	NSUUID* _uuid;
	unsigned long long _accessoryReprovisionState;
	HMRemoteLoginHandler* _remoteLoginHandler;
	HMMutableArray* _accessoryProfiles;

}

@property (nonatomic,copy,readonly) NSArray * televisionProfiles; 
@property (copy,readonly) NSDictionary * serializedDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSArray * cameraProfiles; 
@property (nonatomic,readonly) HMNetworkConfigurationProfile * networkConfigurationProfile; 
@property (nonatomic,retain) _HMContext * context;                                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                          //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long reachableTransports;                                              //@synthesize reachableTransports=_reachableTransports - In the implementation block
@property (nonatomic,copy) HMMutableArray * currentServices;                                             //@synthesize currentServices=_currentServices - In the implementation block
@property (assign,nonatomic) BOOL bridgedAccessory;                                                      //@synthesize bridgedAccessory=_bridgedAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long transportTypes;                                          //@synthesize transportTypes=_transportTypes - In the implementation block
@property (assign,nonatomic) unsigned long long additionalSetupStatus;                                   //@synthesize additionalSetupStatus=_additionalSetupStatus - In the implementation block
@property (nonatomic,retain) NSNumber * accessoryFlags;                                                  //@synthesize accessoryFlags=_accessoryFlags - In the implementation block
@property (assign,nonatomic) long long associationOptions;                                               //@synthesize associationOptions=_associationOptions - In the implementation block
@property (copy) NSUUID * accountIdentifier;                                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * controlTargetUUIDs;                                                 //@synthesize controlTargetUUIDs=_controlTargetUUIDs - In the implementation block
@property (assign,nonatomic) BOOL supportsTargetControl;                                                 //@synthesize supportsTargetControl=_supportsTargetControl - In the implementation block
@property (assign,nonatomic) BOOL supportsTargetController;                                              //@synthesize supportsTargetController=_supportsTargetController - In the implementation block
@property (assign,nonatomic) BOOL targetControllerHardwareSupport;                                       //@synthesize targetControllerHardwareSupport=_targetControllerHardwareSupport - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiUser;                                                     //@synthesize supportsMultiUser=_supportsMultiUser - In the implementation block
@property (assign,nonatomic) BOOL supportsCompanionInitiatedRestart;                                     //@synthesize supportsCompanionInitiatedRestart=_supportsCompanionInitiatedRestart - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                                                    //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMRoom * room;                                                       //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL paired;                                                                //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * model;                                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                                      //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                                                   //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (copy) NSString * serialNumber;                                                                //@synthesize serialNumber=_serialNumber - In the implementation block
@property (copy) NSString * bundleID;                                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * storeID;                                                                     //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) BOOL firmwareUpdateAvailable;                                               //@synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryReprovisionState;                               //@synthesize accessoryReprovisionState=_accessoryReprovisionState - In the implementation block
@property (readonly) HMAccessorySettings * settings;                                                     //@synthesize settings=_settings - In the implementation block
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                                          //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (copy) HMFSoftwareVersion * softwareVersion;                                                   //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (retain) HMRemoteLoginHandler * remoteLoginHandler;                                            //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (copy) HMSymptomsHandler * symptomsHandler;                                                    //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (nonatomic,copy) NSArray * uniqueIdentifiersForBridgedAccessories;                             //@synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories - In the implementation block
@property (nonatomic,retain) HMMutableArray * accessoryProfiles;                                         //@synthesize accessoryProfiles=_accessoryProfiles - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                                              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsMediaAccessControl;                                            //@synthesize supportsMediaAccessControl=_supportsMediaAccessControl - In the implementation block
@property (nonatomic,retain) HMFWiFiNetworkInfo * wifiNetworkInfo;                                       //@synthesize wifiNetworkInfo=_wifiNetworkInfo - In the implementation block
@property (nonatomic,readonly) BOOL suspendCapable;                                                      //@synthesize suspendCapable=_suspendCapable - In the implementation block
@property (nonatomic,readonly) NSArray * bridgedAccessories; 
@property (readonly) NSUUID * networkProtectionGroupUUID;                                                //@synthesize networkProtectionGroupUUID=_networkProtectionGroupUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMAccessoryDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBridged,nonatomic,readonly) BOOL bridged; 
@property (nonatomic,copy,readonly) NSArray * identifiersForBridgedAccessories; 
@property (nonatomic,copy,readonly) NSArray * services; 
@property (copy,readonly) NSArray * profiles; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (readonly) BOOL supportsIdentify;                                                              //@synthesize supportsIdentify=_supportsIdentify - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (__weak,readonly) HMHome * containerHome; 
@property (getter=isControllable,readonly) BOOL controllable;                                            //@synthesize controllable=_controllable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)accessoryWithAccessoryReference:(id)arg1 home:(id)arg2 ;
+(id)_televisionProfilesForAccessoryServices:(id)arg1 ;
+(id)_networkRouterProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_cameraProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_mediaProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_networkConfigurationProfilesForCoder:(id)arg1 accessoryIdentifier:(id)arg2 ;
+(id)accessoryWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMAccessoryDelegate>)delegate;
-(void)setDelegate:(id<HMAccessoryDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(NSString *)bundleID;
-(BOOL)isBlocked;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)model;
-(void)setContext:(_HMContext *)arg1 ;
-(id)device;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSUUID *)accountIdentifier;
-(HMHome *)home;
-(HMAccessorySettings *)settings;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(id)_privateDelegate;
-(NSString *)storeID;
-(NSArray *)services;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(unsigned long long)transportTypes;
-(id)mediaProfile;
-(void)pairingIdentityWithPrivateKey:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMApplicationData *)applicationData;
-(HMRoom *)room;
-(void)setDevice:(id)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(HMFSoftwareVersion *)softwareVersion;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMRemoteLoginHandler *)remoteLoginHandler;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(NSArray *)profiles;
-(void)setRoom:(HMRoom *)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)deleteSiriHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)updateAccessoryInfo:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_readValueForCharacteristic:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)certificationStatus;
-(void)setCertificationStatus:(long long)arg1 ;
-(NSArray *)cameraProfiles;
-(id)_findServiceWithUniqueIdentifier:(id)arg1 ;
-(NSDictionary *)serializedDictionaryRepresentation;
-(NSArray *)televisionProfiles;
-(BOOL)isControllable;
-(HMMutableArray *)accessoryProfiles;
-(HMSymptomsHandler *)symptomsHandler;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(HMHome *)containerHome;
-(id)_findService:(id)arg1 ;
-(id)networkRouterProfile;
-(NSUUID *)applicationDataIdentifier;
-(HMMutableArray *)currentServices;
-(void)setCurrentServices:(HMMutableArray *)arg1 ;
-(NSArray *)bridgedAccessories;
-(BOOL)supportsTargetControl;
-(BOOL)supportsTargetController;
-(void)_copyFrom:(id)arg1 ;
-(NSArray *)uniqueIdentifiersForBridgedAccessories;
-(void)setUniqueIdentifiersForBridgedAccessories:(NSArray *)arg1 ;
-(void)setAccessoryReprovisionState:(unsigned long long)arg1 ;
-(id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(BOOL)arg2 ;
-(id)controlTargets;
-(id)targetControllers;
-(void)_updateRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsMediaAccessControl;
-(BOOL)isCurrentAccessory;
-(void)_configureProfilesWithContext:(id)arg1 ;
-(id)softwareUpdateController;
-(BOOL)bridgedAccessory;
-(NSArray *)controlTargetUUIDs;
-(void)_notifyDelegateOfUpdatedSettings:(id)arg1 ;
-(unsigned long long)additionalSetupStatus;
-(BOOL)suspendCapable;
-(void)setSuspendCapable:(BOOL)arg1 ;
-(long long)reachableTransports;
-(void)setReachableTransports:(long long)arg1 ;
-(void)setBridgedAccessory:(BOOL)arg1 ;
-(void)setTransportTypes:(unsigned long long)arg1 ;
-(void)setCurrentAccessory:(BOOL)arg1 ;
-(void)setAccessoryProfiles:(HMMutableArray *)arg1 ;
-(void)setAdditionalSetupStatus:(unsigned long long)arg1 ;
-(NSNumber *)accessoryFlags;
-(void)setAccessoryFlags:(NSNumber *)arg1 ;
-(BOOL)firmwareUpdateAvailable;
-(void)setFirmwareUpdateAvailable:(BOOL)arg1 ;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(void)setSoftwareUpdateController:(id)arg1 ;
-(void)setRemoteLoginHandler:(HMRemoteLoginHandler *)arg1 ;
-(HMFWiFiNetworkInfo *)wifiNetworkInfo;
-(void)setWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(void)setSupportsTargetControl:(BOOL)arg1 ;
-(void)setSupportsTargetController:(BOOL)arg1 ;
-(BOOL)targetControllerHardwareSupport;
-(void)setTargetControllerHardwareSupport:(BOOL)arg1 ;
-(void)setSymptomsHandler:(HMSymptomsHandler *)arg1 ;
-(BOOL)supportsMultiUser;
-(void)setSupportsMultiUser:(BOOL)arg1 ;
-(BOOL)supportsCompanionInitiatedRestart;
-(void)setSupportsCompanionInitiatedRestart:(BOOL)arg1 ;
-(void)_notifyDelegateOfAddedControlTarget:(id)arg1 ;
-(void)_notifyDelegateOfRemovedControlTarget:(id)arg1 ;
-(void)setControlTargetUUIDs:(NSArray *)arg1 ;
-(BOOL)_mergeServices:(id)arg1 operations:(id)arg2 ;
-(BOOL)_mergeControlTargets:(id)arg1 operations:(id)arg2 ;
-(void)_notifyClientsOfTargetControlSupportUpdate;
-(void)_notifyClientsOfMultiUserSupportUpdate;
-(void)_notifyClientsOfSupportsCompanionInitiatedRestartUpdate;
-(void)_notifyDelegateOfAppDataUpdateForService:(id)arg1 ;
-(void)setControllable:(BOOL)arg1 ;
-(void)_notifyDelegatesOfUpdatedControllable;
-(unsigned long long)accessoryReprovisionState;
-(BOOL)supportsIdentify;
-(void)setSupportsIdentify:(BOOL)arg1 ;
-(void)_notifyDelegatesOfAdditionalSetupRequiredChange;
-(void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2 ;
-(BOOL)__updateSymptomsHandler:(id)arg1 operations:(id)arg2 ;
-(void)setSupportsMediaAccessControl:(BOOL)arg1 ;
-(NSUUID *)networkProtectionGroupUUID;
-(void)setNetworkProtectionGroupUUID:(NSUUID *)arg1 ;
-(void)__handleConnectivityChanged:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteSiriHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(BOOL)arg1 ;
-(void)addControlTargetUUIDs:(id)arg1 ;
-(void)removeControlTargetUUIDs:(id)arg1 ;
-(BOOL)isBridged;
-(NSArray *)identifiersForBridgedAccessories;
-(void)resetControlTargetUUIDs;
-(id)_accessoryInformationService;
-(id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2 ;
-(BOOL)isFirmwareUpdateAvailable;
-(BOOL)isAdditionalSetupRequired;
-(void)queryAdvertisementInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSuspendCapable;
-(long long)associationOptions;
-(void)updateAccessoryName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleCharacteristicValueUpdated:(id)arg1 ;
-(void)_handleRenamed:(id)arg1 ;
-(void)_handleConnectivityChanged:(id)arg1 ;
-(void)_handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleAccessoryNotificationsUpdated:(id)arg1 ;
-(void)_checkForTelevisionProfileChanges:(id)arg1 ;
-(void)_handleAccessoryFlagsChanged:(id)arg1 ;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_updateFromAccessory:(id)arg1 ;
-(void)_listPairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleServiceRenamed:(id)arg1 ;
-(void)_handleServiceDefaultNameUpdate:(id)arg1 ;
-(void)_handleServiceTypeAssociated:(id)arg1 ;
-(void)_handleServiceSubtype:(id)arg1 ;
-(void)_handleServiceConfigurationState:(id)arg1 ;
-(void)_handleServiceMediaSourceIdentifierUpdated:(id)arg1 ;
-(void)_handleAccessoryCategoryChanged:(id)arg1 ;
-(void)notifyDelegateOfAppDataUpdateForService:(id)arg1 ;
-(void)_handleAccessoryControllableChanged:(id)arg1 ;
-(void)_handleSymptomsHandlerUpdatedMessage:(id)arg1 ;
-(void)addControlTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeControlTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetControlTargetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleControlTargetsUpdatedMessage:(id)arg1 ;
-(void)_handleTargetControlSupportUpdatedMessage:(id)arg1 ;
-(void)_handleMultiUserSupportUpdatedMessage:(id)arg1 ;
-(void)_handleSupportsCompanionInitiatedRestartUpdatedMessage:(id)arg1 ;
-(void)setAssociationOptions:(long long)arg1 ;
-(HMNetworkConfigurationProfile *)networkConfigurationProfile;
@end

