/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <libobjc.A.dylib/GKRandom.h>

@protocol GKRandom;
@interface GKRandomDistribution : NSObject <GKRandom> {

	id<GKRandom> _source;
	long long _lowest;
	long long _highest;

}

@property (nonatomic,readonly) long long lowestValue;                                    //@synthesize lowest=_lowest - In the implementation block
@property (nonatomic,readonly) long long highestValue;                                   //@synthesize highest=_highest - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPossibleOutcomes; 
+(id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2 ;
+(id)distributionForDieWithSideCount:(long long)arg1 ;
+(id)d6;
+(id)d20;
-(id)init;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)lowestValue;
-(long long)highestValue;
-(unsigned long long)numberOfPossibleOutcomes;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
@end

