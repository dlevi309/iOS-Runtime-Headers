/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REMLMetricsProvider.h>

@class NSString, NSMutableArray;

@interface REMLEntropyMetric : NSObject <REMLMetricsProvider> {

	NSString* _metricName;
	NSString* _predictionFeatureName;
	NSString* _truthFeatureName;
	long long _arrayFeatureIndex;
	long long _numExamples;
	double _sumTruth;
	double _sumPrediction;
	double _logScore;
	double _normalizedLogScore;
	unsigned long long _calibrationCurveNumBuckets;
	NSMutableArray* _calibrationCurveTotal;
	NSMutableArray* _calibrationCurveTrue;

}
-(id)name;
-(void)createCheckpoint;
-(void)resetToLastCheckpointBeforeDate:(id)arg1 ;
-(void)reset;
-(id)initWithName:(id)arg1 featureName:(id)arg2 ;
-(void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3 ;
-(double)getDoubleFromFeatureValue:(id)arg1 ;
-(id)meanEntropy;
-(id)meanNormalizedEntropy;
-(id)meanTruth;
-(id)meanPrediction;
-(long long)numberOfExamples;
-(unsigned long long)calibrationCurveNumBuckets;
-(id)calibrationCurveTotal;
-(id)calibrationCurveTrue;
@end

