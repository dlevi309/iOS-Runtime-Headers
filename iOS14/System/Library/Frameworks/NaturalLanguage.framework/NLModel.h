/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@protocol OS_dispatch_queue;
@class NLModelConfiguration, NSDictionary, NLModelImpl, NSData, MLModel, NSObject;

@interface NLModel : NSObject {

	NLModelConfiguration* _configuration;
	NSDictionary* _infoDictionary;
	NLModelImpl* _modelImpl;
	NSData* _data;
	MLModel* _mlModel;
	void* _container;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)modelWithData:(id)arg1 error:(id*)arg2 ;
+(id)modelWithMLModel:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)systemVersion;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NLModelConfiguration *)configuration;
-(id)data;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)mlModel;
-(void)dealloc;
-(id)gazetteer;
-(id)predictedLabelForString:(id)arg1 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2 ;
-(BOOL)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id*)arg3 ;
-(id)initWithClassifierMLModel:(id)arg1 ;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(id)labelArray;
-(id)embedding;
-(id)embeddingData;
-(id)predictedLabelArraysForTokenArrays:(id)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)sequenceTestResultsWithDataProvider:(id)arg1 ;
-(id)classifierTestResultsWithDataProvider:(id)arg1 ;
-(id)testResultsWithDataProvider:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeMLModelToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)testResultsWithDataSet:(id)arg1 ;
@end

