/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <MetalKit/MTKView.h>
#import <libobjc.A.dylib/JTImageViewRendering.h>

@protocol MTLLibrary, MTLCommandQueue, MTLRenderPipelineState, MTLTexture, MTLSamplerState;
@class MTKTextureLoader, JTImage, NSString;

@interface JTImageMTKView : MTKView <JTImageViewRendering> {

	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _renderPipelineState;
	MTKTextureLoader* _textureLoader;
	id<MTLTexture> _mtlTexture_RGBA;
	id<MTLTexture> _mtlTexture_YUV_Luma;
	id<MTLTexture> _mtlTexture_YUV_Chroma;
	id<MTLSamplerState> _sampler;
	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _texture_RGBA;
	CVBufferRef _texture_YUV_Luma;
	CVBufferRef _texture_YUV_Chroma;
	void* _pixelBufferColorAttachments;
	CGSize _viewSize;
	CGSize _textureSize;
	BOOL _needsUpdateVertices;
	BOOL _needsUpdateTexture;
	SCD_Struct_JT25 _quad;
	BOOL _flipX;
	BOOL _flipY;
	BOOL _enableDebugDrawing;
	JTImage* _jtImage;
	long long _renderingType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) JTImage * jtImage;                      //@synthesize jtImage=_jtImage - In the implementation block
@property (nonatomic,readonly) long long renderingType;              //@synthesize renderingType=_renderingType - In the implementation block
@property (assign,nonatomic) BOOL flipX;                             //@synthesize flipX=_flipX - In the implementation block
@property (assign,nonatomic) BOOL flipY;                             //@synthesize flipY=_flipY - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
+(id)buildSamplerStateWithDevice:(id)arg1 addressMode:(unsigned long long)arg2 filter:(unsigned long long)arg3 ;
+(id)buildRenderPipelineWithLabel:(id)arg1 vertexFunction:(id)arg2 fragmentFunction:(id)arg3 device:(id)arg4 view:(id)arg5 error:(id*)arg6 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateTexture;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(long long)renderingType;
-(void)setJtImage:(JTImage *)arg1 ;
-(void)setRenderingType:(long long)arg1 ;
-(void)updateDebugDrawing;
-(JTImage *)jtImage;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
-(void)cleanupTextures;
-(void)cleanupTextureCache;
-(void)setupTextureCache;
-(void)JTImageMTKView_commonInit;
-(void)configureRenderPipelineForColorAttachments:(void*)arg1 ;
-(void)updateVertices;
@end

