/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)systemVersion;
-(id)configuration;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)modelData;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)labelMap;
-(id)trainingInfo;
-(id)customEmbeddingData;
-(unsigned long long)numberOfTrainingInstances;
@end

