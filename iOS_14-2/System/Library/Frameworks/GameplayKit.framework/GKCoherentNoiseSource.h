/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(void)setSeed:(int)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(void)setOctaveCount:(long long)arg1 ;
-(void)setLacunarity:(double)arg1 ;
-(long long)octaveCount;
-(double)lacunarity;
@end

