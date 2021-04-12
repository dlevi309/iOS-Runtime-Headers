/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@interface QuickTypePFLData : NSObject {

	unsigned long long _maxSequenceLength;

}

@property (nonatomic,readonly) unsigned long long maxSequenceLength;               //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
@property (nonatomic,readonly) unsigned long long numTrainingSamples; 
@property (nonatomic,readonly) unsigned long long numTrainingTokens; 
-(id)initWithMaxSequenceLength:(unsigned long long)arg1 ;
-(BOOL)loadFromFile:(id)arg1 error:(id*)arg2 ;
-(void)shuffle;
-(unsigned long long)numTrainingSamples;
-(unsigned long long)numTrainingTokens;
-(void)enumerateDataInBatches:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)maxSequenceLength;
@end

