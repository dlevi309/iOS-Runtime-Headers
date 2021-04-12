/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationGlorotUniform : MPSNDArrayInitialization {

	unsigned long long _FanIn;
	unsigned long long _FanOut;

}

@property (assign,nonatomic) unsigned long long FanIn;               //@synthesize FanIn=_FanIn - In the implementation block
@property (assign,nonatomic) unsigned long long FanOut;              //@synthesize FanOut=_FanOut - In the implementation block
-(unsigned long long)FanIn;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)FanOut;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationArray:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 seed:(unsigned long long)arg2 ;
-(void)setFanIn:(unsigned long long)arg1 ;
-(void)setFanOut:(unsigned long long)arg1 ;
@end

