/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLModelImpl.h>

@class NLGazetteer;

@interface NLModelImplG : NLModelImpl {

	NLGazetteer* _gazetteer;

}
-(unsigned long long)systemVersion;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)modelData;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)gazetteer;
-(id)initWithGazetteer:(id)arg1 ;
@end

