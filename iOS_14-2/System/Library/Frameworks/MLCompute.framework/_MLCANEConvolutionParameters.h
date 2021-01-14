/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSDictionary;

@interface _MLCANEConvolutionParameters : NSObject {

	NSDictionary* _convolutionParams;
	NSDictionary* _biasParams;
	NSDictionary* _neuronParams;

}

@property (nonatomic,retain,readonly) NSDictionary * convolutionParams;              //@synthesize convolutionParams=_convolutionParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * biasParams;                     //@synthesize biasParams=_biasParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * neuronParams;                   //@synthesize neuronParams=_neuronParams - In the implementation block
+(id)convolutionUnitParametersWith:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
-(NSDictionary *)neuronParams;
-(NSDictionary *)convolutionParams;
-(NSDictionary *)biasParams;
-(id)initWithConvolutionParams:(id)arg1 biasParams:(id)arg2 neuronParams:(id)arg3 ;
@end

