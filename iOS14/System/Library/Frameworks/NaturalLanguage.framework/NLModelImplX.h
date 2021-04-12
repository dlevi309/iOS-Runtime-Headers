/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NLEmbedding, NSData, NSDictionary, NSString;

@interface NLModelImplX : NLModelImpl {

	MontrealNeuralNetworkRef _montrealModel;
	NLModelConfiguration* _configuration;
	NLEmbedding* _embedding;
	NSData* _customEmbeddingData;
	NSDictionary* _labelMap;
	unsigned long long _numberOfTrainingInstances;
	NSString* _trainingLanguage;
	NSString* _trainingEmbeddingType;
	NSData* _modelData;

}
-(unsigned long long)systemVersion;
-(id)configuration;
-(id)modelData;
-(void)dealloc;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)labelMap;
-(id)trainingInfo;
-(id)customEmbeddingData;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTrainingInstances;
-(float*)outputForString:(id)arg1 ;
@end

