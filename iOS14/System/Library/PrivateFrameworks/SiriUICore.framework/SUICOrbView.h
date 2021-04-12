/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MTLDevice, MTLCommandQueue, MTLBuffer, MTLRenderPipelineState, MTLTexture;
@class CAMetalLayer, CADisplayLink, MTLRenderPassDescriptor, MPSImageGaussianBlur, NSTimer;

@interface SUICOrbView : UIView {

	CAMetalLayer* _metalLayer;
	CADisplayLink* _displayLink;
	/*^block*/id _offCompletion;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLBuffer> _dynamicUniformBuffer;
	id<MTLRenderPipelineState> _siriChipBackfacePipeline;
	id<MTLRenderPipelineState> _siriChipFrontfacePipeline;
	id<MTLRenderPipelineState> _siriShadowPipeline;
	id<MTLRenderPipelineState> _siriCompositePipeline;
	id<MTLRenderPipelineState> _sphereMaskPipeline;
	id<MTLRenderPipelineState> _siriAddBlitPipeline;
	id<MTLTexture> _siriChipsTexture;
	id<MTLTexture> _sphereMaskTexture;
	id<MTLTexture> _siriChipsTextureMSAA;
	id<MTLTexture> _sphereMaskTextureMSAA;
	id<MTLTexture> _compositeTextureMSAA;
	id<MTLTexture> _blurChipsTexture;
	id<MTLTexture> _blurMaskTexture;
	id<MTLTexture> _smoothStepTexture;
	id<MTLTexture> _noiseTexture;
	MTLRenderPassDescriptor* _siriChipRenderPassDesc;
	MTLRenderPassDescriptor* _sphereMaskRenderPassDesc;
	MTLRenderPassDescriptor* _finalRenderPassDesc;
	MPSImageGaussianBlur* _mpsBlur;
	SCD_Struct_SU6 _mpsChipBlurOffset;
	id<MTLBuffer> _siriChipGeom;
	int _chipNumIndexes;
	int _chipIndexBufferOffset;
	id<MTLBuffer> _sphereGeom;
	int _sphereNumIndexes;
	int _sphereIndexBufferOffet;
	void* _uniformBufferAddress;
	SCD_Struct_SU7 _projectionMatrix;
	SCD_Struct_SU8 _sphereUniforms;
	SCD_Struct_SU9 _bubbleSpring;
	SCD_Struct_SU9 _energySpring;
	SCD_Struct_SU9 _volumeSpring;
	SCD_Struct_SU9 _chipsSpring;
	SCD_Struct_SU9 _specularSpring;
	SCD_Struct_SU9 _thinkingSpring;
	SCD_Struct_SU9 _speakingSpring;
	SCD_Struct_SU9 _glowSpring;
	SCD_Struct_SU9 _onSpring;
	SCD_Struct_SU9 _chipSpring[6];
	 _setupRasterSize;
	float _bubbleDrawnSize;
	float _averageChipSize;
	float _maxChipSize;
	float _chipRotation;
	float _chipRandomOffset[18];
	float _time;
	float _thinkRotation;
	float _framerateEnergyModifier;
	float _thinkingTimeStart;
	BOOL _startingThinkingModeNow;
	BOOL _drawingVeryLastFrame;
	BOOL _resetOnNextFrame;
	BOOL _reduceMotion;
	float _powerLevel;
	unsigned long long _framerateType;
	int _framesPerSecond;
	int _currentlyShownChannel;
	int _numberOfChips;
	float _bias;
	float _scale;
	float _power;
	long long _mode;
	NSTimer* _invalidateTimer;

}

@property (assign,nonatomic) int currentlyShownChannel;              //@synthesize currentlyShownChannel=_currentlyShownChannel - In the implementation block
@property (assign,nonatomic) int numberOfChips;                      //@synthesize numberOfChips=_numberOfChips - In the implementation block
@property (assign,nonatomic) float bias;                             //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float power;                            //@synthesize power=_power - In the implementation block
@property (nonatomic,retain) NSTimer * invalidateTimer;              //@synthesize invalidateTimer=_invalidateTimer - In the implementation block
@property (assign,nonatomic) long long mode;                         //@synthesize mode=_mode - In the implementation block
+(Class)layerClass;
-(float)bias;
-(long long)mode;
-(void)_setMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)scale;
-(void)setPowerLevel:(float)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)_invalidateDisplayLink;
-(void)_loadAssets;
-(void)setFrame:(CGRect)arg1 ;
-(float)power;
-(void)setBias:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)invalidate;
-(void)setPower:(float)arg1 ;
-(id)_from:(id)arg1 getRenderPipeline:(id)arg2 err:(id*)arg3 ;
-(NSTimer *)invalidateTimer;
-(void)_setupSpring:(SCD_Struct_SU9*)arg1 withType:(unsigned long long)arg2 initialValue:(float)arg3 ;
-(void)_initCommandQueue;
-(void)_loadMetalPipelines;
-(void)_loadMetalState;
-(void)_updateMetalTextureRasterSize:(CGSize)arg1 ;
-(void)_drawSiriFrame:(id)arg1 ;
-(void)_initSprings;
-(void)_initNoiseOffsets;
-(void)_didSetModeFrom:(long long)arg1 to:(long long)arg2 ;
-(void)_createSphereBuffer;
-(void)_createSiriChipBuffer;
-(void)_createSmoothStepTexture;
-(void)_createNoiseTexture;
-(void)_updateChipsSizesForOnOff;
-(void)_updateDynamicBufferState;
-(void)_updateSiriGraphicsState;
-(void)pauseAnimationAndReset;
-(void)animateToOffWithCompletion:(/*^block*/id)arg1 ;
-(void)prewarmOrb;
-(id)_from:(id)arg1 getComputePipeline:(id)arg2 err:(id*)arg3 ;
-(void)setNumberOfChips:(int)arg1 ;
-(void)setCurrentlyShownChannel:(int)arg1 ;
-(float)linearPowerLevel;
-(int)currentlyShownChannel;
-(int)numberOfChips;
-(void)setInvalidateTimer:(NSTimer *)arg1 ;
@end

