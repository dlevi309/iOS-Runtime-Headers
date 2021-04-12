/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDNSOperatingSystemVersion : NSObject {

	SCD_Struct_HD6 _versionStruct;

}

@property (assign) SCD_Struct_HD6 versionStruct;              //@synthesize versionStruct=_versionStruct - In the implementation block
+(id)versionWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 ;
+(id)unknownVersion;
-(void)setVersionStruct:(SCD_Struct_HD6)arg1 ;
-(SCD_Struct_HD6)versionStruct;
@end

