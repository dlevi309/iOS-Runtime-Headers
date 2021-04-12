/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;
@interface MPSLSTMDescriptor : MPSRNNDescriptor {

	BOOL _memoryWeightsAreDiagonal;
	BOOL _coupleForgetGateToInputGate;
	int _cellToOutputNeuronType;
	float _cellToOutputNeuronParamA;
	float _cellToOutputNeuronParamB;
	float _cellToOutputNeuronParamC;
	float _cellClipThreshold;
	id<MPSCNNConvolutionDataSource> _inputGateInputWeights;
	id<MPSCNNConvolutionDataSource> _inputGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _inputGateMemoryWeights;
	id<MPSCNNConvolutionDataSource> _forgetGateInputWeights;
	id<MPSCNNConvolutionDataSource> _forgetGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _forgetGateMemoryWeights;
	id<MPSCNNConvolutionDataSource> _outputGateInputWeights;
	id<MPSCNNConvolutionDataSource> _outputGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _outputGateMemoryWeights;
	id<MPSCNNConvolutionDataSource> _cellGateInputWeights;
	id<MPSCNNConvolutionDataSource> _cellGateRecurrentWeights;
	id<MPSCNNConvolutionDataSource> _cellGateMemoryWeights;

}

@property (assign,nonatomic) float cellClipThreshold;                                                 //@synthesize cellClipThreshold=_cellClipThreshold - In the implementation block
@property (assign,nonatomic) BOOL coupleForgetGateToInputGate;                                        //@synthesize coupleForgetGateToInputGate=_coupleForgetGateToInputGate - In the implementation block
@property (assign,nonatomic) BOOL memoryWeightsAreDiagonal;                                           //@synthesize memoryWeightsAreDiagonal=_memoryWeightsAreDiagonal - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputGateInputWeights;                   //@synthesize inputGateInputWeights=_inputGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputGateRecurrentWeights;               //@synthesize inputGateRecurrentWeights=_inputGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputGateMemoryWeights;                  //@synthesize inputGateMemoryWeights=_inputGateMemoryWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> forgetGateInputWeights;                  //@synthesize forgetGateInputWeights=_forgetGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> forgetGateRecurrentWeights;              //@synthesize forgetGateRecurrentWeights=_forgetGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> forgetGateMemoryWeights;                 //@synthesize forgetGateMemoryWeights=_forgetGateMemoryWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateInputWeights;                  //@synthesize outputGateInputWeights=_outputGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateRecurrentWeights;              //@synthesize outputGateRecurrentWeights=_outputGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> outputGateMemoryWeights;                 //@synthesize outputGateMemoryWeights=_outputGateMemoryWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> cellGateInputWeights;                    //@synthesize cellGateInputWeights=_cellGateInputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> cellGateRecurrentWeights;                //@synthesize cellGateRecurrentWeights=_cellGateRecurrentWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> cellGateMemoryWeights;                   //@synthesize cellGateMemoryWeights=_cellGateMemoryWeights - In the implementation block
@property (assign,nonatomic) int cellToOutputNeuronType;                                              //@synthesize cellToOutputNeuronType=_cellToOutputNeuronType - In the implementation block
@property (assign,nonatomic) float cellToOutputNeuronParamA;                                          //@synthesize cellToOutputNeuronParamA=_cellToOutputNeuronParamA - In the implementation block
@property (assign,nonatomic) float cellToOutputNeuronParamB;                                          //@synthesize cellToOutputNeuronParamB=_cellToOutputNeuronParamB - In the implementation block
@property (assign,nonatomic) float cellToOutputNeuronParamC;                                          //@synthesize cellToOutputNeuronParamC=_cellToOutputNeuronParamC - In the implementation block
+(id)createLSTMDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(BOOL)memoryWeightsAreDiagonal;
-(void)setMemoryWeightsAreDiagonal:(BOOL)arg1 ;
-(id<MPSCNNConvolutionDataSource>)inputGateInputWeights;
-(id<MPSCNNConvolutionDataSource>)inputGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)inputGateMemoryWeights;
-(void)setInputGateMemoryWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)forgetGateInputWeights;
-(id<MPSCNNConvolutionDataSource>)forgetGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)forgetGateMemoryWeights;
-(void)setForgetGateMemoryWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)outputGateInputWeights;
-(id<MPSCNNConvolutionDataSource>)outputGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)outputGateMemoryWeights;
-(void)setOutputGateMemoryWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)cellGateInputWeights;
-(id<MPSCNNConvolutionDataSource>)cellGateRecurrentWeights;
-(id<MPSCNNConvolutionDataSource>)cellGateMemoryWeights;
-(void)setCellGateMemoryWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(int)cellToOutputNeuronType;
-(float)cellToOutputNeuronParamA;
-(float)cellClipThreshold;
-(void)setCellToOutputNeuronParamA:(float)arg1 ;
-(float)cellToOutputNeuronParamB;
-(void)setCellToOutputNeuronParamB:(float)arg1 ;
-(float)cellToOutputNeuronParamC;
-(void)setCellToOutputNeuronParamC:(float)arg1 ;
-(void)setCellClipThreshold:(float)arg1 ;
-(BOOL)coupleForgetGateToInputGate;
-(void)setCoupleForgetGateToInputGate:(BOOL)arg1 ;
-(void)setInputGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setInputGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setForgetGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setForgetGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setCellGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setCellGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setOutputGateInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setOutputGateRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(void)setCellToOutputNeuronType:(int)arg1 ;
-(void)dealloc;
@end

