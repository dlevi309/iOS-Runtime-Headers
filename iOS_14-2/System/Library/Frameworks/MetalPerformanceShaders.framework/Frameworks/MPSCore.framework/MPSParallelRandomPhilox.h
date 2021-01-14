/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;
@interface MPSParallelRandomPhilox : MPSParallelRandom {

	id<MTLBuffer> _counters;
	float _bernoulliParameter;
	float _uniformMin;
	float _uniformMax;
	float _normalMean;
	float _normalStandardDeviation;
	unsigned long long _seed;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 stride:(unsigned)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(void)dealloc;
@end

