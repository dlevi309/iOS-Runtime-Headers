/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationRandomUniform : MPSNDArrayInitialization {

	float _minimum;
	float _maximum;

}

@property (nonatomic,readonly) float minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) float maximum;              //@synthesize maximum=_maximum - In the implementation block
-(float)maximum;
-(float)minimum;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 minimum:(float)arg2 maximum:(float)arg3 seed:(unsigned long long)arg4 ;
@end

