/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@protocol MLPLearningRateDecayHandlerDelegate;
@interface MLPLearningRateDecayHandler : NSObject {

	BOOL _stairCase;
	float _learningRate;
	float _decayRate;
	float _decayedLearningRate;
	unsigned long long _decaySteps;
	unsigned long long _globalSteps;
	id<MLPLearningRateDecayHandlerDelegate> _delegate;

}

@property (readonly) float learningRate;                                          //@synthesize learningRate=_learningRate - In the implementation block
@property (readonly) unsigned long long decaySteps;                               //@synthesize decaySteps=_decaySteps - In the implementation block
@property (readonly) float decayRate;                                             //@synthesize decayRate=_decayRate - In the implementation block
@property (readonly) BOOL stairCase;                                              //@synthesize stairCase=_stairCase - In the implementation block
@property (assign) float decayedLearningRate;                                     //@synthesize decayedLearningRate=_decayedLearningRate - In the implementation block
@property (assign) unsigned long long globalSteps;                                //@synthesize globalSteps=_globalSteps - In the implementation block
@property (__weak) id<MLPLearningRateDecayHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MLPLearningRateDecayHandlerDelegate>)delegate;
-(void)setDelegate:(id<MLPLearningRateDecayHandlerDelegate>)arg1 ;
-(float)decayRate;
-(float)learningRate;
-(id)initWithLearningRate:(float)arg1 decaySteps:(unsigned long long)arg2 decayRate:(float)arg3 stairCase:(BOOL)arg4 ;
-(void)updateGlobalStep;
-(unsigned long long)globalSteps;
-(void)setGlobalSteps:(unsigned long long)arg1 ;
-(float)decayedLearningRate;
-(unsigned long long)decaySteps;
-(BOOL)stairCase;
-(void)setDecayedLearningRate:(float)arg1 ;
@end

