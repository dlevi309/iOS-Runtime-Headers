/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution {

	float _mean;
	float _deviation;

}

@property (nonatomic,readonly) float mean;                   //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float deviation;              //@synthesize deviation=_deviation - In the implementation block
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(float)mean;
-(long long)nextInt;
-(id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3 ;
-(float)deviation;
@end

