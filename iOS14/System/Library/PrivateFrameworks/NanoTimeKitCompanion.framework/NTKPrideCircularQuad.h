/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKPrideSplinesQuad.h>

@interface NTKPrideCircularQuad : NTKPrideSplinesQuad {

	SCD_Struct_NT38* _perSplineData;
	float _displayMode;
	float _currentFade;
	BOOL _fading;
	float _globalTouchTime;
	BOOL _paused;
	unsigned long long _currentStyle;
	float _velocity;
	SCD_Struct_NT39 _currentColorConfig;
	float _complicationFade;
	BOOL _useXRsRGB;
	/*^block*/id _complicationAlphaCallback;
	double _splineColorTransitionFraction;

}

@property (nonatomic,readonly) BOOL useXRsRGB;                                  //@synthesize useXRsRGB=_useXRsRGB - In the implementation block
@property (nonatomic,copy) id complicationAlphaCallback;                        //@synthesize complicationAlphaCallback=_complicationAlphaCallback - In the implementation block
@property (assign,nonatomic) double splineColorTransitionFraction;              //@synthesize splineColorTransitionFraction=_splineColorTransitionFraction - In the implementation block
@property (nonatomic,readonly) float softness; 
-(float)softness;
-(void)dealloc;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(void)prepareForZoom;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(int)numSplines;
-(float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3 ;
-(2)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2 ;
-(BOOL)useXRsRGB;
-(/*^block*/id)getNTKPrideSplineDefinitionFiller;
-(BOOL)preSemaphoreComputeForTime:(double)arg1 ;
-(id)initWithDevice:(id)arg1 useXRsRGB:(BOOL)arg2 ;
-(id)renderPipelineManager;
-(id)vertexShaderName;
-(id)renderPipelineName;
-({?=}*)noiseConfiguration;
-(void)handleOrdinaryScreenWake;
-(BOOL)postSemaphoreComputeForTime:(double)arg1 ;
-(void)handleScreenOff;
-(void)_generateControlPointDampingCoefficients;
-(void)clearWaves;
-(BOOL)shouldForceRender;
-(void)processSpline:(int)arg1 ;
-(int)numControlPointsPerSpline;
-(int)numVertsForSpline:(int)arg1 ;
-(float)interpolationStepSizeForSpline:(int)arg1 ;
-(id)generateVignetteTextureData;
-(void)generateControlPointsForSpline:(int)arg1 ;
-(float)globalAmplitudeForTime:(double)arg1 ;
-(void)startWavesAtTime:(double)arg1 ;
-(void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3 ;
-(float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2 ;
-(void)setNoise:(int)arg1 forControlPoint:(int)arg2 ;
-(id)splineColorAtIndex:(int)arg1 ;
-(void)setDefaultSplineColors;
-(BOOL)willConsumeTouch:(id)arg1 ;
-(void)applyTransitionFromDialToFullScreenWithFraction:(double)arg1 ;
-(void)setFullscreenMode;
-(void)setDialMode;
-(void)cleanupAfterAZoom;
-(float)_dialRadiusForSpline:(int)arg1 ;
-(float)_rectRadiusForSpline:(int)arg1 ;
-(float)_dampingFactorForSpline:(int)arg1 ;
-(int)_numVertsForSpline:(int)arg1 ;
-(void)_colorSequenceForStartIndex:(int)arg1 reverseDirection:(BOOL)arg2 colorSequence:(/*^block*/id)arg3 ;
-(double)splineColorTransitionFraction;
-(void)setColorConfig:(SCD_Struct_NT39)arg1 ;
-(SCD_Struct_NT39)advanceConfig:(SCD_Struct_NT39)arg1 ;
-(SCD_Struct_NT39)generateNextRandomConfigFromConfig:(SCD_Struct_NT39)arg1 ;
-(void)initializePerSplineData;
-(void)randomizeSplineColors;
-(float)currentSplineWidth;
-(SCD_Struct_NT39)advanceCurrentConfig;
-(SCD_Struct_NT39)generateNextRandomConfigFromCurrentConfig;
-(id)complicationAlphaCallback;
-(void)setComplicationAlphaCallback:(id)arg1 ;
-(void)setSplineColorTransitionFraction:(double)arg1 ;
@end

