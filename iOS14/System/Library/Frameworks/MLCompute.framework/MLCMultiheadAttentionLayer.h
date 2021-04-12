/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCMultiheadAttentionDescriptor, NSArray;

@interface MLCMultiheadAttentionLayer : MLCLayer {

	MLCMultiheadAttentionDescriptor* _descriptor;
	NSArray* _weights;
	NSArray* _biases;
	NSArray* _attentionBiases;
	NSArray* _weightsParameters;
	NSArray* _biasesParameters;

}

@property (nonatomic,copy,readonly) MLCMultiheadAttentionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) NSArray * weights;                                       //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biases;                                        //@synthesize biases=_biases - In the implementation block
@property (nonatomic,retain,readonly) NSArray * attentionBiases;                               //@synthesize attentionBiases=_attentionBiases - In the implementation block
@property (nonatomic,retain,readonly) NSArray * weightsParameters;                             //@synthesize weightsParameters=_weightsParameters - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biasesParameters;                              //@synthesize biasesParameters=_biasesParameters - In the implementation block
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 biases:(id)arg3 attentionBiases:(id)arg4 ;
-(MLCMultiheadAttentionDescriptor *)descriptor;
-(id)description;
-(NSArray *)weights;
-(NSArray *)biases;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(void)allocateGradientsForParameters;
-(NSArray *)biasesParameters;
-(NSArray *)weightsParameters;
-(NSArray *)attentionBiases;
-(id)initWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attentionBias:(id)arg4 ;
@end

