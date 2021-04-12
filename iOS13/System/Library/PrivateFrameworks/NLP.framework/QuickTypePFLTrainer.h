/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/


@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject {

	unsigned long long _batchSize;
	NSNumber* _learningRate;
	unsigned long long _maxSequenceLength;
	NSString* _updatedModelPath;

}

@property (assign,nonatomic) unsigned long long batchSize;                        //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSNumber * learningRate;                               //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSequenceLength;              //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * updatedModelPath;                  //@synthesize updatedModelPath=_updatedModelPath - In the implementation block
-(void)reset;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSNumber *)learningRate;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(unsigned long long)maxSequenceLength;
-(id)initWithSeedModelPath:(id)arg1 ;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(BOOL)arg3 ;
-(id)evaluateOn:(id)arg1 ;
-(float*)copyWeightUpdates:(unsigned long long*)arg1 ;
-(NSString *)updatedModelPath;
@end

