/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPImageLayer.h>

@interface MLPDropoutLayer : MLPImageLayer {

	float _dropoutRatio;

}

@property (readonly) float dropoutRatio;              //@synthesize dropoutRatio=_dropoutRatio - In the implementation block
-(void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3 ;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(void)createKernel;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
-(id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3 ;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 dropoutRatio:(float)arg4 ;
-(float)dropoutRatio;
-(id)forward:(id)arg1 input:(id)arg2 index:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 index:(id)arg2 inputGradient:(id)arg3 ;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 dropoutRatio:(float)arg3 ;
@end

