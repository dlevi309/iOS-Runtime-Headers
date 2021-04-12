/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <HealthKitUI/HKGLView.h>

@protocol FIUIDeepBreathingPetalRingGLViewDelegate;
@class GLKTextureInfo;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView {

	unsigned _program;
	 _ringCenterVector;
	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	SCD_Struct_FI4 _vertices[25];
	unsigned _indices[72];
	unsigned _projectionMatrixUniform;
	unsigned _textureSamplerUniform;
	unsigned _petalPositionUniform;
	unsigned _petalPropertiesUniform;
	unsigned _textureRotationUniform;
	GLKTextureInfo* _texture;
	[20 _circlePosition];
	[20 _circleProperties];
	 _textureRotationVector;
	BOOL _showBlurTrails;
	float _ringRadius;
	id<FIUIDeepBreathingPetalRingGLViewDelegate> _petalRingDelegate;
	long long _numberOfPetals;
	long long _numberOfVisiblePetals;
	CGPoint _ringCenter;

}

@property (assign,nonatomic,__weak) id<FIUIDeepBreathingPetalRingGLViewDelegate> petalRingDelegate;              //@synthesize petalRingDelegate=_petalRingDelegate - In the implementation block
@property (assign,nonatomic) CGPoint ringCenter;                                                                 //@synthesize ringCenter=_ringCenter - In the implementation block
@property (assign,nonatomic) float ringRadius;                                                                   //@synthesize ringRadius=_ringRadius - In the implementation block
@property (nonatomic,readonly) long long numberOfPetals;                                                         //@synthesize numberOfPetals=_numberOfPetals - In the implementation block
@property (nonatomic,readonly) long long numberOfVisiblePetals;                                                  //@synthesize numberOfVisiblePetals=_numberOfVisiblePetals - In the implementation block
@property (nonatomic,readonly) BOOL showBlurTrails;                                                              //@synthesize showBlurTrails=_showBlurTrails - In the implementation block
-(void)dealloc;
-(void)update;
-(void)_teardown;
-(void)setRingRadius:(float)arg1 ;
-(float)ringRadius;
-(unsigned)drawInRect:(CGRect)arg1 withContext:(id)arg2 ;
-(void)_context_createBuffers;
-(void)_context_setupScene;
-(id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3 ;
-(void)setPetalRingDelegate:(id<FIUIDeepBreathingPetalRingGLViewDelegate>)arg1 ;
-(void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2 ;
-(long long)numberOfPetals;
-(BOOL)showBlurTrails;
-(void)importDataFromPetalRing:(id)arg1 ;
-(void)setGradientRotationAngle:(float)arg1 ;
-(void)setRingCenter:(CGPoint)arg1 ;
-(void)setPetalAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4 ;
-(void)setBlurTrailAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5 ;
-(void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(BOOL)arg2 ;
-(void)_context_findUniformsAndAttributes;
-(void)_context_applyInitialState;
-(double)_maxPetalRingRadius;
-(void)_updateVertices;
-(void)_setCircleAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5 ;
-(void)_clearCirclesInRange:(NSRange)arg1 ;
-(id<FIUIDeepBreathingPetalRingGLViewDelegate>)petalRingDelegate;
-(CGPoint)ringCenter;
-(long long)numberOfVisiblePetals;
@end

