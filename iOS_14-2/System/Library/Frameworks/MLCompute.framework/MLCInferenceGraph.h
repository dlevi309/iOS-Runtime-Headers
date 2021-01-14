/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCGraph.h>

@interface MLCInferenceGraph : MLCGraph {

	unsigned long long _inferenceNodeInit;
	unsigned long long _inferenceNodeIndexInGraphLayerList;
	unsigned long long _compilerOptions;

}

@property (assign,nonatomic) unsigned long long inferenceNodeInit;                               //@synthesize inferenceNodeInit=_inferenceNodeInit - In the implementation block
@property (assign,nonatomic) unsigned long long inferenceNodeIndexInGraphLayerList;              //@synthesize inferenceNodeIndexInGraphLayerList=_inferenceNodeIndexInGraphLayerList - In the implementation block
@property (assign,nonatomic) unsigned long long compilerOptions;                                 //@synthesize compilerOptions=_compilerOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceMemorySize; 
+(id)graphWithGraphObjects:(id)arg1 ;
-(BOOL)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 batchSize:(unsigned long long)arg4 options:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)executeWithInputsData:(id)arg1 batchSize:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)description;
-(BOOL)addInputs:(id)arg1 ;
-(BOOL)addOutputs:(id)arg1 ;
-(id)nodeWithLayer:(id)arg1 sources:(id)arg2 ;
-(id)nodeWithLayer:(id)arg1 source:(id)arg2 ;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 lossLabelWeights:(id)arg3 ;
-(BOOL)compileWithOptions:(unsigned long long)arg1 device:(id)arg2 ;
-(unsigned long long)deviceMemorySize;
-(id)initWithGraphObjects:(id)arg1 ;
-(unsigned long long)compilerOptions;
-(void)setCompilerOptions:(unsigned long long)arg1 ;
-(BOOL)recompile;
-(BOOL)executeWithInputsData:(id)arg1 lossLabelsData:(id)arg2 lossLabelWeightsData:(id)arg3 outputsData:(id)arg4 batchSize:(unsigned long long)arg5 options:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)addInputs:(id)arg1 lossLabels:(id)arg2 ;
-(id)resultTensorsForLayer:(id)arg1 ;
-(id)sourceTensorsForLayer:(id)arg1 ;
-(BOOL)linkWithGraphs:(id)arg1 ;
-(unsigned long long)inferenceNodeInit;
-(void)setInferenceNodeInit:(unsigned long long)arg1 ;
-(void)setInferenceNodeIndexInGraphLayerList:(unsigned long long)arg1 ;
-(unsigned long long)inferenceNodeIndexInGraphLayerList;
-(id)splitWithSource:(id)arg1 splitCount:(unsigned long long)arg2 dimension:(unsigned long long)arg3 ;
-(id)splitWithSource:(id)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3 ;
-(id)concatenateWithSources:(id)arg1 dimension:(unsigned long long)arg2 ;
-(id)reshapeWithShape:(id)arg1 source:(id)arg2 ;
-(id)transposeWithDimensions:(id)arg1 source:(id)arg2 ;
-(BOOL)executeWithInputsData:(id)arg1 outputsData:(id)arg2 batchSize:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

