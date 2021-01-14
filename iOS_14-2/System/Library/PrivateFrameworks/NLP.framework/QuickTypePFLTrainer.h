/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(unsigned long long)maxSequenceLength;
-(id)evaluateOn:(id)arg1 ;
-(id)initWithSeedModelPath:(id)arg1 ;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(BOOL)arg3 ;
-(float*)copyWeightUpdates:(unsigned long long*)arg1 ;
-(NSString *)updatedModelPath;
-(void)reset;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(NSNumber *)learningRate;
@end

