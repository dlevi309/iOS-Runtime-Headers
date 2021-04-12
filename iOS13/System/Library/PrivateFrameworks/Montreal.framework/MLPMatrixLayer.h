/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPLayer.h>

@class NSMutableDictionary;

@interface MLPMatrixLayer : MLPLayer {

	unsigned long long _numInputs;
	unsigned long long _numOutputs;
	NSMutableDictionary* _inputMatrixToSecondKernel;
	NSMutableDictionary* _inputMatrixToFirstKernel;

}

@property (assign) unsigned long long numInputs;                                 //@synthesize numInputs=_numInputs - In the implementation block
@property (assign) unsigned long long numOutputs;                                //@synthesize numOutputs=_numOutputs - In the implementation block
@property (retain) NSMutableDictionary * inputMatrixToSecondKernel;              //@synthesize inputMatrixToSecondKernel=_inputMatrixToSecondKernel - In the implementation block
@property (retain) NSMutableDictionary * inputMatrixToFirstKernel;               //@synthesize inputMatrixToFirstKernel=_inputMatrixToFirstKernel - In the implementation block
-(id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(void)allocateInputDictionaries;
-(id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(SCD_Struct_ML0*)arg3 ;
-(void)setInputMatrixToSecondKernel:(NSMutableDictionary *)arg1 ;
-(void)setInputMatrixToFirstKernel:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)inputMatrixToFirstKernel;
-(NSMutableDictionary *)inputMatrixToSecondKernel;
-(void)updateInputMatrixToFirstKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(void)updateInputMatrixToSecondKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(unsigned long long)numInputs;
-(void)setNumInputs:(unsigned long long)arg1 ;
-(unsigned long long)numOutputs;
-(void)setNumOutputs:(unsigned long long)arg1 ;
@end

