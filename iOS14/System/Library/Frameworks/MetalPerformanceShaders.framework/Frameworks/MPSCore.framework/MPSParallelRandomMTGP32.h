/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;
@interface MPSParallelRandomMTGP32 : MPSParallelRandom {

	id<MTLBuffer> _state;
	id<MTLBuffer> _pShift1;
	id<MTLBuffer> _pShift2;
	id<MTLBuffer> _pMR;
	id<MTLBuffer> _pMT;
	id<MTLBuffer> _pM;
	id<MTLBuffer> _pStateIdx;
	float _bernoulliParameter;
	float _uniformMin;
	float _uniformMax;
	float _normalMean;
	float _normalStandardDeviation;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 stride:(unsigned)arg6 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4 ;
-(void)reinitializeDistributionDescriptor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 seed:(unsigned long long)arg3 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 state:(id)arg3 distributionDescriptor:(id)arg4 ;
-(void)synchronizeStateOnCommandBuffer:(id)arg1 ;
-(id)exportState;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(void)dealloc;
@end

