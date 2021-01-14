/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <MetalKit/MTKView.h>
#import <libobjc.A.dylib/JFXImageViewRendering.h>

@protocol MTLLibrary, MTLCommandQueue, MTLRenderPipelineState, MTLTexture, MTLSamplerState;
@class JTImage, MTKTextureLoader, NSString;

@interface JFXImageMTKView : MTKView <JFXImageViewRendering> {

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
	SCD_Struct_JF20 _quad;
	BOOL _flipX;
	BOOL _flipY;
	BOOL _enableDebugDrawing;
	JTImage* _jtImage;
	long long _renderingType;

}

@property (nonatomic,retain) JTImage * jtImage;                      //@synthesize jtImage=_jtImage - In the implementation block
@property (nonatomic,readonly) long long renderingType;              //@synthesize renderingType=_renderingType - In the implementation block
@property (assign,nonatomic) BOOL flipX;                             //@synthesize flipX=_flipX - In the implementation block
@property (assign,nonatomic) BOOL flipY;                             //@synthesize flipY=_flipY - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildSamplerStateWithDevice:(id)arg1 addressMode:(unsigned long long)arg2 filter:(unsigned long long)arg3 ;
+(id)buildRenderPipelineWithLabel:(id)arg1 vertexFunction:(id)arg2 fragmentFunction:(id)arg3 device:(id)arg4 view:(id)arg5 error:(id*)arg6 ;
-(void)updateVertices;
-(void)cleanupTextures;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)updateTexture;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFlipX:(BOOL)arg1 ;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)flipX;
-(void)layoutSubviews;
-(JTImage *)jtImage;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)updateDebugDrawing;
-(void)setJtImage:(JTImage *)arg1 ;
-(void)cleanupTextureCache;
-(BOOL)enableDebugDrawing;
-(id)initWithCoder:(id)arg1 ;
-(void)JFXImageMTKView_commonInit;
-(void)setupTextureCache;
-(long long)renderingType;
-(void)setContentMode:(long long)arg1 ;
-(void)dealloc;
-(void)setRenderingType:(long long)arg1 ;
-(void)configureRenderPipelineForColorAttachments:(void*)arg1 ;
@end

