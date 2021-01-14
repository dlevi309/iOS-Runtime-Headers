/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKBlendNoiseModifier : GKNoiseModifier {

	double _lowerBound;
	double _upperBound;
	double _blendDistance;

}
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

