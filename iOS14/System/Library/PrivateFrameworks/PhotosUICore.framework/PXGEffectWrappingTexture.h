/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>
#import <libobjc.A.dylib/PXGMetalSpriteTexture.h>

@protocol PXGMetalSpriteTexture;
@class PXGColorProgram, PXGImageTexture, NSIndexSet, NSString;

@interface PXGEffectWrappingTexture : PXGImageTexture <PXGMetalSpriteTexture> {

	id<PXGMetalSpriteTexture> _parent;
	PXGImageTexture* _imageTextureParent;

}

@property (nonatomic,retain) id<PXGMetalSpriteTexture> parent;                    //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) PXGImageTexture * imageTextureParent;              //@synthesize imageTextureParent=_imageTextureParent - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex; 
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_reuseTexture:(id)arg1 ;
+(id)_reusableTextures;
+(id)_dequeueTexture;
+(id)createTexture;
-(long long)renderPipelineIndex;
-(void)prepareForRender:(long long)arg1 ;
-(id<MTLTexture>)texture;
-(void)cleanupAfterRender:(long long)arg1 ;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
-(PXGColorProgram *)colorProgram;
-(BOOL)isOpaque;
-(id<PXGMetalSpriteTexture>)parent;
-(CGImageRef)imageRepresentation;
-(long long)estimatedByteSize;
-(void)setParent:(id<PXGMetalSpriteTexture>)arg1 ;
-(id<MTLTexture>)chromaTexture;
-(void)setRenderPipelineIndex:(long long)arg1 ;
-(int)presentationType;
-(CGImageRef)sourceCGImage;
-(CVBufferRef)sourceCVPixelBuffer;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(PXGImageTexture *)imageTextureParent;
-(int)shaderFlags;
-(1)orientationTransform;
-(CGSize)pixelSize;
@end

