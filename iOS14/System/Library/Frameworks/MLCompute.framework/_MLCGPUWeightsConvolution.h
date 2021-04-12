/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MLCTensor, MPSCNNConvolutionDescriptor, MLCConvolutionDescriptor, MLCActivationDescriptor, NSString;

@interface _MLCGPUWeightsConvolution : NSObject <NSCopying, MPSCNNConvolutionDataSource> {

	MLCTensor* _weight;
	MLCTensor* _localWeight;
	MLCTensor* _localBiasTerm;
	MPSCNNConvolutionDescriptor* _descMPS;
	MLCConvolutionDescriptor* _desc;
	MLCActivationDescriptor* _neuronDesc;
	MLCTensor* _biasTerm;

}

@property (nonatomic,readonly) MPSCNNConvolutionDescriptor * descMPS;              //@synthesize descMPS=_descMPS - In the implementation block
@property (nonatomic,readonly) MLCConvolutionDescriptor * desc;                    //@synthesize desc=_desc - In the implementation block
@property (nonatomic,readonly) MLCActivationDescriptor * neuronDesc;               //@synthesize neuronDesc=_neuronDesc - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * biasTerm;                        //@synthesize biasTerm=_biasTerm - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * weight;                          //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) MLCTensor * localWeight;                              //@synthesize localWeight=_localWeight - In the implementation block
@property (nonatomic,retain) MLCTensor * localBiasTerm;                            //@synthesize localBiasTerm=_localBiasTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4 ;
+(id)weightWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 ;
-(unsigned)dataType;
-(BOOL)load;
-(MLCConvolutionDescriptor *)desc;
-(MLCTensor *)weight;
-(id)descriptor;
-(NSString *)description;
-(void*)weights;
-(float*)biasTerms;
-(unsigned)kernelWeightsDataType;
-(unsigned)weightsLayout;
-(MPSCNNConvolutionDescriptor *)descMPS;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)purge;
-(id)initWithDescriptor:(id)arg1 biasTerms:(id)arg2 weights:(id)arg3 neuronDescriptor:(id)arg4 ;
-(MLCTensor *)biasTerm;
-(MLCActivationDescriptor *)neuronDesc;
-(MLCTensor *)localWeight;
-(void)setLocalWeight:(MLCTensor *)arg1 ;
-(MLCTensor *)localBiasTerm;
-(void)setLocalBiasTerm:(MLCTensor *)arg1 ;
@end

