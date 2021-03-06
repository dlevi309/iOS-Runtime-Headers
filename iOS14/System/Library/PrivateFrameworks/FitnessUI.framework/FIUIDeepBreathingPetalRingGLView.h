/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <HealthKitUI/HKGLView.h>
#import <libobjc.A.dylib/FIUIBreathingPetalRingViewDrawable.h>

@protocol FIUIDeepBreathingPetalRingViewDelegate;
@class GLKTextureInfo, UIView, NSString;

@interface FIUIDeepBreathingPetalRingGLView : HKGLView <FIUIBreathingPetalRingViewDrawable> {

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
	SCD_Struct_FI5 _circleProperties;
	GLKTextureInfo* _texture;
	BOOL _showBlurTrails;
	float _ringRadius;
	id<FIUIDeepBreathingPetalRingViewDelegate> _petalRingDelegate;
	long long _numberOfPetals;
	long long _numberOfVisiblePetals;
	CGPoint _ringCenter;

}

@property (assign,nonatomic,__weak) id<FIUIDeepBreathingPetalRingViewDelegate> petalRingDelegate;              //@synthesize petalRingDelegate=_petalRingDelegate - In the implementation block
@property (assign,nonatomic) CGPoint ringCenter;                                                               //@synthesize ringCenter=_ringCenter - In the implementation block
@property (assign,nonatomic) float ringRadius;                                                                 //@synthesize ringRadius=_ringRadius - In the implementation block
@property (nonatomic,readonly) long long numberOfPetals;                                                       //@synthesize numberOfPetals=_numberOfPetals - In the implementation block
@property (nonatomic,readonly) long long numberOfVisiblePetals;                                                //@synthesize numberOfVisiblePetals=_numberOfVisiblePetals - In the implementation block
@property (nonatomic,readonly) BOOL showBlurTrails;                                                            //@synthesize showBlurTrails=_showBlurTrails - In the implementation block
@property (assign,nonatomic) float preferredFramesPerSecond; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_teardown;
-(void)update;
-(UIView *)view;
-(void)dealloc;
-(unsigned)drawInRect:(CGRect)arg1 withContext:(id)arg2 ;
-(void)setRingRadius:(float)arg1 ;
-(float)ringRadius;
-(void)_context_createBuffers;
-(void)_context_setupScene;
-(id<FIUIDeepBreathingPetalRingViewDelegate>)petalRingDelegate;
-(void)setRingCenter:(CGPoint)arg1 ;
-(CGPoint)ringCenter;
-(long long)numberOfVisiblePetals;
-(void)setPetalAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4 ;
-(void)setBlurTrailAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5 ;
-(void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(BOOL)arg2 ;
-(void)setGradientRotationAngle:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3 device:(id)arg4 ;
-(void)importDataFromPetalRing:(id)arg1 ;
-(void)setPetalRingDelegate:(id<FIUIDeepBreathingPetalRingViewDelegate>)arg1 ;
-(long long)numberOfPetals;
-(BOOL)showBlurTrails;
-(void)_context_loadShadersWithNumberOfPetals:(long long)arg1 showBlurTrails:(BOOL)arg2 ;
-(void)_context_findUniformsAndAttributes;
-(void)_context_applyInitialState;
-(id)initWithFrame:(CGRect)arg1 numberOfPetals:(long long)arg2 showBlurTrails:(BOOL)arg3 ;
-(double)_maxPetalRingRadius;
-(void)_updateVertices;
-(void)_setCircleAtIndex:(long long)arg1 center:(CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5 ;
-(void)_clearCirclesInRange:(NSRange)arg1 ;
@end

