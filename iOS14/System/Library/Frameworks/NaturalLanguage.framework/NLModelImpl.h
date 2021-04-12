/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)modelData;
-(NLGazetteer *)gazetteer;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(NSDictionary *)labelMap;
-(NSDictionary *)vocabularyMap;
-(NSDictionary *)documentFrequencyMap;
-(NSDictionary *)trainingInfo;
-(NSData *)customEmbeddingData;
-(NLEmbedding *)embedding;
-(NSData *)embeddingData;
-(id)predictedLabelArraysForTokenArrays:(id)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTrainingInstances;
@end

