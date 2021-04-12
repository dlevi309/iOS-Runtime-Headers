/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPLayer.h>

@class NSMutableDictionary, NSArray;

@interface MLPImageLayer : MLPLayer {

	NSMutableDictionary* _inputImagesToSecondKernel;
	NSMutableDictionary* _inputImagesToFirstKernel;
	NSMutableDictionary* _primaryCurrentStates;
	NSMutableDictionary* _secondaryCurrentStates;

}

@property (readonly) NSArray * inputToSecondKernel; 
@property (readonly) NSArray * inputToFirstKernel; 
@property (readonly) NSArray * primaryCurrentState; 
@property (readonly) NSArray * secondaryCurrentState; 
@property (readonly) NSMutableDictionary * inputImagesToSecondKernel;              //@synthesize inputImagesToSecondKernel=_inputImagesToSecondKernel - In the implementation block
@property (readonly) NSMutableDictionary * inputImagesToFirstKernel;               //@synthesize inputImagesToFirstKernel=_inputImagesToFirstKernel - In the implementation block
@property (readonly) NSMutableDictionary * primaryCurrentStates;                   //@synthesize primaryCurrentStates=_primaryCurrentStates - In the implementation block
@property (readonly) NSMutableDictionary * secondaryCurrentStates;                 //@synthesize secondaryCurrentStates=_secondaryCurrentStates - In the implementation block
-(id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(void)allocateInputDictionaries;
-(id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(SCD_Struct_Mo4*)arg3 ;
-(void)updateInputToFirstKernel:(id)arg1 inference:(BOOL)arg2 ;
-(void)updatePrimaryCurrentState:(id)arg1 inference:(BOOL)arg2 ;
-(NSArray *)inputToFirstKernel;
-(NSArray *)primaryCurrentState;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 params:(SCD_Struct_Mo4*)arg4 ;
-(void)updateInputToFirstKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(void)updatePrimaryCurrentState:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(NSMutableDictionary *)inputImagesToFirstKernel;
-(NSMutableDictionary *)primaryCurrentStates;
-(void)updateInputToSecondKernel:(id)arg1 inference:(BOOL)arg2 ;
-(void)updateSecondaryCurrentState:(id)arg1 inference:(BOOL)arg2 ;
-(NSArray *)inputToSecondKernel;
-(NSArray *)secondaryCurrentState;
-(NSMutableDictionary *)inputImagesToSecondKernel;
-(NSMutableDictionary *)secondaryCurrentStates;
-(void)updateInputToSecondKernel:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(void)updateSecondaryCurrentState:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
@end

