/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSNumber, NSString, NSTimeZone, NSDictionary;

@interface _HKBehavior : NSObject {

	NSNumber* _overriddenSupportsSwimmingWorkoutSessions;
	NSNumber* _overriddenEnableManateeForHSA2Accounts;
	HKLazyLoader<bool> _futureMigrationsEnabled;
	BOOL _isDeviceSupported;
	BOOL _isAppleInternalInstall;
	BOOL _isAppleWatch;
	BOOL _isCompanionCapable;
	BOOL _hasTelephonyCapability;
	BOOL _isRunningStoreDemoMode;
	BOOL _runningInStoreDemoModeF201;
	BOOL _deviceSupportsHeartRateMotionContexts;
	BOOL _collectsCalorimetry;
	BOOL _collectsData;
	BOOL _performsWorkoutCondensation;
	BOOL _supportsAWDMetricSubmission;
	BOOL _supportsActivitySharing;
	BOOL _supportsAppSubscriptions;
	BOOL _supportsFeatureAvailabilityAssets;
	BOOL _supportsHeartRateDataCollection;
	BOOL _supportsNanoSync;
	BOOL _supportsSampleExpiration;
	BOOL _supportsWorkouts;
	BOOL _showSensitiveLogItems;
	BOOL _unitTest_useEmbeddedOntology;
	BOOL _unitTest_useEmbeddedOntologyAsset;
	BOOL _ontologyAvailabilityRequiresAccounts;
	BOOL _ignoreOntologyAssetAvailabilityChanges;
	BOOL _ignoreOntologyVersionCheckDuringReferenceOntologyImport;
	BOOL _hasOntologyFeaturesEnabled;
	BOOL _isTestingDevice;
	BOOL _healthAppHidden;
	NSString* _unitTest_deviceRegionCode;

}

@property (assign,nonatomic) BOOL isDeviceSupported;                                                                   //@synthesize isDeviceSupported=_isDeviceSupported - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternalInstall;                                                              //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL isAppleWatch;                                                                        //@synthesize isAppleWatch=_isAppleWatch - In the implementation block
@property (assign,nonatomic) BOOL isCompanionCapable;                                                                  //@synthesize isCompanionCapable=_isCompanionCapable - In the implementation block
@property (assign,nonatomic) BOOL hasTelephonyCapability;                                                              //@synthesize hasTelephonyCapability=_hasTelephonyCapability - In the implementation block
@property (assign,nonatomic) BOOL isTestingDevice;                                                                     //@synthesize isTestingDevice=_isTestingDevice - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsHeartRateMotionContexts;                                               //@synthesize deviceSupportsHeartRateMotionContexts=_deviceSupportsHeartRateMotionContexts - In the implementation block
@property (nonatomic,copy) NSString * unitTest_deviceRegionCode;                                                       //@synthesize unitTest_deviceRegionCode=_unitTest_deviceRegionCode - In the implementation block
@property (assign,nonatomic) BOOL collectsCalorimetry;                                                                 //@synthesize collectsCalorimetry=_collectsCalorimetry - In the implementation block
@property (assign,nonatomic) BOOL collectsData;                                                                        //@synthesize collectsData=_collectsData - In the implementation block
@property (assign,nonatomic) BOOL performsWorkoutCondensation;                                                         //@synthesize performsWorkoutCondensation=_performsWorkoutCondensation - In the implementation block
@property (assign,nonatomic) BOOL supportsAWDMetricSubmission;                                                         //@synthesize supportsAWDMetricSubmission=_supportsAWDMetricSubmission - In the implementation block
@property (assign,nonatomic) BOOL supportsActivitySharing;                                                             //@synthesize supportsActivitySharing=_supportsActivitySharing - In the implementation block
@property (assign,nonatomic) BOOL supportsAppSubscriptions;                                                            //@synthesize supportsAppSubscriptions=_supportsAppSubscriptions - In the implementation block
@property (assign,nonatomic) BOOL supportsHeartRateDataCollection;                                                     //@synthesize supportsHeartRateDataCollection=_supportsHeartRateDataCollection - In the implementation block
@property (assign,nonatomic) BOOL supportsNanoSync;                                                                    //@synthesize supportsNanoSync=_supportsNanoSync - In the implementation block
@property (assign,nonatomic) BOOL supportsSampleExpiration;                                                            //@synthesize supportsSampleExpiration=_supportsSampleExpiration - In the implementation block
@property (assign,nonatomic) BOOL supportsSwimmingWorkoutSessions; 
@property (assign,nonatomic) BOOL supportsWorkouts;                                                                    //@synthesize supportsWorkouts=_supportsWorkouts - In the implementation block
@property (assign,nonatomic) BOOL healthAppHidden;                                                                     //@synthesize healthAppHidden=_healthAppHidden - In the implementation block
@property (assign,nonatomic) BOOL showSensitiveLogItems;                                                               //@synthesize showSensitiveLogItems=_showSensitiveLogItems - In the implementation block
@property (assign,nonatomic) BOOL futureMigrationsEnabled; 
@property (assign,nonatomic) BOOL unitTest_useEmbeddedOntology;                                                        //@synthesize unitTest_useEmbeddedOntology=_unitTest_useEmbeddedOntology - In the implementation block
@property (assign,nonatomic) BOOL unitTest_useEmbeddedOntologyAsset;                                                   //@synthesize unitTest_useEmbeddedOntologyAsset=_unitTest_useEmbeddedOntologyAsset - In the implementation block
@property (assign,nonatomic) BOOL ontologyAvailabilityRequiresAccounts;                                                //@synthesize ontologyAvailabilityRequiresAccounts=_ontologyAvailabilityRequiresAccounts - In the implementation block
@property (assign,nonatomic) BOOL ignoreOntologyAssetAvailabilityChanges;                                              //@synthesize ignoreOntologyAssetAvailabilityChanges=_ignoreOntologyAssetAvailabilityChanges - In the implementation block
@property (assign,nonatomic) BOOL ignoreOntologyVersionCheckDuringReferenceOntologyImport;                             //@synthesize ignoreOntologyVersionCheckDuringReferenceOntologyImport=_ignoreOntologyVersionCheckDuringReferenceOntologyImport - In the implementation block
@property (assign,nonatomic) BOOL hasOntologyFeaturesEnabled;                                                          //@synthesize hasOntologyFeaturesEnabled=_hasOntologyFeaturesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isRunningStoreDemoMode;                                                            //@synthesize isRunningStoreDemoMode=_isRunningStoreDemoMode - In the implementation block
@property (nonatomic,readonly) BOOL runningInStoreDemoModeF201;                                                        //@synthesize runningInStoreDemoModeF201=_runningInStoreDemoModeF201 - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentDeviceN2XA; 
@property (nonatomic,readonly) BOOL isCurrentDeviceSeries3OrOlder; 
@property (getter=isManateeEnabledForHSA2Accounts,nonatomic,readonly) BOOL manateeEnabledForHSA2Accounts; 
@property (nonatomic,readonly) BOOL supportsCloudSync; 
@property (nonatomic,readonly) BOOL supportsFeatureAvailabilityAssets;                                                 //@synthesize supportsFeatureAvailabilityAssets=_supportsFeatureAvailabilityAssets - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentDeviceDisplayName; 
@property (nonatomic,copy,readonly) NSString * currentDeviceName; 
@property (nonatomic,copy,readonly) NSString * currentDeviceManufacturer; 
@property (nonatomic,copy,readonly) NSString * currentDeviceRegionCode; 
@property (nonatomic,copy,readonly) NSString * currentInternalDeviceModel; 
@property (nonatomic,copy,readonly) NSString * currentDeviceClass; 
@property (nonatomic,copy,readonly) NSString * currentDeviceProductType; 
@property (nonatomic,copy,readonly) NSString * currentOSBuild; 
@property (nonatomic,copy,readonly) NSString * currentOSName; 
@property (nonatomic,copy,readonly) NSString * currentOSVersion; 
@property (nonatomic,readonly) SCD_Struct_HK3 currentOSVersionStruct; 
@property (nonatomic,copy,readonly) NSTimeZone * localTimeZone; 
@property (nonatomic,readonly) NSDictionary * currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long totalDiskCapacity; 
@property (nonatomic,readonly) unsigned long long currentDiskSpaceAvailable; 
+(BOOL)isAppleInternalInstall;
+(BOOL)hasTelephonyCapability;
+(BOOL)_hasTelephonyCapability;
+(BOOL)activePairedWatchSupportsBradycardiaDetection;
+(BOOL)allPairedWatchesSupportBradycardiaDetection;
+(BOOL)isDeviceSupported;
+(id)sharedBehavior;
+(id)currentDeviceName;
+(id)currentDeviceManufacturer;
+(id)currentDeviceClass;
+(id)currentDeviceProductType;
+(id)currentOSVersion;
+(id)currentDeviceDisplayName;
+(id)currentDeviceRegionCode;
+(BOOL)_isProductTypeSeries3OrOlder:(id)arg1 ;
+(BOOL)isRunningStoreDemoMode;
+(BOOL)activePairedWatchSupportsHeartRateMotionContexts;
+(BOOL)allPairedWatchesSupportHeartRateMotionContexts;
+(BOOL)_isDeviceSupported;
+(BOOL)_isAppleInternalInstall;
+(BOOL)_isRunningStoreDemoMode;
+(BOOL)_runningInStoreDemoModeF201;
+(BOOL)_deviceSupportsHeartRateMotionContexts;
+(BOOL)_showSensitiveLogItems;
+(BOOL)runningInStoreDemoModeF201;
+(BOOL)isTestingDevice;
+(BOOL)_hasCompletedBuddyWithVersion:(long long)arg1 ;
+(void)_setHasCompletedBuddyWithVersion:(long long)arg1 ;
+(BOOL)_shouldShowBuddy;
+(id)currentDeviceReleaseType;
+(id)currentOSBuild;
+(SCD_Struct_HK3)currentOSVersionStruct;
+(BOOL)_healthAppHidden;
+(BOOL)isManateeEnabledByDefault;
+(BOOL)_readEnableManateeForHSA2AccountsFromHealthdDefaults;
+(long long)_runningInStoreDemoModeFProgramNumber;
+(BOOL)_isForceBuddyEnabled;
+(BOOL)hasCompletedBuddyWithVersion:(long long)arg1 ;
+(void)setSharedBehavior:(id)arg1 ;
+(void)resetSharedBehavior;
+(int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1 ;
+(int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1 ;
+(BOOL)hasPairedWatch;
+(BOOL)anyPairedWatchHasFlightsClimbedCapability;
+(BOOL)activePairedWatchHasSmartFitnessCoaching;
+(void)setForceBuddy:(BOOL)arg1 ;
+(void)setHasCompletedBuddyWithVersion:(long long)arg1 ;
+(BOOL)shouldShowBuddy;
+(BOOL)_futureMigrationsEnabled;
+(BOOL)_condensesHeartRateSamples;
-(id)init;
-(NSTimeZone *)localTimeZone;
-(NSDictionary *)currentDiskUsage;
-(BOOL)isAppleInternalInstall;
-(BOOL)hasTelephonyCapability;
-(BOOL)isDeviceSupported;
-(BOOL)isAppleWatch;
-(NSString *)currentDeviceName;
-(NSString *)currentDeviceManufacturer;
-(NSString *)currentDeviceClass;
-(NSString *)currentDeviceProductType;
-(NSString *)currentOSVersion;
-(NSString *)currentDeviceDisplayName;
-(BOOL)_hasProductTypePrefix:(id)arg1 ;
-(NSString *)currentDeviceRegionCode;
-(BOOL)isCurrentDeviceSeries3OrOlder;
-(BOOL)supportsSwimmingWorkoutSessions;
-(BOOL)showSensitiveLogItems;
-(BOOL)isRunningStoreDemoMode;
-(BOOL)runningInStoreDemoModeF201;
-(BOOL)isTestingDevice;
-(id)currentDeviceReleaseType;
-(NSString *)currentOSBuild;
-(SCD_Struct_HK3)currentOSVersionStruct;
-(BOOL)healthAppHidden;
-(NSString *)currentInternalDeviceModel;
-(BOOL)isCurrentDeviceN2XA;
-(NSString *)currentOSName;
-(unsigned long long)totalDiskCapacity;
-(unsigned long long)currentDiskSpaceAvailable;
-(void)setSupportsSwimmingWorkoutSessions:(BOOL)arg1 ;
-(BOOL)isManateeEnabledForHSA2Accounts;
-(void)setManateeEnabledForHSA2AccountsOverride:(BOOL)arg1 ;
-(BOOL)futureMigrationsEnabled;
-(void)setFutureMigrationsEnabled:(BOOL)arg1 ;
-(BOOL)supportsCloudSync;
-(void)setIsDeviceSupported:(BOOL)arg1 ;
-(void)setIsAppleInternalInstall:(BOOL)arg1 ;
-(void)setIsAppleWatch:(BOOL)arg1 ;
-(BOOL)isCompanionCapable;
-(void)setIsCompanionCapable:(BOOL)arg1 ;
-(void)setHasTelephonyCapability:(BOOL)arg1 ;
-(BOOL)deviceSupportsHeartRateMotionContexts;
-(void)setDeviceSupportsHeartRateMotionContexts:(BOOL)arg1 ;
-(BOOL)collectsCalorimetry;
-(void)setCollectsCalorimetry:(BOOL)arg1 ;
-(BOOL)collectsData;
-(void)setCollectsData:(BOOL)arg1 ;
-(BOOL)performsWorkoutCondensation;
-(void)setPerformsWorkoutCondensation:(BOOL)arg1 ;
-(BOOL)supportsAWDMetricSubmission;
-(void)setSupportsAWDMetricSubmission:(BOOL)arg1 ;
-(BOOL)supportsActivitySharing;
-(void)setSupportsActivitySharing:(BOOL)arg1 ;
-(BOOL)supportsAppSubscriptions;
-(void)setSupportsAppSubscriptions:(BOOL)arg1 ;
-(BOOL)supportsFeatureAvailabilityAssets;
-(BOOL)supportsHeartRateDataCollection;
-(void)setSupportsHeartRateDataCollection:(BOOL)arg1 ;
-(BOOL)supportsNanoSync;
-(void)setSupportsNanoSync:(BOOL)arg1 ;
-(BOOL)supportsSampleExpiration;
-(void)setSupportsSampleExpiration:(BOOL)arg1 ;
-(BOOL)supportsWorkouts;
-(void)setSupportsWorkouts:(BOOL)arg1 ;
-(void)setShowSensitiveLogItems:(BOOL)arg1 ;
-(BOOL)unitTest_useEmbeddedOntology;
-(void)setUnitTest_useEmbeddedOntology:(BOOL)arg1 ;
-(BOOL)unitTest_useEmbeddedOntologyAsset;
-(void)setUnitTest_useEmbeddedOntologyAsset:(BOOL)arg1 ;
-(BOOL)ontologyAvailabilityRequiresAccounts;
-(void)setOntologyAvailabilityRequiresAccounts:(BOOL)arg1 ;
-(BOOL)ignoreOntologyAssetAvailabilityChanges;
-(void)setIgnoreOntologyAssetAvailabilityChanges:(BOOL)arg1 ;
-(BOOL)ignoreOntologyVersionCheckDuringReferenceOntologyImport;
-(void)setIgnoreOntologyVersionCheckDuringReferenceOntologyImport:(BOOL)arg1 ;
-(BOOL)hasOntologyFeaturesEnabled;
-(void)setHasOntologyFeaturesEnabled:(BOOL)arg1 ;
-(void)setIsTestingDevice:(BOOL)arg1 ;
-(NSString *)unitTest_deviceRegionCode;
-(void)setUnitTest_deviceRegionCode:(NSString *)arg1 ;
-(void)setHealthAppHidden:(BOOL)arg1 ;
@end

