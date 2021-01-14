/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>
#import <libobjc.A.dylib/PXGMetalSpriteTexture.h>

@protocol MTLTexture;
@class PXGColorProgram, NSIndexSet, NSString;

@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture> {

	BOOL _isOpaque;
	int _shaderFlags;
	id<MTLTexture> _texture;
	id<MTLTexture> _chromaTexture;
	PXGColorProgram* _colorProgram;
	long long _renderPipelineIndex;
	 _orientationTransform;

}

@property (nonatomic,readonly) id<MTLTexture> texture;                      //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> chromaTexture;                //@synthesize chromaTexture=_chromaTexture - In the implementation block
@property (nonatomic,readonly) PXGColorProgram * colorProgram;              //@synthesize colorProgram=_colorProgram - In the implementation block
@property (assign,nonatomic) long long renderPipelineIndex;                 //@synthesize renderPipelineIndex=_renderPipelineIndex - In the implementation block
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags;                             //@synthesize shaderFlags=_shaderFlags - In the implementation block
@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque;                               //@synthesize isOpaque=_isOpaque - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)renderPipelineIndex;
-(void)prepareForRender:(long long)arg1 ;
-(id<MTLTexture>)texture;
-(void)cleanupAfterRender:(long long)arg1 ;
-(PXGColorProgram *)colorProgram;
-(BOOL)isOpaque;
-(id)init;
-(long long)estimatedByteSize;
-(id)initWithTexture:(id)arg1 colorProgram:(id)arg2 isOpaque:(BOOL)arg3 shaderFlags:(int)arg4 ;
-(id<MTLTexture>)chromaTexture;
-(void)setRenderPipelineIndex:(long long)arg1 ;
-(NSString *)description;
-(int)presentationType;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(int)shaderFlags;
-(id)initWithTexture:(id)arg1 chromaTexture:(id)arg2 colorProgram:(id)arg3 isOpaque:(BOOL)arg4 shaderFlags:(int)arg5 ;
-(1)orientationTransform;
-(CGSize)pixelSize;
@end

