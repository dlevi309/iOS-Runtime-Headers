/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKVoronoiNoiseSource : GKNoiseSource {

	BOOL _distanceEnabled;
	int _seed;
	double _frequency;
	double _displacement;

}

@property (assign,nonatomic) double frequency;                                           //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double displacement;                                        //@synthesize displacement=_displacement - In the implementation block
@property (assign,getter=isDistanceEnabled,nonatomic) BOOL distanceEnabled;              //@synthesize distanceEnabled=_distanceEnabled - In the implementation block
@property (assign,nonatomic) int seed;                                                   //@synthesize seed=_seed - In the implementation block
+(id)voronoiNoiseWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4 ;
-(id)init;
-(int)seed;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setSeed:(int)arg1 ;
-(double)displacement;
-(void)setDisplacement:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4 ;
-(void)setDistanceEnabled:(BOOL)arg1 ;
-(BOOL)isDistanceEnabled;
@end

