/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIValuePredictor : NSObject <NSCopying> {

	unsigned long long _capacity;
	unsigned long long _arrayCapacity;
	double* _values;
	double* _valueWeights;
	double* _predictions;
	double* _confidenceFactorsForVelocity;
	double* _confidenceFactorsForHistoricalAccuracy;
	double* _confidenceFactorsForDerivativeStability;
	double* _confidenceFactors;
	double* _derivatives;
	double _minHistoricalAccuracyThreshold;
	double _maxHistoricalAccuracyThreshold;
	double _derivativeStabilityThreshold;
	double _minVelocityThreshold;
	double _maxVelocityThreshold;
	double _minConstraint;
	double _maxConstraint;
	BOOL _wrapConstraint;
	unsigned long long _numValues;
	unsigned long long _numPredictions;
	unsigned long long _numDerivatives;

}

@property (assign,nonatomic) double minHistoricalAccuracyThreshold;              //@synthesize minHistoricalAccuracyThreshold=_minHistoricalAccuracyThreshold - In the implementation block
@property (assign,nonatomic) double maxHistoricalAccuracyThreshold;              //@synthesize maxHistoricalAccuracyThreshold=_maxHistoricalAccuracyThreshold - In the implementation block
@property (assign,nonatomic) double derivativeStabilityThreshold;                //@synthesize derivativeStabilityThreshold=_derivativeStabilityThreshold - In the implementation block
@property (assign,nonatomic) double minVelocityThreshold;                        //@synthesize minVelocityThreshold=_minVelocityThreshold - In the implementation block
@property (assign,nonatomic) double maxVelocityThreshold;                        //@synthesize maxVelocityThreshold=_maxVelocityThreshold - In the implementation block
@property (assign,nonatomic) double minConstraint;                               //@synthesize minConstraint=_minConstraint - In the implementation block
@property (assign,nonatomic) double maxConstraint;                               //@synthesize maxConstraint=_maxConstraint - In the implementation block
@property (assign,nonatomic) BOOL wrapConstraint;                                //@synthesize wrapConstraint=_wrapConstraint - In the implementation block
@property (nonatomic,readonly) unsigned long long numValues;                     //@synthesize numValues=_numValues - In the implementation block
@property (nonatomic,readonly) unsigned long long numPredictions;                //@synthesize numPredictions=_numPredictions - In the implementation block
@property (nonatomic,readonly) unsigned long long numDerivatives;                //@synthesize numDerivatives=_numDerivatives - In the implementation block
-(id)init;
-(double*)predictions;
-(id)description;
-(unsigned long long)numValues;
-(void)_ensureCapacity:(unsigned long long)arg1 ;
-(double*)_derivatives;
-(unsigned long long)numPredictions;
-(unsigned long long)numDerivatives;
-(double*)_valuesAtIndex:(unsigned long long)arg1 ;
-(id)initWithNumPredictions:(unsigned long long)arg1 numDerivatives:(unsigned long long)arg2 ;
-(void)setMinHistoricalAccuracyThreshold:(double)arg1 ;
-(void)setMaxHistoricalAccuracyThreshold:(double)arg1 ;
-(void)setDerivativeStabilityThreshold:(double)arg1 ;
-(void)setMinVelocityThreshold:(double)arg1 ;
-(void)setMaxVelocityThreshold:(double)arg1 ;
-(void)setMinConstraint:(double)arg1 ;
-(void)setMaxConstraint:(double)arg1 ;
-(void)setWrapConstraint:(BOOL)arg1 ;
-(void)addValue:(double)arg1 weight:(double)arg2 ;
-(double*)_predictionsAtIndex:(unsigned long long)arg1 ;
-(double*)_confidenceFactorsAtIndex:(unsigned long long)arg1 ;
-(double*)_confidenceFactorsForVelocityAtIndex:(unsigned long long)arg1 ;
-(id)descriptionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 includeHeader:(BOOL)arg3 includeDetailedConfidence:(BOOL)arg4 ;
-(double*)_valueWeightsAtIndex:(unsigned long long)arg1 ;
-(double)minHistoricalAccuracyThreshold;
-(double*)_confidenceFactorsForHistoricalAccuracyAtIndex:(unsigned long long)arg1 ;
-(double)maxVelocityThreshold;
-(double*)_confidenceFactorsForDerivativeStabilityAtIndex:(unsigned long long)arg1 ;
-(double)minVelocityThreshold;
-(double)maxHistoricalAccuracyThreshold;
-(double)derivativeStabilityThreshold;
-(double)minConstraint;
-(double)maxConstraint;
-(BOOL)wrapConstraint;
-(id)initFromValuePredictor:(id)arg1 ;
-(void)_getPriorPredictions:(double*)arg1 forValueAtIndex:(int)arg2 ;
-(void)_updatePredictionsAtIndex:(long long)arg1 ;
-(void)_updateConfidenceFactorsForVelocityAtIndex:(long long)arg1 ;
-(double)_constrainPrediction:(double)arg1 ;
-(void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg1 ;
-(void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg1 ;
-(void)_updateDerivatives:(double*)arg1 fromArray:(double*)arg2 weights:(double*)arg3 atIndex:(long long)arg4 wrap:(BOOL)arg5 ;
-(double*)confidenceFactors;
-(void)_propagateDerivatives:(double*)arg1 fromHigherDerivatives:(double*)arg2 atIndex:(long long)arg3 ;
-(void)_slideDataWindow;
-(void)_updateConfidenceFactorsAtIndex:(int)arg1 ;
-(void)_setupDefaults;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

