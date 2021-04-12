/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@interface _DPPTValueRandomizer : NSObject <_DPStringRandomizer> {

	unsigned _numGroups;
	unsigned _bucketCount;
	double _epsilon;
	unsigned long long _mask;
	double _chancePMinusQ;

}

@property (assign,nonatomic) double epsilon;                       //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) unsigned numGroups;                   //@synthesize numGroups=_numGroups - In the implementation block
@property (assign,nonatomic) unsigned long long mask;              //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) unsigned bucketCount;                 //@synthesize bucketCount=_bucketCount - In the implementation block
@property (assign,nonatomic) double chancePMinusQ;                 //@synthesize chancePMinusQ=_chancePMinusQ - In the implementation block
+(id)randomizerWithEpsilon:(double)arg1 numberOfGroups:(unsigned)arg2 ;
-(unsigned long long)mask;
-(void)setEpsilon:(double)arg1 ;
-(id)init;
-(void)setMask:(unsigned long long)arg1 ;
-(unsigned)bucketCount;
-(double)epsilon;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(id)randomize:(id)arg1 ;
-(id)initWithEpsilon:(double)arg1 numberOfGroups:(unsigned)arg2 ;
-(unsigned)numGroups;
-(double)chancePMinusQ;
-(void)setNumGroups:(unsigned)arg1 ;
-(void)setBucketCount:(unsigned)arg1 ;
-(void)setChancePMinusQ:(double)arg1 ;
@end

