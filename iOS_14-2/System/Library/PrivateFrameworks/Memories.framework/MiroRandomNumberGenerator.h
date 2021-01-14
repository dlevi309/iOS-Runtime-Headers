/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)seed;
-(unsigned long long)index;
-(void)setSeed:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(double)randomNumberBetweenZeroAndOne;
-(double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2 ;
@end

