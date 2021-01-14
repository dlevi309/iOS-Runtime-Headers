/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXGColorProgram;


@protocol PXGMetalSpriteTexture <PXGSpriteTexture>
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex; 
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@required
-(long long)renderPipelineIndex;
-(void)prepareForRender:(long long)arg1;
-(id<MTLTexture>)texture;
-(void)cleanupAfterRender:(long long)arg1;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7;
-(PXGColorProgram *)colorProgram;
-(id<MTLTexture>)chromaTexture;
-(void)setRenderPipelineIndex:(long long)arg1;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(int)shaderFlags;

@end

