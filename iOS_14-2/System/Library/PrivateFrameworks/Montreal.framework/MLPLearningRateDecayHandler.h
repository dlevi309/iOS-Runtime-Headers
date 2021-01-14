/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)decayRate;
-(id<MLPLearningRateDecayHandlerDelegate>)delegate;
-(void)setDelegate:(id<MLPLearningRateDecayHandlerDelegate>)arg1 ;
-(id)initWithLearningRate:(float)arg1 decaySteps:(unsigned long long)arg2 decayRate:(float)arg3 stairCase:(BOOL)arg4 ;
-(void)updateGlobalStep;
-(unsigned long long)globalSteps;
-(void)setGlobalSteps:(unsigned long long)arg1 ;
-(float)decayedLearningRate;
-(unsigned long long)decaySteps;
-(BOOL)stairCase;
-(void)setDecayedLearningRate:(float)arg1 ;
-(float)learningRate;
@end

