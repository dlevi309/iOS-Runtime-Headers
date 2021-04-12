/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityDataSource.h>

@class NSString, NRPairedDeviceRegistry;

@interface HKActiveWatchFeatureAvailabilityDataSource : NSObject <HKFeatureAvailabilityDataSource> {

	NSString* _electrocardiogramOnboardingCountryCode;
	NSString* _atrialFibrillationDetectionOnboardingCountryCode;
	NRPairedDeviceRegistry* _pairedDeviceRegistry;

}

@property (nonatomic,retain) NRPairedDeviceRegistry * pairedDeviceRegistry;                          //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (nonatomic,copy) NSString * electrocardiogramOnboardingCountryCode;                        //@synthesize electrocardiogramOnboardingCountryCode=_electrocardiogramOnboardingCountryCode - In the implementation block
@property (nonatomic,copy) NSString * atrialFibrillationDetectionOnboardingCountryCode;              //@synthesize atrialFibrillationDetectionOnboardingCountryCode=_atrialFibrillationDetectionOnboardingCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)watchProductType;
-(SCD_Struct_HK3)watchElectrocardiogramVersion;
-(id)watchOSBuildVersion;
-(NSString *)electrocardiogramOnboardingCountryCode;
-(SCD_Struct_HK3)watchOSVersion;
-(SCD_Struct_HK3)watchAtrialFibrillationDetectionVersion;
-(id)watchRegion;
-(NSString *)atrialFibrillationDetectionOnboardingCountryCode;
-(NRPairedDeviceRegistry *)pairedDeviceRegistry;
-(id)_activeWatch;
-(SCD_Struct_HK3)_operatingSystemVersionForWatchOSVersion:(unsigned)arg1 ;
-(id)watchModelNumber;
-(id)watchBuildType;
-(id)watchCompanionDevicePlatform;
-(void)setElectrocardiogramOnboardingCountryCode:(NSString *)arg1 ;
-(void)setAtrialFibrillationDetectionOnboardingCountryCode:(NSString *)arg1 ;
-(void)setPairedDeviceRegistry:(NRPairedDeviceRegistry *)arg1 ;
@end

