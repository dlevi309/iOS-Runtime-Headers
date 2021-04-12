/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSData;

@interface _ATXNeuralNetwork : NSObject {

	NSData* _data;
	const char* _dataBytes;
	unsigned long long _nlayers;
	const SCD_Struct_AT18* _layers;

}

@property (nonatomic,readonly) unsigned long long inputSize; 
@property (nonatomic,readonly) unsigned long long outputSize; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)inputSize;
-(unsigned long long)outputSize;
-(double)predict:(const double*)arg1 ;
-(double)predict32:(const float*)arg1 ;
-(float*)_runOnInputs:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(double)_predict:(float*)arg1 freeInputsAfterUse:(BOOL)arg2 ;
-(void)forInputs:(const float*)arg1 computeOutputLayer:(float*)arg2 ;
@end

