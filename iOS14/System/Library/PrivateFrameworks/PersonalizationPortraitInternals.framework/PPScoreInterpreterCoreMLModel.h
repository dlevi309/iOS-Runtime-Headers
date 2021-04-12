/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, MLModel, NSArray;

@interface PPScoreInterpreterCoreMLModel : NSObject {

	NSString* _coreMLModelPath;
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
-(BOOL)hasOutputIndexedSubscript;
-(unsigned long long)numberOfFeatures;
-(double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2 ;
-(id)initWithModelPath:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3 ;
-(void)loadCoreMLModelIfNotAlreadyLoaded;
-(void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2 ;
-(NSArray *)argumentsToEvaluate;
@end

