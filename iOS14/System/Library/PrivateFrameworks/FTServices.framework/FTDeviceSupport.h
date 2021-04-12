/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientPNRDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSString, CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSString* _number;
	BOOL _blockPost;
	BOOL _supportsFrontCamera;
	BOOL _supportsBackCamera;
	BOOL _supportsiMessage;
	BOOL _supportsSMS;
	BOOL _supportsMMS;
	BOOL _mmsConfigured;
	long long _supportsApplePayState;
	long long _supportsManateeForAppleCash;
	long long _supportsRegionForAppleCash;
	long long _supportsFMDV2State;
	long long _supportsKeySharingState;
	long long _supportsHarmonyState;
	BOOL _supportsHandoff;
	BOOL _supportsTethering;
	BOOL _supportsFT;
	BOOL _supportsFTA;
	BOOL _supportsFTMW;
	BOOL _supportsWiFi;
	BOOL _supportsWLAN;
	BOOL _supportsNonWiFiFaceTime;
	BOOL _supportsCellularData;
	BOOL _simBecameNotReady;
	long long _simInserted;
	long long _isPNRSupportedCachedValue;
	BOOL _faceTimeBlocked;
	BOOL _iMessageBlocked;
	BOOL _accountModificationRestricted;
	BOOL _isGreenTea;
	long long _performanceClass;
	CoreTelephonyClient* _coreTelephonyClient;
	FTSelectedPNRSubscription* _selectedPNRSubscription;
	BOOL _commCenterDead;

}

@property (nonatomic,readonly) BOOL isTelephonyDevice; 
@property (nonatomic,readonly) BOOL faceTimeAvailable; 
@property (nonatomic,readonly) BOOL faceTimeBlocked; 
@property (nonatomic,readonly) BOOL faceTimeSupported; 
@property (nonatomic,readonly) BOOL callingAvailable; 
@property (nonatomic,readonly) BOOL callingBlocked; 
@property (nonatomic,readonly) BOOL callingSupported; 
@property (nonatomic,readonly) BOOL multiwayAvailable; 
@property (nonatomic,readonly) BOOL multiwayBlocked; 
@property (nonatomic,readonly) BOOL multiwaySupported; 
@property (nonatomic,readonly) BOOL nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) BOOL nonWifiCallingAvailable; 
@property (nonatomic,readonly) BOOL iMessageAvailable; 
@property (nonatomic,readonly) BOOL iMessageBlocked; 
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL identityServicesSupported; 
@property (nonatomic,readonly) BOOL madridAvailable; 
@property (nonatomic,readonly) BOOL madridBlocked; 
@property (nonatomic,readonly) BOOL madridSupported; 
@property (nonatomic,readonly) BOOL conferencingEnabled; 
@property (nonatomic,readonly) BOOL conferencingBlocked; 
@property (nonatomic,readonly) BOOL conferencingAllowed; 
@property (nonatomic,readonly) BOOL commCenterDead;                                        //@synthesize commCenterDead=_commCenterDead - In the implementation block
@property (nonatomic,readonly) BOOL accountModificationRestricted; 
@property (nonatomic,readonly) BOOL isInMultiUserMode; 
@property (nonatomic,readonly) BOOL wantsBreakBeforeMake; 
@property (nonatomic,readonly) BOOL isC2KEquipment; 
@property (nonatomic,readonly) BOOL supportsHDRdecoding; 
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) BOOL supportsAppleIDIdentification; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsManateeForAppleCash; 
@property (nonatomic,readonly) BOOL supportsRegionForAppleCash; 
@property (nonatomic,readonly) BOOL supportsFMDV2; 
@property (nonatomic,readonly) BOOL supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) BOOL supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) BOOL supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsKeySharing; 
@property (nonatomic,readonly) BOOL supportsHarmony; 
@property (nonatomic,readonly) BOOL mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) BOOL supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsFunCam; 
@property (nonatomic,readonly) BOOL supportsAnimojiV2; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isGreenTea;                                            //@synthesize isGreenTea=_isGreenTea - In the implementation block
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * deviceRegionInfo; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * productOSVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) long long performanceClass; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) BOOL registrationSupported; 
@property (nonatomic,readonly) BOOL supportsSMSIdentification; 
@property (nonatomic,readonly) BOOL SIMInserted; 
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) BOOL lowRAMDevice; 
@property (nonatomic,readonly) BOOL slowCPUDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(BOOL)madridBlocked;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(long long)deviceType;
-(NSString *)deviceName;
-(NSString *)deviceRegionInfo;
-(NSString *)productName;
-(NSString *)model;
-(BOOL)iMessageSupported;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)supportsHEIFEncoding;
-(id)init;
-(BOOL)supportsTethering;
-(id)_serviceStatus;
-(BOOL)supportsCellularData;
-(BOOL)nonBluetoothAvailableForBundleId:(id)arg1 ;
-(BOOL)conferencingBlocked;
-(BOOL)_enoughPowerToSupportEffects;
-(NSString *)productVersion;
-(BOOL)registrationSupported;
-(BOOL)callingBlocked;
-(BOOL)supportsWLAN;
-(BOOL)supportsSMS;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)SIMInserted;
-(void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4 ;
-(NSString *)productBuildVersion;
-(BOOL)conferencingAllowed;
-(BOOL)supportsNonWiFiCalling;
-(void)_unregisterForServiceStatusNotifications;
-(BOOL)accountModificationRestricted;
-(BOOL)supportsManateeForAppleCash;
-(long long)memorySize;
-(BOOL)_legacy_supportsSMSIdentification;
-(BOOL)faceTimeAvailable;
-(BOOL)supportsKeySharing;
-(void)operatorBundleChange:(id)arg1 ;
-(NSString *)deviceTypeIDPrefix;
-(void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
-(BOOL)conferencingEnabled;
-(BOOL)callingAvailable;
-(BOOL)faceTimeSupported;
-(BOOL)callingSupported;
-(BOOL)nonWifiAvailableForBundleId:(id)arg1 ;
-(BOOL)identityServicesSupported;
-(BOOL)slowCPUDevice;
-(BOOL)isGreenTea;
-(NSDictionary *)CTNetworkInformation;
-(BOOL)multiwaySupported;
-(id)registrationState;
-(void)_registerForManagedConfigurationNotifications;
-(NSString *)deviceInformationString;
-(void)_handlePotentialPhoneNumberRegistrationStateChanged;
-(void)_unregisterForManagedConfigurationNotifications;
-(NSString *)deviceColor;
-(BOOL)lowRAMDevice;
-(void)_handleSIMStatusChangedToStatus:(id)arg1 ;
-(void)_commCenterAlive;
-(void)_initializeSIMInsertedCachedValue;
-(BOOL)nonWifiFaceTimeAvailable;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(void)_registerForInternalCoreTelephonyNotifications;
-(BOOL)supportsHDRdecoding;
-(BOOL)isC2KEquipment;
-(BOOL)isInMultiUserMode;
-(BOOL)supportsAppleIDIdentification;
-(BOOL)supportsSimultaneousVoiceAndDataRightNow;
-(int)cpuFamily;
-(NSDictionary *)telephonyCapabilities;
-(BOOL)supportsSMSIdentification;
-(BOOL)nonWifiCallingAvailable;
-(void)_registerForCarrierNotifications;
-(BOOL)supportsMMS;
-(NSString *)userAgentString;
-(void)_registerForServiceStatusNotifications;
-(long long)performanceClass;
-(BOOL)multiwayBlocked;
-(BOOL)isInDualPhoneIdentityMode;
-(void)_registerForCapabilityNotifications;
-(BOOL)supportsFMDV2;
-(BOOL)supportsHandoff;
-(BOOL)supportsWiFi;
-(void)_handleCarrierSettingsChanged;
-(BOOL)commCenterDead;
-(void)_registerForCommCenterReadyNotifications;
-(BOOL)madridSupported;
-(BOOL)faceTimeBlocked;
-(void)_unregisterForCommCenterReadyNotifications;
-(void)_updateManagedConfigurationSettings;
-(BOOL)multiwayAvailable;
-(BOOL)mmsConfigured;
-(BOOL)wantsBreakBeforeMake;
-(void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
-(BOOL)supportsRegionForAppleCash;
-(NSString *)enclosureColor;
-(BOOL)supportsNonWiFiFaceTime;
-(NSString *)telephoneNumber;
-(BOOL)supportsFrontFacingCamera;
-(BOOL)inProcess_isCallingSupported;
-(void)_lockdownStateChanged:(id)arg1 ;
-(BOOL)isTelephonyDevice;
-(NSString *)deviceIDPrefix;
-(BOOL)supportsApplePay;
-(NSString *)productOSVersion;
-(BOOL)madridAvailable;
-(BOOL)supportsHarmony;
-(void)_updateCapabilities;
-(BOOL)supportsBackFacingCamera;
-(BOOL)iMessageBlocked;
-(BOOL)supportsAnimojiV2;
-(BOOL)supportsFunCam;
-(void)dealloc;
-(BOOL)iMessageAvailable;
-(void)_registerForLockdownNotifications;
@end

