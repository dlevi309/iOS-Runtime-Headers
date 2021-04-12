/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCLayer.h>

@class MLCEmbeddingDescriptor, MLCTensor, MLCTensorParameter;

@interface MLCEmbeddingLayer : MLCLayer {

	MLCEmbeddingDescriptor* _descriptor;
	MLCTensor* _weights;
	MLCTensorParameter* _weightsParameter;

}

@property (nonatomic,copy,readonly) MLCEmbeddingDescriptor * descriptor;                  //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * weights;                                //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorParameter * weightsParameter;              //@synthesize weightsParameter=_weightsParameter - In the implementation block
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 ;
+(BOOL)supportsDataType:(int)arg1 onDevice:(id)arg2 ;
-(MLCEmbeddingDescriptor *)descriptor;
-(id)description;
-(MLCTensor *)weights;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(id)resultTensorFromSources:(id)arg1 ;
-(MLCTensorParameter *)weightsParameter;
-(void)allocateGradientsForParameters;
-(id)initWithDescriptor:(id)arg1 weight:(id)arg2 ;
@end

