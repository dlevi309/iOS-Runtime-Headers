/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier {

	double* _controlPoints;
	int _count;
	BOOL _inverted;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithPeakInputValues:(id)arg1 terracesInverted:(BOOL)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

