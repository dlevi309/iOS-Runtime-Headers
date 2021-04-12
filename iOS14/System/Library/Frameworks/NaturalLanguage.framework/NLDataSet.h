/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLModelConfiguration, NLDataProvider;

@interface NLDataSet : NSObject {

	NLModelConfiguration* _configuration;
	NLDataProvider* _trainingDataProvider;
	NLDataProvider* _validationDataProvider;
	NLDataProvider* _testDataProvider;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) unsigned long long numberOfTrainingInstances; 
@property (readonly) unsigned long long numberOfValidationInstances; 
@property (readonly) unsigned long long numberOfTestInstances; 
+(id)dataSetWithDataSet:(id)arg1 constraintParameters:(NLConstraintParameters)arg2 modelTrainer:(id)arg3 ;
-(NLModelConfiguration *)configuration;
-(unsigned long long)numberOfLabels;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(id)dataProviderOfType:(long long)arg1 ;
-(unsigned long long)numberOfTrainingInstances;
-(id)inverseLabelMap;
-(id)initWithConfiguration:(id)arg1 trainingDataURL:(id)arg2 validationDataURL:(id)arg3 testDataURL:(id)arg4 ;
-(unsigned long long)numberOfValidationInstances;
-(unsigned long long)numberOfVocabularyEntries;
-(id)initWithConfiguration:(id)arg1 trainingDataProvider:(id)arg2 validationDataProvider:(id)arg3 testDataProvider:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 dataProvider:(id)arg2 validationSplit:(double)arg3 testingSplit:(double)arg4 ;
-(unsigned long long)numberOfTestInstances;
-(id)trainingInstanceAtIndex:(unsigned long long)arg1 ;
-(id)validationInstanceAtIndex:(unsigned long long)arg1 ;
-(id)testInstanceAtIndex:(unsigned long long)arg1 ;
@end

