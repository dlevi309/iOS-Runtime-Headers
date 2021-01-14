/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSData;

@interface PPNeuralNetwork : NSObject {

	NSData* _data;
	const char* _dataBytes;
	unsigned long long _nlayers;
	const SCD_Struct_PP16* _layers;

}

@property (nonatomic,readonly) unsigned long long inputSize; 
@property (nonatomic,readonly) unsigned long long outputSize; 
-(float*)_runOnInputs:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(id)init;
-(unsigned long long)inputSize;
-(id)initWithData:(id)arg1 ;
-(void)forInputs:(const float*)arg1 computeOutputLayer:(float*)arg2 ;
-(double)_predict:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(unsigned long long)outputSize;
-(double)predictWithDoubles:(const double*)arg1 ;
-(double)predictWithFloats:(const float*)arg1 ;
@end

