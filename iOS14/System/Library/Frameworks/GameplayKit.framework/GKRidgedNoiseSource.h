/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKRidgedNoiseSource : GKCoherentNoiseSource {

	double m_weights[30];

}
+(id)ridgedNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4 ;
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4 ;
@end

