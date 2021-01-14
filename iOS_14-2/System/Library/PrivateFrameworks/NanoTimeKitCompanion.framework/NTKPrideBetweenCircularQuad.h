/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKPrideCircularQuad.h>

@interface NTKPrideBetweenCircularQuad : NTKPrideCircularQuad
-(float)softness;
-(float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3 ;
-(2)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2 ;
-(int)numSplinesToDraw;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)fragmentShaderName;
-(id)renderPipelineName;
-(int)splineDrawOrder:(int)arg1 ;
-(BOOL)additiveBlendingEnabled;
-(id)splineColorAtIndex:(int)arg1 ;
-(float)_dialRadiusForSpline:(int)arg1 ;
-(float)_rectRadiusForSpline:(int)arg1 ;
-(float)_dampingFactorForSpline:(int)arg1 ;
-(int)_numVertsForSpline:(int)arg1 ;
-(void)_colorSequenceForStartIndex:(int)arg1 reverseDirection:(BOOL)arg2 colorSequence:(/*^block*/id)arg3 ;
@end

