/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution {

	float _mean;
	float _deviation;

}

@property (nonatomic,readonly) float mean;                   //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float deviation;              //@synthesize deviation=_deviation - In the implementation block
-(float)mean;
-(long long)nextInt;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3 ;
-(float)deviation;
@end

