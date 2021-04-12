/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKPrideLinearQuad.h>

@interface NTKPrideBetweenLinearQuad : NTKPrideLinearQuad {

	SCD_Struct_NT7* _perSplineData;
	unsigned short _amplitudeIsLarge[12];
	BOOL _someAmplitudesAreLarge;
	BOOL _drawReverseOrder;

}
-(void)dealloc;
-(void)applyTransitionFromBandedToFabricWithFraction:(double)arg1 ;
-(int)numSplines;
-(float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3 ;
-(void)_generateSplinePositions;
-(2)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2 ;
-(void)_initializePerSplineData;
-(int)numSplinesToDraw;
-(/*^block*/id)getNTKPrideSplineDefinitionFiller;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 useXRsRGB:(BOOL)arg2 ;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)fragmentShaderName;
-(id)renderPipelineName;
-(void)setBandedMode;
-({?=}*)noiseConfiguration;
-(void)_generateSplineColors;
-(int)splineDrawOrder:(int)arg1 ;
-(float)_xPositionForSpline:(int)arg1 ;
-(BOOL)additiveBlendingEnabled;
@end

