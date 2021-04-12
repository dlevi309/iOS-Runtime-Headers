/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <libobjc.A.dylib/HKRPWatchAppInstallabilityDataSource.h>

@class NSString, NSUserDefaults, HKRPOxygenSaturationAvailability, HKRPOxygenSaturationOnboardingCache, NRDevice;

@interface _HKRPWatchAppInstallabilityDataSource : NSObject <HKRPWatchAppInstallabilityDataSource> {

	NSUserDefaults* _userDefaults;
	HKRPOxygenSaturationAvailability* _availability;
	HKRPOxygenSaturationOnboardingCache* _onboardingCache;
	NRDevice* _device;

}

@property (getter=isBloodOxygenSaturationEnabled,nonatomic,readonly) BOOL bloodOxygenSaturationEnabled; 
@property (getter=isRunningStoreDemoMode,nonatomic,readonly) BOOL runningStoreDemoMode; 
@property (getter=isDeviceSupported,nonatomic,readonly) BOOL deviceSupported; 
@property (nonatomic,readonly) BOOL shouldForceAppInstall; 
@property (nonatomic,readonly) BOOL hasCompletedOnboarding; 
@property (nonatomic,copy,readonly) NSString * selectedCountry; 
@property (getter=isTinkerModeEnabled,nonatomic,readonly) BOOL tinkerModeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(BOOL)isDeviceSupported;
-(BOOL)isRunningStoreDemoMode;
-(BOOL)isBloodOxygenSaturationEnabled;
-(BOOL)isTinkerModeEnabled;
-(BOOL)shouldForceAppInstall;
-(BOOL)hasCompletedOnboarding;
-(NSString *)selectedCountry;
@end

