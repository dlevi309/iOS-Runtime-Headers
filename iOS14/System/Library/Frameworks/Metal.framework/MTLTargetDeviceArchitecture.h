/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface MTLTargetDeviceArchitecture : NSObject {

	unsigned _cpuType;
	unsigned _subType;
	unsigned long long _driverVersion;

}

@property (assign,nonatomic) unsigned cpuType;                              //@synthesize cpuType=_cpuType - In the implementation block
@property (assign,nonatomic) unsigned subType;                              //@synthesize subType=_subType - In the implementation block
@property (assign,nonatomic) unsigned long long driverVersion;              //@synthesize driverVersion=_driverVersion - In the implementation block
-(unsigned)subType;
-(void)setCpuType:(unsigned)arg1 ;
-(unsigned)cpuType;
-(unsigned long long)driverVersion;
-(void)setDriverVersion:(unsigned long long)arg1 ;
-(void)setSubType:(unsigned)arg1 ;
@end

