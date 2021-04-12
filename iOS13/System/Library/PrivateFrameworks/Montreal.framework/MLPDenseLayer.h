/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPMatrixLayer.h>
#import <libobjc.A.dylib/MLPLayerOptimizerProtocol.h>

@class MPSMatrix, MPSVector, MLPOptimizer, NSString, NSArray;

@interface MLPDenseLayer : MLPMatrixLayer <MLPLayerOptimizerProtocol> {

	MPSMatrix* _weights;
	MPSVector* _biasVector;
	MLPOptimizer* _optimizerWeights;
	MLPOptimizer* _optimizerBiases;
	const void* _initialWeights;
	const void* _initialBias;

}

@property (retain) MPSMatrix * weights;                             //@synthesize weights=_weights - In the implementation block
@property (retain) MPSVector * biasVector;                          //@synthesize biasVector=_biasVector - In the implementation block
@property (retain) MLPOptimizer * optimizerWeights;                 //@synthesize optimizerWeights=_optimizerWeights - In the implementation block
@property (retain) MLPOptimizer * optimizerBiases;                  //@synthesize optimizerBiases=_optimizerBiases - In the implementation block
@property (assign) const void* initialWeights;                      //@synthesize initialWeights=_initialWeights - In the implementation block
@property (assign) const void* initialBias;                         //@synthesize initialBias=_initialBias - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * mlpOptimizers; 
-(MPSVector *)biasVector;
-(void)setBiasVector:(MPSVector *)arg1 ;
-(MPSMatrix *)weights;
-(void)setWeights:(MPSMatrix *)arg1 ;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(void)createKernel;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
-(id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3 ;
-(NSArray *)mlpOptimizers;
-(void)setInitialWeights:(const void*)arg1 ;
-(const void*)initialWeights;
-(void)setInitialBias:(const void*)arg1 ;
-(const void*)initialBias;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5 ;
-(id)initWithName:(id)arg1 numInputs:(unsigned long long)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5 ;
-(MLPOptimizer *)optimizerWeights;
-(MLPOptimizer *)optimizerBiases;
-(void)setOptimizerWeights:(MLPOptimizer *)arg1 ;
-(void)setOptimizerBiases:(MLPOptimizer *)arg1 ;
-(id)forward:(id)arg1 inputMatrix:(id)arg2 index:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 index:(id)arg2 inputGradientMatrix:(id)arg3 ;
@end

