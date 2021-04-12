/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


@protocol AXPhoenixClassifierDelegate, OS_dispatch_queue;
#import <Phoenix/Phoenix-Structs.h>
@class AXPhoenixClassifierConfiguration, MLModel, AccelerometerBuffer, PredictionsBuffer, MLMultiArray, NSArray, NSObject, NSString;

@interface AXPhoenixClassifier : NSObject {

	id<AXPhoenixClassifierDelegate> _delegate;
	AXPhoenixClassifierConfiguration* _configuration;
	MLModel* _classifier;
	AccelerometerBuffer* _accelBuffer;
	PredictionsBuffer* _predictionsBuffer;
	unsigned long long _sampleCountSinceLastTrigger;
	int _policyOption;
	MLMultiArray* _multiArray;
	unsigned long long _frameLength;
	NSArray* _shape;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _modelVersion;
	NSString* _modelDescription;
	NSString* _modelInputName;
	NSString* _modelOutputName;
	unsigned long long _loopCounter;
	double* _arrayDataPointer;
	unsigned long long _runFrequency;
	unsigned long long _minSamplesBetweenTriggers;
	BOOL _shouldResetBuffer;
	float _tapSpeed;

}
-(id)configuration;
-(void)reset;
-(id)version;
-(void)dealloc;
-(void)setPolicyOption:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 modelURL:(id)arg2 configuration:(id)arg3 ;
-(void)setTapSpeed:(float)arg1 ;
-(void)handleAccelerometerData:(SCD_Struct_Ac2)arg1 withTimestamp:(double)arg2 ;
-(void)setShouldResetBuffer;
-(id)_initializeModelFromURL:(id)arg1 outError:(id*)arg2 ;
-(unsigned long long)_computeFrameLength;
-(void)_handleAccelerometerData:(SCD_Struct_Ac2)arg1 withTimestamp:(double)arg2 ;
-(id)_multiArrayInputForClassifierWithError:(id*)arg1 ;
-(BOOL)_clippedDataShowsPrediction:(unsigned long long)arg1 ;
-(unsigned long long)_countThresholdForGesturePrediction:(SCD_Struct_Pr6)arg1 ;
-(id)_windowData:(BOOL)arg1 ;
-(id)_clippedMultiArrayInputWithError:(id*)arg1 beforeTime:(double)arg2 ;
-(id)_createMultiArrayWithError:(id*)arg1 ;
@end

