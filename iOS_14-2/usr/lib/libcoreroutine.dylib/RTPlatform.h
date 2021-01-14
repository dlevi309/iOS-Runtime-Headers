/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentPlatform;
+(BOOL)version:(SCD_Struct_RT5)arg1 equalToVersion:(SCD_Struct_RT5)arg2 ;
+(BOOL)version:(SCD_Struct_RT5)arg1 noGreaterThanVersion:(SCD_Struct_RT5)arg2 ;
+(BOOL)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT5)arg1 ;
+(BOOL)operatingSystemAtLeastVersion:(SCD_Struct_RT5)arg1 ;
+(BOOL)version:(SCD_Struct_RT5)arg1 atLeastVersion:(SCD_Struct_RT5)arg2 ;
+(SCD_Struct_RT5)operatingSystemVersionFromString:(id)arg1 ;
-(id)systemVersion;
-(id)serialNumber;
-(BOOL)paired;
-(id)productType;
-(id)deviceClass;
-(BOOL)iPhonePlatform;
-(BOOL)isTinkerPaired;
-(BOOL)simulatorPlatform;
-(BOOL)watchPlatform;
-(BOOL)supportsScenarioTriggers;
-(BOOL)supportsCoreRoutineCapability;
-(id)buildVersion;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)macOSPlatform;
-(BOOL)iPhoneDevice;
-(BOOL)internalInstall;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsMultiUser;
-(BOOL)lowEndHardware;
-(BOOL)usesTSCForClustering;
-(unsigned long long)deviceMemorySize;
@end

