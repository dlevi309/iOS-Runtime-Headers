/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMMediaDestinationControllerDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>
#import <libobjc.A.dylib/HMControllable.h>
#import <libobjc.A.dylib/HMMediaDestinationInternal.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMApplicationData.h>
#import <libobjc.A.dylib/HMMediaDestination.h>

@protocol HMAccessoryDelegate;
@class HMFUnfairLock, HMDevice, HMSoftwareUpdateController, NSUUID, NSString, HMHome, HMRoom, HMFSoftwareVersion, NSArray, HMAccessoryCategory, HMApplicationData, NSNumber, HMAccessorySettings, HMFPairingIdentity, HMFWiFiNetworkInfo, HMSymptomsHandler, HMMutableArray, HMRemoteLoginHandler, _HMContext, HMMediaDestinationController, HMMediaDestination, NSDictionary, HMNetworkConfigurationProfile, NSSet;

@interface HMAccessory : NSObject <HMMediaDestinationControllerDataSource, HMFLogging, HMFObject, HMAccessorySettingsContainer, HMControllable, HMMediaDestinationInternal, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding, HMApplicationData, HMMediaDestination> {

	HMFUnfairLock* _lock;
	HMDevice* _device;
	HMSoftwareUpdateController* _softwareUpdateController;
	BOOL _currentAccessory;
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
	BOOL _hasOnboardedForNaturalLighting;
	BOOL _supportsMusicAlarm;
	BOOL _supportsAnnounce;
	BOOL _supportsDoorbellChime;
	BOOL _supportsThirdPartyMusic;
	BOOL _supportsDiagnosticsTransfer;
	BOOL _paired;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
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
	unsigned long long _supportedStereoPairVersions;
	unsigned long long _homePodVariant;
	long long _reachableTransports;
	HMMutableArray* _currentServices;
	unsigned long long _accessoryReprovisionState;
	HMRemoteLoginHandler* _remoteLoginHandler;
	HMMutableArray* _accessoryProfiles;
	_HMContext* _context;
	HMMediaDestinationController* _audioDestinationController;
	HMMediaDestination* _audioDestination;

}

@property (nonatomic,copy,readonly) NSArray * televisionProfiles; 
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,__weak,readonly) HMHome * home; 
@property (nonatomic,copy,readonly) NSString * configuredName; 
@property (getter=isCurrentAccessory,readonly) BOOL currentAccessory; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * storeID; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (getter=isFirmwareUpdateAvailable,nonatomic,readonly) BOOL firmwareUpdateAvailable; 
@property (nonatomic,readonly) unsigned long long accessoryReprovisionState; 
@property (nonatomic,readonly) long long certificationStatus; 
@property (nonatomic,readonly) HMRemoteLoginHandler * remoteLoginHandler; 
@property (nonatomic,readonly) HMSymptomsHandler * symptomsHandler; 
@property (nonatomic,readonly) long long associationOptions; 
@property (nonatomic,readonly) unsigned long long transportTypes; 
@property (nonatomic,readonly) long long reachableTransports; 
@property (nonatomic,readonly) HMFWiFiNetworkInfo * wifiNetworkInfo; 
@property (nonatomic,readonly) BOOL supportsMultiUser; 
@property (nonatomic,readonly) BOOL supportsCompanionInitiatedRestart; 
@property (nonatomic,readonly) BOOL supportsMusicAlarm; 
@property (readonly) HMMediaDestinationController * audioDestinationController; 
@property (nonatomic,readonly) BOOL supportsAnnounce; 
@property (nonatomic,readonly) BOOL supportsDoorbellChime; 
@property (readonly) BOOL supportsThirdPartyMusic; 
@property (readonly) unsigned long long homePodVariant; 
@property (copy,readonly) NSDictionary * serializedDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSArray * cameraProfiles; 
@property (nonatomic,readonly) HMNetworkConfigurationProfile * networkConfigurationProfile; 
@property (readonly) NSSet * lightProfiles; 
@property (readonly) BOOL hasOnboardedForNaturalLighting; 
@property (nonatomic,retain) HMAccessoryCategory * category;                                               //@synthesize category=_category - In the implementation block
@property (getter=isCurrentAccessory) BOOL currentAccessory;                                               //@synthesize currentAccessory=_currentAccessory - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                            //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) long long reachableTransports;                                                //@synthesize reachableTransports=_reachableTransports - In the implementation block
@property (nonatomic,copy) HMMutableArray * currentServices;                                               //@synthesize currentServices=_currentServices - In the implementation block
@property (assign,nonatomic) BOOL bridgedAccessory;                                                        //@synthesize bridgedAccessory=_bridgedAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long transportTypes;                                            //@synthesize transportTypes=_transportTypes - In the implementation block
@property (assign,nonatomic) unsigned long long additionalSetupStatus;                                     //@synthesize additionalSetupStatus=_additionalSetupStatus - In the implementation block
@property (nonatomic,retain) NSNumber * accessoryFlags;                                                    //@synthesize accessoryFlags=_accessoryFlags - In the implementation block
@property (assign,nonatomic) long long associationOptions;                                                 //@synthesize associationOptions=_associationOptions - In the implementation block
@property (copy) NSUUID * accountIdentifier;                                                               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * controlTargetUUIDs;                                                   //@synthesize controlTargetUUIDs=_controlTargetUUIDs - In the implementation block
@property (assign,nonatomic) BOOL supportsTargetControl;                                                   //@synthesize supportsTargetControl=_supportsTargetControl - In the implementation block
@property (assign,nonatomic) BOOL supportsTargetController;                                                //@synthesize supportsTargetController=_supportsTargetController - In the implementation block
@property (assign,nonatomic) BOOL targetControllerHardwareSupport;                                         //@synthesize targetControllerHardwareSupport=_targetControllerHardwareSupport - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiUser;                                                       //@synthesize supportsMultiUser=_supportsMultiUser - In the implementation block
@property (assign,nonatomic) BOOL supportsCompanionInitiatedRestart;                                       //@synthesize supportsCompanionInitiatedRestart=_supportsCompanionInitiatedRestart - In the implementation block
@property (assign,nonatomic) BOOL supportsMusicAlarm;                                                      //@synthesize supportsMusicAlarm=_supportsMusicAlarm - In the implementation block
@property (assign,nonatomic) BOOL supportsDiagnosticsTransfer;                                             //@synthesize supportsDiagnosticsTransfer=_supportsDiagnosticsTransfer - In the implementation block
@property (assign,nonatomic) BOOL supportsAnnounce;                                                        //@synthesize supportsAnnounce=_supportsAnnounce - In the implementation block
@property (assign) BOOL supportsThirdPartyMusic;                                                           //@synthesize supportsThirdPartyMusic=_supportsThirdPartyMusic - In the implementation block
@property (assign) BOOL supportsDoorbellChime;                                                             //@synthesize supportsDoorbellChime=_supportsDoorbellChime - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                                                      //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) HMRoom * room;                                                         //@synthesize room=_room - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL paired;                                                                  //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * model;                                                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                                                     //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (copy) NSString * serialNumber;                                                                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (copy) NSString * bundleID;                                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * storeID;                                                                       //@synthesize storeID=_storeID - In the implementation block
@property (assign,getter=isFirmwareUpdateAvailable,nonatomic) BOOL firmwareUpdateAvailable;                //@synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryReprovisionState;                                 //@synthesize accessoryReprovisionState=_accessoryReprovisionState - In the implementation block
@property (readonly) HMAccessorySettings * settings;                                                       //@synthesize settings=_settings - In the implementation block
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                                            //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (copy) HMFSoftwareVersion * softwareVersion;                                                     //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (retain) HMRemoteLoginHandler * remoteLoginHandler;                                              //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (copy) HMSymptomsHandler * symptomsHandler;                                                      //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (nonatomic,copy) NSArray * uniqueIdentifiersForBridgedAccessories;                               //@synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories - In the implementation block
@property (nonatomic,retain) HMMutableArray * accessoryProfiles;                                           //@synthesize accessoryProfiles=_accessoryProfiles - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                                                //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsMediaAccessControl;                                              //@synthesize supportsMediaAccessControl=_supportsMediaAccessControl - In the implementation block
@property (nonatomic,retain) HMFWiFiNetworkInfo * wifiNetworkInfo;                                         //@synthesize wifiNetworkInfo=_wifiNetworkInfo - In the implementation block
@property (nonatomic,readonly) BOOL suspendCapable;                                                        //@synthesize suspendCapable=_suspendCapable - In the implementation block
@property (nonatomic,readonly) NSArray * bridgedAccessories; 
@property (readonly) NSUUID * networkProtectionGroupUUID;                                                  //@synthesize networkProtectionGroupUUID=_networkProtectionGroupUUID - In the implementation block
@property (retain) _HMContext * context;                                                                   //@synthesize context=_context - In the implementation block
@property (assign) BOOL hasOnboardedForNaturalLighting;                                                    //@synthesize hasOnboardedForNaturalLighting=_hasOnboardedForNaturalLighting - In the implementation block
@property (retain) HMMediaDestinationController * audioDestinationController;                              //@synthesize audioDestinationController=_audioDestinationController - In the implementation block
@property (retain) HMMediaDestination * audioDestination;                                                  //@synthesize audioDestination=_audioDestination - In the implementation block
@property (assign) unsigned long long supportedStereoPairVersions;                                         //@synthesize supportedStereoPairVersions=_supportedStereoPairVersions - In the implementation block
@property (assign) unsigned long long homePodVariant;                                                      //@synthesize homePodVariant=_homePodVariant - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (getter=isAdditionalSetupRequired,nonatomic,readonly) BOOL additionalSetupRequired; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMAccessoryDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBridged,nonatomic,readonly) BOOL bridged; 
@property (nonatomic,copy,readonly) NSArray * identifiersForBridgedAccessories; 
@property (nonatomic,copy,readonly) NSArray * services; 
@property (copy,readonly) NSArray * profiles; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (readonly) BOOL supportsIdentify;                                                                //@synthesize supportsIdentify=_supportsIdentify - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (__weak,readonly) HMHome * containerHome; 
@property (getter=isControllable,readonly) BOOL controllable;                                              //@synthesize controllable=_controllable - In the implementation block
@property (copy,readonly) NSArray * audioDestinationMediaProfiles; 
@property (copy,readonly) NSString * audioDestinationParentIdentifier; 
@property (copy,readonly) NSString * audioDestinationIdentifier; 
@property (copy,readonly) NSString * audioDestinationName; 
@property (readonly) long long audioDestinationType; 
@property (readonly) BOOL supportsAudioDestination; 
@property (readonly) BOOL supportsAudioGroup; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;                                          //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)_lightProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_networkRouterProfilesForAccessoryProfiles:(id)arg1 ;
+(id)shortDescription;
+(id)_cameraProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_mediaProfilesForAccessoryProfiles:(id)arg1 ;
+(id)_networkConfigurationProfilesForCoder:(id)arg1 accessoryIdentifier:(id)arg2 ;
+(id)accessoryWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(id)accessoryWithAccessoryReference:(id)arg1 home:(id)arg2 ;
+(id)_televisionProfilesForAccessoryServices:(id)arg1 ;
-(BOOL)isReachable;
-(NSString *)storeID;
-(BOOL)isBlocked;
-(NSString *)deviceIdentifier;
-(NSArray *)services;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSArray *)profiles;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMRoom *)room;
-(void)setPaired:(BOOL)arg1 ;
-(NSString *)serialNumber;
-(id)_privateDelegate;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSUUID *)applicationDataIdentifier;
-(NSString *)manufacturer;
-(NSUUID *)uuid;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSString *)privateDescription;
-(HMMutableArray *)accessoryProfiles;
-(HMMediaDestination *)audioDestination;
-(HMSymptomsHandler *)symptomsHandler;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)setAudioDestination:(HMMediaDestination *)arg1 ;
-(HMHome *)containerHome;
-(BOOL)paired;
-(id)_findService:(id)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(id)networkRouterProfile;
-(id<HMAccessoryDelegate>)delegate;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)updateAccessoryInfo:(id)arg1 ;
-(NSUUID *)accountIdentifier;
-(HMMutableArray *)currentServices;
-(void)setCurrentServices:(HMMutableArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(HMAccessoryCategory *)category;
-(HMFSoftwareVersion *)softwareVersion;
-(NSArray *)bridgedAccessories;
-(void)_copyFrom:(id)arg1 ;
-(id)logIdentifier;
-(_HMContext *)context;
-(BOOL)isBridged;
-(id)mediaProfile;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(void)setSupportedStereoPairVersions:(unsigned long long)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(BOOL)supportsTargetControl;
-(BOOL)supportsTargetController;
-(id)device;
-(void)deleteSiriHistoryWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)name;
-(void)setDelegate:(id<HMAccessoryDelegate>)arg1 ;
-(NSArray *)uniqueIdentifiersForBridgedAccessories;
-(void)setUniqueIdentifiersForBridgedAccessories:(NSArray *)arg1 ;
-(void)setAccessoryReprovisionState:(unsigned long long)arg1 ;
-(id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(BOOL)arg2 ;
-(id)targetControllers;
-(id)controlTargets;
-(NSString *)description;
-(HMApplicationData *)applicationData;
-(void)setModel:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(void)_updateRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsAudioDestination;
-(NSString *)audioDestinationIdentifier;
-(NSString *)configuredName;
-(BOOL)supportsMediaAccessControl;
-(void)handleRuntimeStateUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCurrentAccessory;
-(NSArray *)attributeDescriptions;
-(BOOL)bridgedAccessory;
-(void)_configureProfilesWithContext:(id)arg1 ;
-(id)softwareUpdateController;
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
-(BOOL)isFirmwareUpdateAvailable;
-(HMFWiFiNetworkInfo *)wifiNetworkInfo;
-(void)setFirmwareUpdateAvailable:(BOOL)arg1 ;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(void)setSoftwareUpdateController:(id)arg1 ;
-(void)setRemoteLoginHandler:(HMRemoteLoginHandler *)arg1 ;
-(void)setWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(void)setSupportsTargetControl:(BOOL)arg1 ;
-(void)setSupportsTargetController:(BOOL)arg1 ;
-(BOOL)targetControllerHardwareSupport;
-(void)setSymptomsHandler:(HMSymptomsHandler *)arg1 ;
-(HMAccessorySettings *)settings;
-(void)setTargetControllerHardwareSupport:(BOOL)arg1 ;
-(void)setSupportsMultiUser:(BOOL)arg1 ;
-(BOOL)supportsCompanionInitiatedRestart;
-(void)setSupportsCompanionInitiatedRestart:(BOOL)arg1 ;
-(BOOL)supportsMusicAlarm;
-(void)setSupportsMusicAlarm:(BOOL)arg1 ;
-(BOOL)supportsAnnounce;
-(void)setSupportsAnnounce:(BOOL)arg1 ;
-(BOOL)supportsIdentify;
-(HMMediaDestinationController *)audioDestinationController;
-(BOOL)supportsDiagnosticsTransfer;
-(void)setSupportsDiagnosticsTransfer:(BOOL)arg1 ;
-(BOOL)supportsThirdPartyMusic;
-(void)setSupportsThirdPartyMusic:(BOOL)arg1 ;
-(BOOL)supportsDoorbellChime;
-(void)setSupportsDoorbellChime:(BOOL)arg1 ;
-(unsigned long long)supportedStereoPairVersions;
-(HMRemoteLoginHandler *)remoteLoginHandler;
-(void)_notifyDelegateOfAddedControlTarget:(id)arg1 ;
-(void)_notifyDelegateOfRemovedControlTarget:(id)arg1 ;
-(void)setControlTargetUUIDs:(NSArray *)arg1 ;
-(BOOL)_mergeServices:(id)arg1 operations:(id)arg2 ;
-(BOOL)_mergeControlTargets:(id)arg1 operations:(id)arg2 ;
-(void)_notifyClientsOfTargetControlSupportUpdate;
-(void)_notifyClientsOfMultiUserSupportUpdate;
-(void)_notifyClientsOfSupportsCompanionInitiatedRestartUpdate;
-(void)_notifyClientsOfSupportsMusicAlarmUpdate;
-(void)setControllable:(BOOL)arg1 ;
-(void)_notifyDelegateOfAppDataUpdateForService:(id)arg1 ;
-(void)_notifyDelegatesOfUpdatedControllable;
-(unsigned long long)accessoryReprovisionState;
-(BOOL)hasOnboardedForNaturalLighting;
-(void)setHasOnboardedForNaturalLighting:(BOOL)arg1 ;
-(void)_notifyClientsOfDiagnosticsTransferSupportUpdate;
-(void)setSupportsIdentify:(BOOL)arg1 ;
-(void)_notifyDelegatesOfAdditionalSetupRequiredChange;
-(void)_mergeProfileObjects:(id)arg1 currentOperations:(id)arg2 ;
-(BOOL)__updateSymptomsHandler:(id)arg1 operations:(id)arg2 ;
-(void)setSupportsMediaAccessControl:(BOOL)arg1 ;
-(NSUUID *)networkProtectionGroupUUID;
-(void)setNetworkProtectionGroupUUID:(NSUUID *)arg1 ;
-(void)notifyDelegateOfAudioDestinationUpdate;
-(void)setAudioDestinationController:(HMMediaDestinationController *)arg1 ;
-(void)notifyDelegateOfAudioDestinationControllerUpdate;
-(void)_handleConnectivityChanged:(id)arg1 ;
-(void)_identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteSiriHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)addControlTargetUUIDs:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(BOOL)arg1 ;
-(void)removeControlTargetUUIDs:(id)arg1 ;
-(NSArray *)identifiersForBridgedAccessories;
-(void)resetControlTargetUUIDs;
-(void)setHomePodVariant:(unsigned long long)arg1 ;
-(unsigned long long)homePodVariant;
-(HMFPairingIdentity *)pairingIdentity;
-(void)_handlePairingIdentityUpdate:(id)arg1 ;
-(id)_accessoryInformationService;
-(id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2 ;
-(BOOL)isAdditionalSetupRequired;
-(void)queryAdvertisementInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSuspendCapable;
-(long long)associationOptions;
-(void)updateAccessoryName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleCharacteristicValueUpdated:(id)arg1 ;
-(void)_handleRenamed:(id)arg1 ;
-(void)_handlePairingStateChanged:(id)arg1 ;
-(void)_handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleAccessoryNotificationsUpdated:(id)arg1 ;
-(BOOL)_updateFromAccessory:(id)arg1 ;
-(void)_handleAccessoryFlagsChanged:(id)arg1 ;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_listPairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_auditPairingsWithCompletionHandler:(/*^block*/id)arg1 ;
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
-(void)setAssociationOptions:(long long)arg1 ;
-(void)_handleTargetControlSupportUpdatedMessage:(id)arg1 ;
-(void)_handleMultiUserSupportUpdatedMessage:(id)arg1 ;
-(void)_handleSupportsCompanionInitiatedRestartUpdatedMessage:(id)arg1 ;
-(void)_handleSupportsDiagnosticsTransferUpdateMessage:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)initiateDiagnosticsTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_readValueForCharacteristic:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(id)_findCharacteristic:(id)arg1 forService:(id)arg2 ;
-(NSString *)audioDestinationName;
-(long long)audioDestinationType;
-(BOOL)supportsAudioGroup;
-(void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)audioDestinationMediaProfiles;
-(NSString *)audioDestinationParentIdentifier;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(NSUUID *)identifier;
-(void)callCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 ;
-(id)mediaDestinationController:(id)arg1 destinationWithIdentifier:(id)arg2 ;
-(HMNetworkConfigurationProfile *)networkConfigurationProfile;
-(void)setHasOnboardedForNaturalLightingWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingIdentityWithPrivateKey:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)certificationStatus;
-(void)setCertificationStatus:(long long)arg1 ;
-(unsigned long long)transportTypes;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSArray *)cameraProfiles;
-(NSSet *)lightProfiles;
-(id)_findServiceWithUniqueIdentifier:(id)arg1 ;
-(NSDictionary *)serializedDictionaryRepresentation;
-(void)setHome:(HMHome *)arg1 ;
-(NSArray *)televisionProfiles;
-(void)setStoreID:(NSString *)arg1 ;
-(BOOL)isControllable;
-(BOOL)supportsMultiUser;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

