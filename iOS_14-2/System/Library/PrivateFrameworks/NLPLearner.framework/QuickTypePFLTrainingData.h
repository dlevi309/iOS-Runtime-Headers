/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/


@class NSMutableArray;

@interface QuickTypePFLTrainingData : NSObject {

	NSMutableArray* _sentences;
	unsigned long long _iterator;
	BOOL _processingNewRecord;
	unsigned long long _maxSequenceLength;

}

@property (nonatomic,retain) NSMutableArray * sentences;                           //@synthesize sentences=_sentences - In the implementation block
@property (assign,nonatomic) unsigned long long iterator;                          //@synthesize iterator=_iterator - In the implementation block
@property (assign,nonatomic) BOOL processingNewRecord;                             //@synthesize processingNewRecord=_processingNewRecord - In the implementation block
@property (nonatomic,readonly) unsigned long long numTrainingSamples; 
@property (assign,nonatomic) unsigned long long maxSequenceLength;                 //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
+(void)initialize;
+(unsigned long long)defaultMaxSequenceLength;
+(id)trainingDataFor:(long long)arg1 andLocale:(id)arg2 ;
-(id)init;
-(void)addResource:(id)arg1 ;
-(NSMutableArray *)sentences;
-(void)rewind;
-(unsigned long long)iterator;
-(unsigned long long)numTrainingSamples;
-(unsigned long long)maxSequenceLength;
-(void)setIterator:(unsigned long long)arg1 ;
-(void)setMaxSequenceLength:(unsigned long long)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 withLocale:(id)arg2 andLMStreamTokenizationBlock:(/*^block*/id)arg3 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
-(id)getTrainingDataBatch:(unsigned long long)arg1 ;
-(id)getEvaluationDataPoint;
-(BOOL)processingNewRecord;
-(void)setProcessingNewRecord:(BOOL)arg1 ;
-(void)setSentences:(NSMutableArray *)arg1 ;
@end

