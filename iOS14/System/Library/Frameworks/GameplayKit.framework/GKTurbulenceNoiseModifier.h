/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

@interface GKTurbulenceNoiseModifier : GKNoiseModifier {

	double _power;
	double _frequency;
	double _roughness;
	int _seed;
	GKPerlinNoiseSource* _perlin[3];

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

