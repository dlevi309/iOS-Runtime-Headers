/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)data;
-(unsigned long long)systemVersion;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NLModelConfiguration *)configuration;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelForString:(id)arg1 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)gazetteer;
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
-(id)sequenceTestResultsWithDataProvider:(id)arg1 ;
-(id)classifierTestResultsWithDataProvider:(id)arg1 ;
-(id)testResultsWithDataProvider:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeMLModelToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)mlModel;
-(id)testResultsWithDataSet:(id)arg1 ;
@end

