/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKClampNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;

}
-(id)init;
-(id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 ;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

