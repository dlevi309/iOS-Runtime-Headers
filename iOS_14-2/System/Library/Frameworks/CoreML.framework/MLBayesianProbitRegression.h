/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLRegressor.h>
#import <libobjc.A.dylib/MLSupervisedOnlineUpdatable.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>
#import <libobjc.A.dylib/MLModelSpecificationSaver.h>

@class NSString;

@interface MLBayesianProbitRegression : MLRegressor <MLSupervisedOnlineUpdatable, MLModelSpecificationLoader, MLModelSpecificationSaver> {

	shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression>* _model;
	NSString* _regressionInputFeatureName;
	NSString* _optimismInputFeatureName;
	NSString* _meanOutputFeatureName;
	NSString* _varianceOutputFeatureName;
	NSString* _pessimisticProbabilityOutputFeatureName;
	NSString* _sampledProbabilityOutputFeatureName;
	NSString* _samplingScaleInputFeatureName;
	NSString* _samplingTruncationInputFeatureName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateModelDescription:(id)arg1 ;
+(BOOL)setFeatureName:(id*)arg1 to:(id)arg2 descriptions:(id)arg3 ;
-(shared_ptr<CoreML::BayesianProbitRegression::BayesianProbitRegression>*)model;
-(id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 regressionInputName:(id)arg4 optimismInputName:(id)arg5 samplingScaleInputName:(id)arg6 samplingTruncationInputName:(id)arg7 meanOutputName:(id)arg8 varianceOutputName:(id)arg9 pessimisticProbabilityOutputName:(id)arg10 sampledProbabilityOutputName:(id)arg11 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelSpecification*)saveModelToSpecification:(id*)arg1 ;
-(unsigned long long)FeatureCount;
-(BOOL)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)setInputFeatureName:(id*)arg1 to:(id)arg2 ;
-(BOOL)setOutputFeatureName:(id*)arg1 to:(id)arg2 ;
-(BOOL)setFeatureCount:(unsigned long long)arg1 ;
-(id)initWithDescription:(id)arg1 numberOfFeatures:(long long)arg2 priorMean:(id)arg3 ;
-(id)getArrayFeatureValue:(id)arg1 ;
-(double)getOptimism:(id)arg1 ;
-(shared_ptr<CoreML::BayesianProbitRegression::FeatureValues>*)getOneHotFeatureValues:(id)arg1 error:(id*)arg2 ;
-(id)createRegressorResult:(Prediction*)arg1 ;
-(double)getFeatureValue:(id)arg1 forName:(id)arg2 withType:(long long)arg3 ;
-(double)getSamplingScale:(id)arg1 ;
-(double)getSamplingTruncation:(id)arg1 ;
-(BOOL)convertOutputFeatureToPredictionValues:(id)arg1 event:(BOOL*)arg2 importance:(double*)arg3 error:(id*)arg4 ;
-(BOOL)updateModelFromFeatures:(id)arg1 toTarget:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqualToBopr:(id)arg1 ;
-(void)createCheckpoint;
-(void)resetToLastCheckpointBeforeDate:(id)arg1 ;
-(void)reset;
-(id)initWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

