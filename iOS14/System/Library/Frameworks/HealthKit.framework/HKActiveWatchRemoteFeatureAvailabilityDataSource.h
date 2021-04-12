/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityDataSource.h>

@class NSString, NRPairedDeviceRegistry;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {

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
-(SCD_Struct_HK3)watchOSVersion;
-(id)init;
-(SCD_Struct_HK3)watchAtrialFibrillationDetectionVersion;
-(id)watchRegion;
-(NSString *)atrialFibrillationDetectionOnboardingCountryCode;
-(id)_activeWatch;
-(id)watchBuildType;
-(id)watchModelNumber;
-(SCD_Struct_HK3)_operatingSystemVersionForWatchOSVersion:(unsigned)arg1 ;
-(id)watchCompanionDevicePlatform;
-(void)setElectrocardiogramOnboardingCountryCode:(NSString *)arg1 ;
-(void)setAtrialFibrillationDetectionOnboardingCountryCode:(NSString *)arg1 ;
-(NRPairedDeviceRegistry *)pairedDeviceRegistry;
-(void)setPairedDeviceRegistry:(NRPairedDeviceRegistry *)arg1 ;
-(id)watchProductType;
-(SCD_Struct_HK3)watchElectrocardiogramVersion;
-(id)watchOSBuildVersion;
-(NSString *)electrocardiogramOnboardingCountryCode;
@end

