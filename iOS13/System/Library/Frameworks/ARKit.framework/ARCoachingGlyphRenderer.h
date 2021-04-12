/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARCoachingGlyphStateDelegate.h>

@protocol MTLDevice, MTLComputePipelineState, MTLRenderPipelineState, MTLTexture;
@class CALayer, ARCoachingGlyphState, ARCoachingAnimTime, ARCoachingQuaternionSpring, ARCoachingSpringDouble3, ARCoachingStateSpring, ARCoachingBasicSpring, ARCoachingMetalSplineData, ARCoachingDotsRenderer, ARCoachingDeviceController, NSString;

@interface ARCoachingGlyphRenderer : NSObject <ARCoachingGlyphStateDelegate> {

	id<MTLDevice> _device;
	unsigned long long _pixelFormat;
	id<MTLComputePipelineState> _computePipelineState;
	id<MTLRenderPipelineState> _postTessellationPipelineState;
	id<MTLTexture> _msaaTex;
	int _sampleCount;
	CALayer* _layer;
	float _edgeFactor;
	float _insideFactor;
	ARCoachingGlyphState* _state;
	float _strokeWeight;
	ARCoachingAnimTime* _time;
	ARCoachingQuaternionSpring* _rotationSpring;
	ARCoachingSpringDouble3* _scaleSpring;
	ARCoachingSpringDouble3* _topPlaneTranslationSpring;
	ARCoachingSpringDouble3* _bottomPlaneTranslationSpring;
	ARCoachingStateSpring* _cubeResolveSpring;
	ARCoachingStateSpring* _planeResolveSpring;
	ARCoachingStateSpring* _verticalResolvingSpring;
	ARCoachingStateSpring* _alphaSpring;
	ARCoachingBasicSpring* _orientationSpring;
	compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > _rotation;
	compressed_pair<double *, std::__1::allocator<double> > _angularVelocity;
	SCD_Struct_AR1 _R;
	SCD_Struct_AR1 _MVP;
	SCD_Struct_AR1 _mvp_ortho;
	SCD_Struct_AR1 _mvp_persp;
	ARCoachingMetalSplineData* _splineData;
	ARCoachingDotsRenderer* _dotsRenderer;
	ARCoachingDeviceController* _deviceController;
	ARCoachingDeviceController* _parallaxDeviceController;
	CGSize _lastDrawableSize;
	BOOL _dirty_tesselation_factors;
	float _rotationAngleY;
	float _a_vel;

}

@property (nonatomic,readonly) double currentAnimationTime; 
@property (nonatomic,readonly) ARCoachingGlyphState * state; 
@property (assign,nonatomic) float rotationAngleY;                        //@synthesize rotationAngleY=_rotationAngleY - In the implementation block
@property (assign,nonatomic) float a_vel;                                 //@synthesize a_vel=_a_vel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ARCoachingGlyphState *)state;
-(void)setOrientationAngle:(float)arg1 ;
-(id)initWithLayer:(id)arg1 device:(id)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(id)arg5 ;
-(double)currentAnimationTime;
-(void)resetAnimationTime:(double)arg1 ;
-(void)resizeIfNeeded:(id)arg1 ;
-(void)drawWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3 ;
-(void)snapStateChanged;
-(void)quaternionTargetChanged;
-(void)scaleTargetChanged;
-(void)topPlaneTranslationTargetChanged;
-(void)bottomPlaneTranslationTargetChanged;
-(void)setA_vel:(float)arg1 ;
-(void)setRotationAngleY:(float)arg1 ;
-(float)a_vel;
-(void)stepSprings:(double)arg1 ;
-(void)updateAngularVelocity;
-(void)computeRotation:(double)arg1 ;
-(void)computeTesselationFactorsForCommandBuffer:(id)arg1 ;
-(void)renderPostTessellationInDrawable:(id)arg1 withCommandBuffer:(id)arg2 ;
-(void)generateTexturesWithSize:(CGSize)arg1 ;
-(void)resetData;
-(void)resetSprings;
-(void)restartAnimation;
-(float)rotationAngleY;
@end

