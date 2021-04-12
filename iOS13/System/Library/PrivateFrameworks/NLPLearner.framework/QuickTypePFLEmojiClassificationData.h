/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/

#import <NLPLearner/NLPLearner-Structs.h>
#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSMutableArray, NSDictionary, NSLocale, NSNumber;

@interface QuickTypePFLEmojiClassificationData : QuickTypePFLTrainingData {

	NSMutableArray* _labels;
	NSDictionary* _labelClasses;
	NSLocale* _locale;
	NSNumber* _noneClassProbability;
	CFScopedPtr<void *>* _embedding;
	unsigned long long _embeddingDimension;

}

@property (nonatomic,readonly) NSDictionary * labelClasses;                        //@synthesize labelClasses=_labelClasses - In the implementation block
@property (nonatomic,readonly) unsigned long long numOutputClasses; 
@property (nonatomic,readonly) unsigned long long embeddingDimension;              //@synthesize embeddingDimension=_embeddingDimension - In the implementation block
+(void)initialize;
-(id)initWithLocale:(id)arg1 ;
-(unsigned long long)embeddingDimension;
-(void)addResource:(id)arg1 ;
-(BOOL)addExamples:(id)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
-(id)getTrainingDataBatch:(unsigned long long)arg1 ;
-(id)getEvaluationDataPoint;
-(void)sampleNoneClassExample:(id)arg1 ;
-(unsigned long long)numOutputClasses;
-(NSDictionary *)labelClasses;
@end

