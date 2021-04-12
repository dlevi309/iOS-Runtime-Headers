/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface MiroRandomNumberGenerator : NSObject {

	unsigned long long _seed;
	unsigned long long _index;

}

@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign) unsigned long long seed;                         //@synthesize seed=_seed - In the implementation block
+(double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(BOOL)arg6 ;
+(id)randomNumberGeneratorWithSeed:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(unsigned long long)seed;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setSeed:(unsigned long long)arg1 ;
-(double)randomNumberBetweenZeroAndOne;
-(double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2 ;
@end

