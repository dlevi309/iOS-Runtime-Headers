/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)nextInt;
-(float)uniformDistance;
-(void)setUniformDistance:(float)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4 ;
@end

