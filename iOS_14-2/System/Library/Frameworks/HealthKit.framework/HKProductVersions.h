/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@interface HKProductVersions : NSObject
+(id)majorVersionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)productBuildVersionForDeviceType:(long long)arg1 ;
+(id)updateVersionForMajorVersion:(id)arg1 productBuildVersion:(id)arg2 ;
+(id)_infoDictionaryForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)versionForProductWithName:(id)arg1 deviceType:(long long)arg2 error:(out id*)arg3 ;
+(id)versionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)_deviceIdentifierForProductName:(id)arg1 key:(id)arg2 error:(out id*)arg3 ;
+(id)_assembleUniqueDeviceIdentifierForDeviceType:(long long)arg1 majorVersion:(id)arg2 deviceIdentifier:(id)arg3 ;
+(SCD_Struct_HK3)semanticVersionForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)phoneElectrocardiogramRecordingUniqueDeviceIdentifier;
+(id)watchElectrocardiogramRecordingUniqueDeviceIdentifier;
+(id)uniqueDeviceIdentifierForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)dateOfManufactureForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)yearOfReleaseForProductWithName:(id)arg1 error:(out id*)arg2 ;
+(id)_productBuildVersion;
@end

