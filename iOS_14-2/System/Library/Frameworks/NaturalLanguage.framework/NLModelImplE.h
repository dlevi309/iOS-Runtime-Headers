/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLModelImpl.h>

@class NLEmbedding, NSData;

@interface NLModelImplE : NLModelImpl {

	NLEmbedding* _embedding;
	NSData* _embeddingData;

}
-(unsigned long long)systemVersion;
-(id)modelData;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)embedding;
-(id)embeddingData;
@end

