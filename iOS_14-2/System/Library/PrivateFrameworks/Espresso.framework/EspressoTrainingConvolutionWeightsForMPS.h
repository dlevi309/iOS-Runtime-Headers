/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoConvolutionWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {

	BOOL is_training;
	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(BOOL)ready;
-(void*)weights;
-(float*)biasTerms;
-(id)initWithParams:(convolution_uniforms)arg1 forMode:(BOOL)arg2 ;
-(id<MTLBuffer>)weightsBuffer;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned)weightsLayout;
@end

