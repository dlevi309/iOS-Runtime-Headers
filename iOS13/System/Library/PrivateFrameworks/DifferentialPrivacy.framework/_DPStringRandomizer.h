/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol _DPStringRandomizer;
@interface _DPStringRandomizer : NSObject {

	id<_DPStringRandomizer> _randomizer;
	unsigned long long _algorithm;

}

@property (nonatomic,readonly) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) id<_DPStringRandomizer> randomizer;              //@synthesize randomizer=_randomizer - In the implementation block
+(id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 ;
-(id)init;
-(id)description;
-(unsigned long long)algorithm;
-(id<_DPStringRandomizer>)randomizer;
-(id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 ;
@end

