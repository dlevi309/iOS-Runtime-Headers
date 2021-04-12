/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKBillowNoiseSource : GKCoherentNoiseSource {

	double _persistence;

}

@property (assign,nonatomic) double persistence;              //@synthesize persistence=_persistence - In the implementation block
+(id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
-(id)init;
-(double)persistence;
-(void)setPersistence:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
@end

