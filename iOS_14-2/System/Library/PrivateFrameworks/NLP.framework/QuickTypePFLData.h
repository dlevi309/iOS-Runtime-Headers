/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@interface QuickTypePFLData : NSObject {

	unsigned long long _maxSequenceLength;

}

@property (nonatomic,readonly) unsigned long long maxSequenceLength;               //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
@property (nonatomic,readonly) unsigned long long numTrainingSamples; 
@property (nonatomic,readonly) unsigned long long numTrainingTokens; 
-(void)shuffle;
-(id)initWithMaxSequenceLength:(unsigned long long)arg1 ;
-(unsigned long long)numTrainingSamples;
-(unsigned long long)numTrainingTokens;
-(void)enumerateDataInBatches:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)maxSequenceLength;
-(BOOL)loadFromFile:(id)arg1 error:(id*)arg2 ;
@end

