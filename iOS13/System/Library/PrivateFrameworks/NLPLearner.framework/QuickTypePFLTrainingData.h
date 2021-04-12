/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)numTrainingSamples;
-(unsigned long long)maxSequenceLength;
-(void)addResource:(id)arg1 ;
-(void)rewind;
-(unsigned long long)iterator;
-(void)setIterator:(unsigned long long)arg1 ;
-(NSMutableArray *)sentences;
-(void)setMaxSequenceLength:(unsigned long long)arg1 ;
-(BOOL)loadFromCoreDuet:(id)arg1 withLocale:(id)arg2 andTokenizationBlock:(/*^block*/id)arg3 ;
-(BOOL)loadFromCoreDuet:(id)arg1 ;
-(id)getTrainingDataBatch:(unsigned long long)arg1 ;
-(id)getEvaluationDataPoint;
-(BOOL)processingNewRecord;
-(void)setProcessingNewRecord:(BOOL)arg1 ;
-(void)setSentences:(NSMutableArray *)arg1 ;
@end

