/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)d6;
+(id)d20;
+(id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2 ;
+(id)distributionForDieWithSideCount:(long long)arg1 ;
-(id)init;
-(BOOL)nextBool;
-(float)nextUniform;
-(long long)nextInt;
-(long long)lowestValue;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)highestValue;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(unsigned long long)numberOfPossibleOutcomes;
@end

