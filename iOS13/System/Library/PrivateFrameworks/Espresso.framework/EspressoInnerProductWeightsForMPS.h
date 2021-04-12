/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class NSString;

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {

	inner_product_uniforms params;
	shared_ptr<Espresso::blob<float, 2> >* weights_blob;
	shared_ptr<Espresso::blob<unsigned short, 2> >* weights_f16_blob;
	shared_ptr<Espresso::blob<unsigned char, 2> >* quantized_weights_blob;
	shared_ptr<Espresso::blob<float, 1> >* biases_blob;
	shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> >* quantization_ranges;
	shared_ptr<Espresso::blob<float, 1> >* quantization_lut;
	unsigned data_type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)dataType;
-(void*)weights;
-(id)descriptor;
-(float*)biasTerms;
-(void)purge;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(BOOL)ready;
-(id)initWithParams:(inner_product_uniforms)arg1 ;
@end

