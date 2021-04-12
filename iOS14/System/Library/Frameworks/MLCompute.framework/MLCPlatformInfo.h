/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@interface MLCPlatformInfo : NSObject
+(id)osVersion;
+(id)bootArgs;
+(long long)randomSeed;
+(BOOL)isInternalBuild;
+(id)buildVersion;
+(BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)arg1 ;
+(BOOL)gpuUsageUnsupported;
+(id)seedEnvVariable;
+(BOOL)multiGPUUsageUnsupported;
+(BOOL)aneUsageUnsupported;
+(BOOL)isRNGSeeded;
+(int)getMinGpuSocVersionForMicroBenchmark;
@end

