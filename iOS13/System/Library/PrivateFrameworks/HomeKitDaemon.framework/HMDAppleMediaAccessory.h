/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaAccessory.h>
#import <libobjc.A.dylib/HMDDeviceControllerDelegate.h>
#import <libobjc.A.dylib/HMDAccessoryUserManagement.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDDevice, HMDDeviceController, HMFPairingIdentity, HMDAccessorySettingGroup, HMDRemoteLoginHandler, HMDAccessorySymptomHandler, HMFSoftwareVersion, HMDSoftwareUpdate, HMFWiFiNetworkInfo, HMDTargetControlManager, NSArray, NSString;

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDDeviceControllerDelegate, HMDAccessoryUserManagement, HMFLogging> {

	HMDDevice* _device;
	HMDDeviceController* _deviceController;
	BOOL _deviceReachable;
	BOOL _fixedPairingIdentityInCloud;
	HMFPairingIdentity* _pairingIdentity;
	HMDAccessorySettingGroup* _rootSettings;
	HMDRemoteLoginHandler* _remoteLoginHandler;
	HMDAccessorySymptomHandler* _symptomsHandler;
	HMFSoftwareVersion* _softwareVersion;
	HMDSoftwareUpdate* _softwareUpdate;
	HMFWiFiNetworkInfo* _wifiNetworkInfo;
	HMDTargetControlManager* _targetControlManager;
	NSArray* _supportedMultiUserLanguageCodes;
	HMFPairingIdentity* _lastCreatedPairingIdentity;
	/*^block*/id _settingsConnectionFactory;

}

@property (nonatomic,retain) HMDTargetControlManager * targetControlManager;               //@synthesize targetControlManager=_targetControlManager - In the implementation block
@property (assign,nonatomic) BOOL fixedPairingIdentityInCloud;                             //@synthesize fixedPairingIdentityInCloud=_fixedPairingIdentityInCloud - In the implementation block
@property (nonatomic,retain) HMFPairingIdentity * lastCreatedPairingIdentity;              //@synthesize lastCreatedPairingIdentity=_lastCreatedPairingIdentity - In the implementation block
@property (retain) NSArray * supportedMultiUserLanguageCodes;                              //@synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes - In the implementation block
@property (copy) id settingsConnectionFactory;                                             //@synthesize settingsConnectionFactory=_settingsConnectionFactory - In the implementation block
@property (readonly) HMDDevice * device; 
@property (readonly) HMDAccessorySettingGroup * rootSettings;                              //@synthesize rootSettings=_rootSettings - In the implementation block
@property (copy,readonly) HMFPairingIdentity * pairingIdentity;                            //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) HMDRemoteLoginHandler * remoteLoginHandler;                           //@synthesize remoteLoginHandler=_remoteLoginHandler - In the implementation block
@property (readonly) HMDAccessorySymptomHandler * symptomsHandler;                         //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (assign,getter=isDeviceReachable,nonatomic) BOOL deviceReachable;                //@synthesize deviceReachable=_deviceReachable - In the implementation block
@property (readonly) HMFSoftwareVersion * softwareVersion;                                 //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (readonly) HMDSoftwareUpdate * softwareUpdate;                                   //@synthesize softwareUpdate=_softwareUpdate - In the implementation block
@property (readonly) HMFWiFiNetworkInfo * wifiNetworkInfo;                                 //@synthesize wifiNetworkInfo=_wifiNetworkInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsUserManagement; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)__deviceMediaRouteIdentifier;
+(BOOL)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDDevice *)device;
-(HMDAccessorySettingGroup *)rootSettings;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(HMFSoftwareVersion *)softwareVersion;
-(HMDRemoteLoginHandler *)remoteLoginHandler;
-(id)dumpState;
-(HMDAccessorySymptomHandler *)symptomsHandler;
-(BOOL)supportsTargetControl;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCurrentAccessory;
-(long long)reachableTransports;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(HMFWiFiNetworkInfo *)wifiNetworkInfo;
-(void)setWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg1 ;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCompanionInitiatedRestart;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(void)_registerForMessages;
-(id)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 ;
-(id)runtimeState;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(HMDSoftwareUpdate *)softwareUpdate;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)autoConfigureTargetControllers;
-(BOOL)supportsUserManagement;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assistantObject;
-(BOOL)isRemotelyReachable;
-(void)_handleUpdatedName:(id)arg1 ;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg1 ;
-(void)populateModelObject:(id)arg1 version:(long long)arg2 ;
-(BOOL)requiresHomeAppForManagement;
-(BOOL)supportsMediaContentProfile;
-(BOOL)supportsPersonalRequests;
-(id)dumpSimpleState;
-(void)handleDeviceIsReachable:(id)arg1 ;
-(void)handleDeviceIsNotReachable:(id)arg1 ;
-(id)deviceMonitor;
-(BOOL)isDeviceReachable;
-(id)_createMediaProfile;
-(void)handleCurrentDeviceUpdated:(id)arg1 ;
-(void)updateRootGroup:(id)arg1 ;
-(HMDTargetControlManager *)targetControlManager;
-(void)setTargetControlManager:(HMDTargetControlManager *)arg1 ;
-(void)handleDeleteSiriHistoryRequest:(id)arg1 ;
-(void)_fetchAvailableUpdate:(id)arg1 ;
-(void)_startUpdate:(id)arg1 ;
-(BOOL)shouldUpdateWithDevice:(id)arg1 ;
-(void)updateWithDevice:(id)arg1 ;
-(void)createPairingIdentity;
-(void)_fixCloudKeyIfNeeded;
-(void)_updateSoftwareVersion:(id)arg1 ;
-(BOOL)supportsSettings;
-(void)addRootSettings;
-(void)handleCurrentNetworkChangedNotification:(id)arg1 ;
-(void)updateWiFiNetworkInfo;
-(void)_fetchMultiUserLanguages;
-(void)startMonitoringReachability;
-(void)setSupportedMultiUserLanguageCodes:(NSArray *)arg1 ;
-(BOOL)fixedPairingIdentityInCloud;
-(void)setDeviceReachable:(BOOL)arg1 ;
-(void)setLastCreatedPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(HMFPairingIdentity *)lastCreatedPairingIdentity;
-(void)_relayRequestMessage:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)settingsConnectionFactory;
-(id)remoteMessageDestination;
-(void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2 ;
-(void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2 ;
-(void)setRootSettings:(HMDAccessorySettingGroup *)arg1 ;
-(void)setSoftwareUpdate:(HMDSoftwareUpdate *)arg1 ;
-(BOOL)supportsSoftwareUpdate;
-(void)deviceController:(id)arg1 didUpdateDevice:(id)arg2 ;
-(void)reconfigureOnMediaSystemDisolve;
-(void)updateSoftwareUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)supportedMultiUserLanguageCodes;
-(void)setFixedPairingIdentityInCloud:(BOOL)arg1 ;
-(void)setSettingsConnectionFactory:(id)arg1 ;
@end

