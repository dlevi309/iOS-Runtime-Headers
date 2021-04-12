/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NLModelConfiguration, NSDictionary, NSData, NLGazetteer, NLEmbedding;

@interface NLModelImpl : NSObject

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) unsigned long long systemVersion; 
@property (copy,readonly) NSDictionary * labelMap; 
@property (copy,readonly) NSDictionary * vocabularyMap; 
@property (copy,readonly) NSDictionary * documentFrequencyMap; 
@property (copy,readonly) NSData * customEmbeddingData; 
@property (readonly) unsigned long long numberOfTrainingInstances; 
@property (copy,readonly) NSDictionary * trainingInfo; 
@property (copy,readonly) NLGazetteer * gazetteer; 
@property (copy,readonly) NLEmbedding * embedding; 
@property (copy,readonly) NSData * embeddingData; 
-(unsigned long long)systemVersion;
-(NLModelConfiguration *)configuration;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)modelData;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(NLGazetteer *)gazetteer;
-(NSDictionary *)labelMap;
-(NSDictionary *)vocabularyMap;
-(NSDictionary *)documentFrequencyMap;
-(NSDictionary *)trainingInfo;
-(NSData *)customEmbeddingData;
-(NLEmbedding *)embedding;
-(NSData *)embeddingData;
-(unsigned long long)numberOfTrainingInstances;
@end

