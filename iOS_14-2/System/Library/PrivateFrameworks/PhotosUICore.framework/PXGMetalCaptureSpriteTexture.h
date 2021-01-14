/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGPayloadTexture.h>
#import <libobjc.A.dylib/PXGMetalSpriteTexture.h>

@protocol MTLTexture;
@class PXGCaptureSpritePayload, PXGColorProgram, NSIndexSet, NSString;

@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture <PXGMetalSpriteTexture> {

	long long _renderPipelineIndex;
	id<MTLTexture> _texture;
	const SCD_Struct_PX53* _spriteGeometries;
	CGRect _captureRect;

}

@property (nonatomic,copy,readonly) PXGCaptureSpritePayload * payload; 
@property (assign,nonatomic) CGRect captureRect;                                    //@synthesize captureRect=_captureRect - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                                //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) const SCD_Struct_PX53* spriteGeometries;               //@synthesize spriteGeometries=_spriteGeometries - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex;                         //@synthesize renderPipelineIndex=_renderPipelineIndex - In the implementation block
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
-(long long)renderPipelineIndex;
-(void)prepareForRender:(long long)arg1 ;
-(id<MTLTexture>)texture;
-(void)cleanupAfterRender:(long long)arg1 ;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX106*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
-(const SCD_Struct_PX53*)spriteGeometries;
-(PXGColorProgram *)colorProgram;
-(BOOL)isOpaque;
-(CGRect)captureRect;
-(id)initWithPayload:(id)arg1 presentationType:(int)arg2 ;
-(void)setCaptureRect:(CGRect)arg1 ;
-(PXGCaptureSpritePayload *)payload;
-(id<MTLTexture>)chromaTexture;
-(void)setRenderPipelineIndex:(long long)arg1 ;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(int)shaderFlags;
-(void)setSpriteGeometries:(const SCD_Struct_PX53*)arg1 ;
@end

