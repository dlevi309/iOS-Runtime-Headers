/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource {

	int _seed;
	double _frequency;
	long long _octaveCount;
	double _lacunarity;

}

@property (assign,nonatomic) double frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long octaveCount;              //@synthesize octaveCount=_octaveCount - In the implementation block
@property (assign,nonatomic) double lacunarity;                  //@synthesize lacunarity=_lacunarity - In the implementation block
@property (assign,nonatomic) int seed;                           //@synthesize seed=_seed - In the implementation block
-(int)seed;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setSeed:(int)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(void)setOctaveCount:(long long)arg1 ;
-(void)setLacunarity:(double)arg1 ;
-(long long)octaveCount;
-(double)lacunarity;
@end

