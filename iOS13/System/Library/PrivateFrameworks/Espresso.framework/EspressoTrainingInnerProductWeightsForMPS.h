/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoInnerProductWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS {

	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(void*)weights;
-(float*)biasTerms;
-(BOOL)ready;
-(id<MTLBuffer>)weightsBuffer;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id)initWithParams:(inner_product_uniforms)arg1 forMode:(BOOL)arg2 ;
@end

