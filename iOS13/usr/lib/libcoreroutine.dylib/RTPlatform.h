/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)productType;
-(id)deviceClass;
-(id)buildVersion;
-(BOOL)internalInstall;
-(BOOL)paired;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)usesTSCForClustering;
-(BOOL)lowEndHardware;
-(unsigned long long)deviceMemorySize;
-(BOOL)iPhoneDevice;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsScenarioTriggers;
@end

