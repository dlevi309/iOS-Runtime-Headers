/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class NSString;

@interface EspressoConvolutionWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {

	convolution_uniforms params;
	shared_ptr<Espresso::blob<unsigned char, 4> >* quantized_weights_blob;
	shared_ptr<Espresso::blob<float, 4> >* weights_blob;
	shared_ptr<Espresso::blob<unsigned short, 4> >* weights_f16_blob;
	shared_ptr<Espresso::blob<float, 1> >* biases_blob;
	shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> >* quantization_ranges;
	shared_ptr<Espresso::blob<float, 1> >* quantization_lut;
	shared_ptr<Espresso::blob<float, 1> >* scale_factor_batch_norm;
	unsigned data_type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)dataType;
-(BOOL)load;
-(BOOL)ready;
-(id)descriptor;
-(void*)weights;
-(float*)biasTerms;
-(id)initWithParams:(convolution_uniforms)arg1 ;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
@end

