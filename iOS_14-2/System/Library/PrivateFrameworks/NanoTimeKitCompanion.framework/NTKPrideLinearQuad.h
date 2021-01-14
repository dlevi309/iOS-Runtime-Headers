/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKPrideSplinesQuad.h>

@interface NTKPrideLinearQuad : NTKPrideSplinesQuad {

	[12 _controlPointsDampingCoefficients];
	SCD_Struct_NT20* _perSplineData;
	float _aspectRatio;
	float _vignetteAmount;
	float _displayMode;
	float _currentFade;
	BOOL _fading;
	float _globalTouchTime;
	BOOL _paused;
	unsigned long long _currentStyle;
	BOOL _useXRsRGB;

}

@property (nonatomic,readonly) BOOL useXRsRGB;              //@synthesize useXRsRGB=_useXRsRGB - In the implementation block
-(void)dealloc;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(id)initWithDevice:(id)arg1 useXRsRGB:(BOOL)arg2 touchCrownHandler:(id)arg3 ;
-(void)setFabricMode;
-(void)applyTransitionFromBandedToFabricWithFraction:(double)arg1 ;
-(int)numSplines;
-(float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3 ;
-(void)_generateSplinePositions;
-(2)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2 ;
-(BOOL)useXRsRGB;
-(void)_initializePerSplineData;
-(/*^block*/id)getNTKPrideSplineDefinitionFiller;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 useXRsRGB:(BOOL)arg2 ;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)renderPipelineName;
-(void)setBandedMode;
-({?=}*)noiseConfiguration;
-(void)_generateSplineColors;
-(float)_xPositionForSpline:(int)arg1 ;
-(void)handleOrdinaryScreenWake;
-(void)handleScreenOff;
-(void)_computePigeonLocationsForPigeons:(int)arg1 inHoles:(int)arg2 pigeonIndices:(int*)arg3 pigeonToHole:(int*)arg4 pigeonsPerHole:(int*)arg5 ;
-(void)_generateControlPointDampingCoefficients;
-(void)clearWaves;
-(BOOL)shouldForceRender;
-(void)processSpline:(int)arg1 ;
-(int)numControlPointsPerSpline;
-(int)numVertsForSpline:(int)arg1 ;
-(float)interpolationStepSizeForSpline:(int)arg1 ;
-(float)vignetteAmount;
-(id)generateVignetteTextureData;
-(void)generateControlPointsForSpline:(int)arg1 ;
-(float)globalAmplitudeForTime:(double)arg1 ;
-(void)startWavesAtTime:(double)arg1 ;
-(void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3 ;
-(float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2 ;
-(void)setNoise:(int)arg1 forControlPoint:(int)arg2 ;
@end

