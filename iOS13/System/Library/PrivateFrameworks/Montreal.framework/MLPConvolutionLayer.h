/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPConvolutionBase.h>

@class MLPModelConvolutionDataSource;

@interface MLPConvolutionLayer : MLPConvolutionBase {

	MLPModelConvolutionDataSource* _dataSource;
	const void* _initialWeights;
	const void* _initialBias;

}

@property (retain) MLPModelConvolutionDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) const void* initialWeights;                              //@synthesize initialWeights=_initialWeights - In the implementation block
@property (assign) const void* initialBias;                                 //@synthesize initialBias=_initialBias - In the implementation block
-(MLPModelConvolutionDataSource *)dataSource;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(void)createKernel;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
-(void)setInitialWeights:(const void*)arg1 ;
-(const void*)initialWeights;
-(void)updatePrimaryCurrentState:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 neuronType:(int)arg8 neuronParams:(id)arg9 ;
-(void)setInitialBias:(const void*)arg1 ;
-(const void*)initialBias;
-(void)setDataSource:(MLPModelConvolutionDataSource *)arg1 ;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 outputChannels:(unsigned long long)arg6 neuronType:(int)arg7 neuronParams:(id)arg8 ;
@end

