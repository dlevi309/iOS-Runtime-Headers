/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSNumber, NSString, NSTimeZone, NSDictionary;

@interface _HKBehavior : NSObject {

	NSNumber* _overriddenSupportsCloudSync;
	NSNumber* _overriddenSupportsSwimmingWorkoutSessions;
	NSNumber* _overriddenEnableManateeForHSA2Accounts;
	NSNumber* _overriddenSupportsWorkoutSmoothing;
	HKLazyLoader<bool> _futureMigrationsEnabled;
	BOOL _isDeviceSupported;
	BOOL _isAppleInternalInstall;
	BOOL _isAppleWatch;
	BOOL _isCompanionCapable;
	BOOL _hasTelephonyCapability;
	BOOL _isRunningStoreDemoMode;
	BOOL _collectsCalorimetry;
	BOOL _collectsData;
	BOOL _performsWorkoutCondensation;
	BOOL _supportsAWDMetricSubmission;
	BOOL _supportsActivitySharing;
	BOOL _supportsAppSubscriptions;
	BOOL _supportsComputedUserCharacteristicCaching;
	BOOL _supportsFeatureAvailabilityAssets;
	BOOL _supportsHeartRateDataCollection;
	BOOL _supportsNanoSync;
	BOOL _supportsSampleExpiration;
	BOOL _supportsWorkouts;
	BOOL _supportsOntology;
	BOOL _showSensitiveLogItems;
	BOOL _unitTest_useEmbeddedOntology;
	BOOL _unitTest_useEmbeddedOntologyAsset;
	BOOL _ontologyAvailabilityRequiresAccounts;
	BOOL _ignoreOntologyAssetAvailabilityChanges;
	BOOL _ignoreOntologyVersionCheckDuringReferenceOntologyImport;
	BOOL _hasOntologyFeaturesEnabled;
	BOOL _isTestingDevice;
	BOOL _supportsWorkoutRouteSmoothing;
	BOOL _tinkerModeEnabled;
	BOOL _healthAppHidden;
	BOOL _runningInStoreDemoModeF201;
	BOOL _journalDatabaseFeatureEnabled;
	NSString* _unitTest_deviceRegionCode;
	NSString* _currentDeviceClass;

}

@property (assign,nonatomic) BOOL isDeviceSupported;                                                                   //@synthesize isDeviceSupported=_isDeviceSupported - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternalInstall;                                                              //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL isAppleWatch;                                                                        //@synthesize isAppleWatch=_isAppleWatch - In the implementation block
@property (assign,nonatomic) BOOL isCompanionCapable;                                                                  //@synthesize isCompanionCapable=_isCompanionCapable - In the implementation block
@property (assign,nonatomic) BOOL hasTelephonyCapability;                                                              //@synthesize hasTelephonyCapability=_hasTelephonyCapability - In the implementation block
@property (assign,nonatomic) BOOL isTestingDevice;                                                                     //@synthesize isTestingDevice=_isTestingDevice - In the implementation block
@property (nonatomic,copy) NSString * unitTest_deviceRegionCode;                                                       //@synthesize unitTest_deviceRegionCode=_unitTest_deviceRegionCode - In the implementation block
@property (nonatomic,copy) NSString * currentDeviceClass;                                                              //@synthesize currentDeviceClass=_currentDeviceClass - In the implementation block
@property (assign,nonatomic) BOOL collectsCalorimetry;                                                                 //@synthesize collectsCalorimetry=_collectsCalorimetry - In the implementation block
@property (assign,nonatomic) BOOL collectsData;                                                                        //@synthesize collectsData=_collectsData - In the implementation block
@property (assign,nonatomic) BOOL performsWorkoutCondensation;                                                         //@synthesize performsWorkoutCondensation=_performsWorkoutCondensation - In the implementation block
@property (assign,nonatomic) BOOL supportsAWDMetricSubmission;                                                         //@synthesize supportsAWDMetricSubmission=_supportsAWDMetricSubmission - In the implementation block
@property (assign,nonatomic) BOOL supportsActivitySharing;                                                             //@synthesize supportsActivitySharing=_supportsActivitySharing - In the implementation block
@property (assign,nonatomic) BOOL supportsAppSubscriptions;                                                            //@synthesize supportsAppSubscriptions=_supportsAppSubscriptions - In the implementation block
@property (assign,nonatomic) BOOL supportsCloudSync; 
@property (assign,nonatomic) BOOL supportsComputedUserCharacteristicCaching;                                           //@synthesize supportsComputedUserCharacteristicCaching=_supportsComputedUserCharacteristicCaching - In the implementation block
@property (assign,nonatomic) BOOL supportsHeartRateDataCollection;                                                     //@synthesize supportsHeartRateDataCollection=_supportsHeartRateDataCollection - In the implementation block
@property (assign,nonatomic) BOOL supportsNanoSync;                                                                    //@synthesize supportsNanoSync=_supportsNanoSync - In the implementation block
@property (assign,nonatomic) BOOL supportsSampleExpiration;                                                            //@synthesize supportsSampleExpiration=_supportsSampleExpiration - In the implementation block
@property (assign,nonatomic) BOOL supportsSwimmingWorkoutSessions; 
@property (assign,nonatomic) BOOL supportsWorkouts;                                                                    //@synthesize supportsWorkouts=_supportsWorkouts - In the implementation block
@property (assign,nonatomic) BOOL supportsWorkoutRouteSmoothing;                                                       //@synthesize supportsWorkoutRouteSmoothing=_supportsWorkoutRouteSmoothing - In the implementation block
@property (assign,nonatomic) BOOL tinkerModeEnabled;                                                                   //@synthesize tinkerModeEnabled=_tinkerModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL healthAppHidden;                                                                     //@synthesize healthAppHidden=_healthAppHidden - In the implementation block
@property (assign,nonatomic) BOOL showSensitiveLogItems;                                                               //@synthesize showSensitiveLogItems=_showSensitiveLogItems - In the implementation block
@property (assign,nonatomic) BOOL futureMigrationsEnabled; 
@property (assign,nonatomic) BOOL runningInStoreDemoModeF201;                                                          //@synthesize runningInStoreDemoModeF201=_runningInStoreDemoModeF201 - In the implementation block
@property (assign,nonatomic) BOOL unitTest_useEmbeddedOntology;                                                        //@synthesize unitTest_useEmbeddedOntology=_unitTest_useEmbeddedOntology - In the implementation block
@property (assign,nonatomic) BOOL unitTest_useEmbeddedOntologyAsset;                                                   //@synthesize unitTest_useEmbeddedOntologyAsset=_unitTest_useEmbeddedOntologyAsset - In the implementation block
@property (assign,nonatomic) BOOL ontologyAvailabilityRequiresAccounts;                                                //@synthesize ontologyAvailabilityRequiresAccounts=_ontologyAvailabilityRequiresAccounts - In the implementation block
@property (assign,nonatomic) BOOL ignoreOntologyAssetAvailabilityChanges;                                              //@synthesize ignoreOntologyAssetAvailabilityChanges=_ignoreOntologyAssetAvailabilityChanges - In the implementation block
@property (assign,nonatomic) BOOL ignoreOntologyVersionCheckDuringReferenceOntologyImport;                             //@synthesize ignoreOntologyVersionCheckDuringReferenceOntologyImport=_ignoreOntologyVersionCheckDuringReferenceOntologyImport - In the implementation block
@property (assign,nonatomic) BOOL hasOntologyFeaturesEnabled;                                                          //@synthesize hasOntologyFeaturesEnabled=_hasOntologyFeaturesEnabled - In the implementation block
@property (assign,nonatomic) BOOL journalDatabaseFeatureEnabled;                                                       //@synthesize journalDatabaseFeatureEnabled=_journalDatabaseFeatureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isRunningStoreDemoMode;                                                            //@synthesize isRunningStoreDemoMode=_isRunningStoreDemoMode - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentDeviceN2XA; 
@property (nonatomic,readonly) BOOL isCurrentDeviceSeries3OrOlder; 
@property (getter=isManateeEnabledForHSA2Accounts,nonatomic,readonly) BOOL manateeEnabledForHSA2Accounts; 
@property (nonatomic,readonly) BOOL supportsEED; 
@property (nonatomic,readonly) BOOL supportsFeatureAvailabilityAssets;                                                 //@synthesize supportsFeatureAvailabilityAssets=_supportsFeatureAvailabilityAssets - In the implementation block
@property (nonatomic,readonly) BOOL supportsOntology;                                                                  //@synthesize supportsOntology=_supportsOntology - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentDeviceDisplayName; 
@property (nonatomic,copy,readonly) NSString * currentDeviceName; 
@property (nonatomic,copy,readonly) NSString * currentDeviceManufacturer; 
@property (nonatomic,copy,readonly) NSString * currentDeviceRegionCode; 
@property (nonatomic,copy,readonly) NSString * currentInternalDeviceModel; 
@property (nonatomic,copy,readonly) NSString * currentDeviceProductType; 
@property (nonatomic,copy,readonly) NSString * currentOSBuild; 
@property (nonatomic,copy,readonly) NSString * currentOSName; 
@property (nonatomic,copy,readonly) NSString * currentOSVersion; 
@property (nonatomic,readonly) SCD_Struct_HK3 currentOSVersionStruct; 
@property (nonatomic,copy,readonly) NSTimeZone * localTimeZone; 
@property (nonatomic,readonly) NSDictionary * currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long totalDiskCapacity; 
@property (nonatomic,readonly) unsigned long long currentDiskSpaceAvailable; 
+(BOOL)isiPod;
+(BOOL)_isDeviceSupported;
+(void)setHasCompletedBuddyWithVersion:(long long)arg1 ;
+(BOOL)_condensesHeartRateSamples;
+(BOOL)isDeviceSupported;
+(BOOL)_tinkerModeEnabled;
+(BOOL)isAppleInternalInstall;
+(id)currentDeviceProductType;
+(id)currentDeviceReleaseType;
+(id)currentOSBuild;
+(id)currentDeviceDisplayName;
+(void)_setHasCompletedBuddyWithVersion:(long long)arg1 ;
+(void)resetSharedBehavior;
+(id)currentDeviceRegionCode;
+(BOOL)_hasTelephonyCapability;
+(BOOL)isManateeEnabledByDefault;
+(BOOL)_isProductTypeSeries3OrOlder:(id)arg1 ;
+(BOOL)activePairedWatchHasSmartFitnessCoaching;
+(BOOL)_shouldShowBuddy;
+(BOOL)_showSensitiveLogItems;
+(BOOL)shouldShowBuddy;
+(BOOL)anyPairedWatchHasFlightsClimbedCapability;
+(int)nanoSyncProtocolVersionForWatchSystemBuildVersion:(id)arg1 ;
+(BOOL)hasTelephonyCapability;
+(BOOL)hasPairedWatch;
+(BOOL)_healthAppHidden;
+(BOOL)_futureMigrationsEnabled;
+(BOOL)activePairedWatchSupportsBradycardiaDetection;
+(BOOL)allPairedWatchesSupportBradycardiaDetection;
+(id)currentDeviceManufacturer;
+(BOOL)_isForceBuddyEnabled;
+(BOOL)allPairedWatchesSupportHeartRateMotionContexts;
+(id)currentDeviceClass;
+(SCD_Struct_HK3)currentOSVersionStruct;
+(long long)_runningInStoreDemoModeFProgramNumber;
+(BOOL)runningInStoreDemoModeF201;
+(BOOL)_isAppleInternalInstall;
+(int)nanoSyncProtocolVersionForCompanionSystemBuildVersion:(id)arg1 ;
+(BOOL)_hasCompletedBuddyWithVersion:(long long)arg1 ;
+(void)setForceBuddy:(BOOL)arg1 ;
+(BOOL)hasCompletedBuddyWithVersion:(long long)arg1 ;
+(id)sharedBehavior;
+(BOOL)_runningInStoreDemoModeF201;
+(BOOL)isTestingDevice;
+(BOOL)isRunningStoreDemoMode;
+(void)setSharedBehavior:(id)arg1 ;
+(BOOL)activePairedWatchSupportsHeartRateMotionContexts;
+(id)currentOSVersion;
+(BOOL)_isRunningStoreDemoMode;
+(id)currentDeviceName;
-(BOOL)supportsComputedUserCharacteristicCaching;
-(BOOL)ignoreOntologyAssetAvailabilityChanges;
-(void)setSupportsCloudSync:(BOOL)arg1 ;
-(void)setIsCompanionCapable:(BOOL)arg1 ;
-(NSString *)currentOSName;
-(NSString *)currentInternalDeviceModel;
-(void)setSupportsSwimmingWorkoutSessions:(BOOL)arg1 ;
-(BOOL)collectsCalorimetry;
-(BOOL)supportsFeatureAvailabilityAssets;
-(id)init;
-(void)setShowSensitiveLogItems:(BOOL)arg1 ;
-(void)setIsDeviceSupported:(BOOL)arg1 ;
-(BOOL)supportsHeartRateDataCollection;
-(void)setHealthAppHidden:(BOOL)arg1 ;
-(void)setManateeEnabledForHSA2AccountsOverride:(BOOL)arg1 ;
-(BOOL)isManateeEnabledForHSA2Accounts;
-(NSDictionary *)currentDiskUsage;
-(BOOL)isDeviceSupported;
-(BOOL)isAppleInternalInstall;
-(void)setOntologyAvailabilityRequiresAccounts:(BOOL)arg1 ;
-(BOOL)isCurrentDeviceN2XA;
-(NSString *)currentDeviceProductType;
-(id)currentDeviceReleaseType;
-(NSString *)currentOSBuild;
-(NSString *)currentDeviceDisplayName;
-(BOOL)unitTest_useEmbeddedOntology;
-(void)setUnitTest_deviceRegionCode:(NSString *)arg1 ;
-(void)setFutureMigrationsEnabled:(BOOL)arg1 ;
-(BOOL)supportsOntology;
-(BOOL)supportsAWDMetricSubmission;
-(BOOL)unitTest_useEmbeddedOntologyAsset;
-(BOOL)collectsData;
-(BOOL)supportsEED;
-(NSTimeZone *)localTimeZone;
-(void)setHasTelephonyCapability:(BOOL)arg1 ;
-(BOOL)performsWorkoutCondensation;
-(void)setSupportsAWDMetricSubmission:(BOOL)arg1 ;
-(BOOL)ignoreOntologyVersionCheckDuringReferenceOntologyImport;
-(NSString *)currentDeviceRegionCode;
-(void)setJournalDatabaseFeatureEnabled:(BOOL)arg1 ;
-(BOOL)showSensitiveLogItems;
-(void)setSupportsActivitySharing:(BOOL)arg1 ;
-(BOOL)ontologyAvailabilityRequiresAccounts;
-(void)setUnitTest_useEmbeddedOntologyAsset:(BOOL)arg1 ;
-(void)setSupportsWorkoutRouteSmoothing:(BOOL)arg1 ;
-(BOOL)hasTelephonyCapability;
-(BOOL)healthAppHidden;
-(BOOL)isAppleWatch;
-(BOOL)supportsSampleExpiration;
-(void)setHasOntologyFeaturesEnabled:(BOOL)arg1 ;
-(unsigned long long)totalDiskCapacity;
-(BOOL)isCurrentDeviceSeries3OrOlder;
-(void)setSupportsSampleExpiration:(BOOL)arg1 ;
-(void)setIsAppleInternalInstall:(BOOL)arg1 ;
-(void)setSupportsWorkoutRouteSmoothingOverride:(BOOL)arg1 ;
-(BOOL)hasOntologyFeaturesEnabled;
-(BOOL)tinkerModeEnabled;
-(BOOL)journalDatabaseFeatureEnabled;
-(void)setPerformsWorkoutCondensation:(BOOL)arg1 ;
-(BOOL)supportsNanoSync;
-(void)setIgnoreOntologyAssetAvailabilityChanges:(BOOL)arg1 ;
-(void)setSupportsComputedUserCharacteristicCaching:(BOOL)arg1 ;
-(NSString *)currentDeviceManufacturer;
-(NSString *)currentDeviceClass;
-(void)setRunningInStoreDemoModeF201:(BOOL)arg1 ;
-(NSString *)unitTest_deviceRegionCode;
-(void)setSupportsHeartRateDataCollection:(BOOL)arg1 ;
-(BOOL)supportsActivitySharing;
-(void)setSupportsAppSubscriptions:(BOOL)arg1 ;
-(SCD_Struct_HK3)currentOSVersionStruct;
-(BOOL)supportsWorkoutRouteSmoothing;
-(void)setCurrentDeviceClass:(NSString *)arg1 ;
-(BOOL)runningInStoreDemoModeF201;
-(unsigned long long)currentDiskSpaceAvailable;
-(void)setCollectsCalorimetry:(BOOL)arg1 ;
-(void)setIsTestingDevice:(BOOL)arg1 ;
-(void)setSupportsWorkouts:(BOOL)arg1 ;
-(BOOL)_hasProductTypePrefix:(id)arg1 ;
-(BOOL)supportsCloudSync;
-(BOOL)isCompanionCapable;
-(BOOL)supportsWorkouts;
-(BOOL)futureMigrationsEnabled;
-(BOOL)isTestingDevice;
-(void)setUnitTest_useEmbeddedOntology:(BOOL)arg1 ;
-(BOOL)isRunningStoreDemoMode;
-(void)setSupportsNanoSync:(BOOL)arg1 ;
-(NSString *)currentOSVersion;
-(void)setIsAppleWatch:(BOOL)arg1 ;
-(BOOL)supportsSwimmingWorkoutSessions;
-(BOOL)supportsAppSubscriptions;
-(NSString *)currentDeviceName;
-(void)setCollectsData:(BOOL)arg1 ;
-(void)setIgnoreOntologyVersionCheckDuringReferenceOntologyImport:(BOOL)arg1 ;
-(void)setTinkerModeEnabled:(BOOL)arg1 ;
@end

