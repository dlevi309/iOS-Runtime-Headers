/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKMetalRenderLoopDelegate.h>
#import <libobjc.A.dylib/PKMotionManagerClientProtocol.h>

@protocol MTLCommandQueue, MTLTexture, MTLRenderPipelineState, MTLBuffer;
@class PKMetalRenderLoop, MTLRenderPassDescriptor, MPSUnaryImageKernel, NSArray, NSSet, NSString;

@interface PKCategoryVisualizationCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol> {

	PKMetalRenderLoop* _renderLoop;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	MTLRenderPassDescriptor* _secondRenderPassDescriptor;
	unsigned long long _drawableWidth;
	unsigned long long _drawableHeight;
	id<MTLCommandQueue> _commandQueue;
	id<MTLTexture> _texture;
	id<MTLTexture> _overlayTexture;
	id<MTLTexture> _overlayNormalTexture;
	id<MTLRenderPipelineState> _overlayPipelineState;
	id<MTLRenderPipelineState> _circlePipelineState;
	id<MTLRenderPipelineState> _circleOutlinePipelineState;
	id<MTLBuffer> _vertexCoordsBuffer;
	id<MTLBuffer> _textureCoordsBuffer;
	id<MTLBuffer> _circleUniformsBuffer;
	id<MTLBuffer> _circleDataBuffer;
	id<MTLBuffer> _singleCircleDataBuffer;
	MPSUnaryImageKernel* _blurShader;
	BOOL _hasPendingUpdate;
	long long _pendingUpdateStyle;
	BOOL _invalidated;
	BOOL _effectivePaused;
	BOOL _needsDraw;
	BOOL _emptying;
	SCD_Struct_PK9* _state;
	BOOL _motionEnabled;
	BOOL _paused;
	BOOL _blurDisabled;
	NSArray* _bucketColors;
	NSSet* _magnitudes;

}

@property (nonatomic,copy) NSArray * bucketColors;                                   //@synthesize bucketColors=_bucketColors - In the implementation block
@property (nonatomic,copy,readonly) NSSet * magnitudes;                              //@synthesize magnitudes=_magnitudes - In the implementation block
@property (assign,getter=isMotionEnabled,nonatomic) BOOL motionEnabled;              //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                            //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isBlurDisabled,nonatomic) BOOL blurDisabled;                //@synthesize blurDisabled=_blurDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_empty;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isMotionEnabled;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)renderLoop:(id)arg1 drawAtTime:(double)arg2 ;
-(void)_updatePausedState;
-(BOOL)isBlurDisabled;
-(void)invalidate;
-(BOOL)isPaused;
-(void)dealloc;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setBucketColors:(NSArray *)arg1 ;
-(void)renderWithTextures:(id)arg1 rendererState:(id)arg2 ;
-(void)setMagnitudes:(id)arg1 withStyle:(long long)arg2 ;
-(id)rendererState;
-(void)_startMotionUpdates;
-(void)_stopMotionUpdates;
-(void)motionManager:(id)arg1 didReceiveMotion:(id)arg2 ;
-(void)renderLoop:(id)arg1 drawableSizeDidChange:(CGSize)arg2 ;
-(void)_createMetalResourcesWithTextures:(id)arg1 ;
-(void)_updateCircles;
-(void)_updateTextureAndBlurShader;
-(void)_updateRenderPassDescriptorWithDrawable:(id)arg1 ;
-(void)_calculateNewCirclePositions;
-(NSArray *)bucketColors;
-(NSSet *)magnitudes;
@end

