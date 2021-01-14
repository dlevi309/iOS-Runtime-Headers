/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKBillowNoiseSource : GKCoherentNoiseSource {

	double _persistence;

}

@property (assign,nonatomic) double persistence;              //@synthesize persistence=_persistence - In the implementation block
+(id)billowNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
-(double)persistence;
-(void)setPersistence:(double)arg1 ;
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
@end

