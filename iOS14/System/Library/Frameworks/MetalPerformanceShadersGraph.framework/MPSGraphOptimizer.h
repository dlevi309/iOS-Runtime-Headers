/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/


@class MPSGraph, MPSGraphTensor, NSArray, NSDictionary, NSString;

@interface MPSGraphOptimizer : NSObject {

	MPSGraph* _graph;
	MPSGraphTensor* _learningRateTensor;
	NSArray* _trainableVariables;
	NSDictionary* _variablesToGradientTensorMap;
	NSDictionary* _variablesToUpdateOpMap;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * updateOperations; 
@property (nonatomic,readonly) NSDictionary * variablesToGradientTensorMap;              //@synthesize variablesToGradientTensorMap=_variablesToGradientTensorMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * variablesToUpdateOpMap;                    //@synthesize variablesToUpdateOpMap=_variablesToUpdateOpMap - In the implementation block
-(id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 variablesToGradientTensorMap:(id)arg4 name:(id)arg5 ;
-(id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 trainableVariables:(id)arg4 name:(id)arg5 ;
-(NSArray *)updateOperations;
-(NSDictionary *)variablesToGradientTensorMap;
-(NSDictionary *)variablesToUpdateOpMap;
@end

