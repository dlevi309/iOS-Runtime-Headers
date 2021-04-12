/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKShuffledDistribution : GKRandomDistribution {

	long long _delta;
	float _uniformDistance;
	long long _lastInt;
	long long _nextIntsCapacity;
	long long _nextIntsCount;
	long long* _nextInts;

}
-(long long)nextInt;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(void)dealloc;
-(float)uniformDistance;
-(void)setUniformDistance:(float)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4 ;
@end

