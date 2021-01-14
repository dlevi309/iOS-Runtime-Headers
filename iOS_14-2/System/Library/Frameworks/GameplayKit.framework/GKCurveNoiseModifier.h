/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKCurveNoiseModifier : GKNoiseModifier {

	double* _parameters;
	double* _controlPoints;
	int _count;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithControlPoints:(id)arg1 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

