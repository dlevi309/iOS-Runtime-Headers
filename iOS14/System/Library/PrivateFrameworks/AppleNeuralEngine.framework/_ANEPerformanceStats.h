/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@class NSData;

@interface _ANEPerformanceStats : NSObject {

	unsigned long long _hwExecutionTime;
	NSData* _perfCounterData;

}

@property (nonatomic,readonly) NSData * perfCounterData;                        //@synthesize perfCounterData=_perfCounterData - In the implementation block
@property (nonatomic,readonly) unsigned long long hwExecutionTime;              //@synthesize hwExecutionTime=_hwExecutionTime - In the implementation block
+(id)new;
+(unsigned)driverMaskForANEFMask:(unsigned)arg1 ;
+(id)statsWithRequestPerformanceBuffer:(void*)arg1 statsBufferSize:(unsigned*)arg2 ;
+(id)statsWithHardwareExecutionNS:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)hwExecutionTime;
-(void)emitPerfcounterSignpostsWithModelStringID:(unsigned long long)arg1 ;
-(id)performanceCounters;
-(id)initWithHardwareExecution:(unsigned long long)arg1 perfCounterData:(id)arg2 ;
-(id)initWithRequestPerformanceBuffer:(void*)arg1 statsBufferSize:(unsigned*)arg2 ;
-(NSData *)perfCounterData;
-(id)stringForPerfCounter:(int)arg1 ;
@end

