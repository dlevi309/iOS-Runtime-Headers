/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSString, MLModel, NSArray;

@interface _ATXScoreInterpreterCoreMLModel : NSObject {

	NSString* _coreMLModelName;
	MLModel* _coreMLModel;
	NSString* _coreMLModelOutputName;
	NSArray* _coreMLInputFeatures;
	BOOL _hasOutputIndexedSubscript;
	NSArray* _argumentsToEvaluate;

}

@property (nonatomic,readonly) NSArray * argumentsToEvaluate;                    //@synthesize argumentsToEvaluate=_argumentsToEvaluate - In the implementation block
@property (nonatomic,readonly) BOOL hasOutputIndexedSubscript;                   //@synthesize hasOutputIndexedSubscript=_hasOutputIndexedSubscript - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatures; 
+(double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2 ;
-(id)init;
-(id)featureAtIndex:(unsigned long long)arg1 ;
-(id)initWithModelName:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3 ;
-(void)loadCoreMLModelIfNotAlreadyLoaded;
-(void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2 ;
-(unsigned long long)numberOfFeatures;
-(double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2 ;
-(NSArray *)argumentsToEvaluate;
-(BOOL)hasOutputIndexedSubscript;
@end

