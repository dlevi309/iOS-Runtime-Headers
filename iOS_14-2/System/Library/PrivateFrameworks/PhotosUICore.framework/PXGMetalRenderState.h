/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol MTLDevice, MTLBuffer;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGMetalRenderPassState, NSArray;

@interface PXGMetalRenderState : NSObject {

	SCD_Struct_PX52 _uniforms;
	long long _shaderFlagsByEffectIdCount;
	long long _shaderFlagsByEffectIdCapacity;
	id<MTLDevice> _device;
	const SCD_Struct_PX15* _spriteInfos;
	const SCD_Struct_PX11* _originalSpriteGeometries;
	int* _shaderFlagsByEffectId;
	PXGMetalRenderPassState* _currentRenderPassState;
	NSArray* _textures;
	NSArray* _captureSpriteTextures;
	id<MTLBuffer> _spriteGeometriesBuffer;
	id<MTLBuffer> _spriteStylesBuffer;
	id<MTLBuffer> _resizableCapInsetsBuffer;
	id<MTLBuffer> _effectDataBuffer;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX36* uniforms; 
@property (assign,nonatomic) const SCD_Struct_PX15* spriteInfos;                              //@synthesize spriteInfos=_spriteInfos - In the implementation block
@property (assign,nonatomic) const SCD_Struct_PX11* originalSpriteGeometries;                 //@synthesize originalSpriteGeometries=_originalSpriteGeometries - In the implementation block
@property (nonatomic,readonly) int* shaderFlagsByEffectId;                                    //@synthesize shaderFlagsByEffectId=_shaderFlagsByEffectId - In the implementation block
@property (nonatomic,readonly) PXGMetalRenderPassState * currentRenderPassState;              //@synthesize currentRenderPassState=_currentRenderPassState - In the implementation block
@property (nonatomic,retain) NSArray * textures;                                              //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSArray * captureSpriteTextures;                                 //@synthesize captureSpriteTextures=_captureSpriteTextures - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_PX53* spriteGeometries; 
@property (nonatomic,readonly) const SCD_Struct_PX14* spriteStyles; 
@property (nonatomic,readonly) id<MTLBuffer> spriteGeometriesBuffer;                          //@synthesize spriteGeometriesBuffer=_spriteGeometriesBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> spriteStylesBuffer;                              //@synthesize spriteStylesBuffer=_spriteStylesBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> resizableCapInsetsBuffer;                        //@synthesize resizableCapInsetsBuffer=_resizableCapInsetsBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> effectDataBuffer;                                //@synthesize effectDataBuffer=_effectDataBuffer - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)setTextures:(NSArray *)arg1 ;
-(NSArray *)textures;
-(const SCD_Struct_PX53*)spriteGeometries;
-(int*)shaderFlagsByEffectId;
-(id<MTLBuffer>)resizableCapInsetsBuffer;
-(void)setSpriteInfos:(const SCD_Struct_PX15*)arg1 ;
-(const SCD_Struct_PX11*)originalSpriteGeometries;
-(const SCD_Struct_PX14*)spriteStyles;
-(void)prepareForReuse;
-(void)setCaptureSpriteTextures:(NSArray *)arg1 ;
-(const SCD_Struct_PX15*)spriteInfos;
-(id<MTLDevice>)device;
-(void)_setShaderFlagsByEffectId:(const int*)arg1 withCount:(long long)arg2 ;
-(void)prepareForCommit;
-(id<MTLBuffer>)effectDataBuffer;
-(NSArray *)captureSpriteTextures;
-(id)description;
-(id)renderPassStateForSpriteCount:(long long)arg1 ;
-(SCD_Struct_PX54*)effectDataBufferWithCount:(long long)arg1 ;
-(void)setOriginalSpriteGeometries:(const SCD_Struct_PX11*)arg1 ;
-(void)setEffectData:(const SCD_Struct_PX54*)arg1 shaderFlags:(const int*)arg2 withCount:(long long)arg3 ;
-(id<MTLBuffer>)spriteGeometriesBuffer;
-(PXGMetalRenderPassState *)currentRenderPassState;
-(SCD_Struct_PX36*)uniforms;
-(SCD_Struct_PX14*)spriteStylesBufferWithCount:(long long)arg1 ;
-(SCD_Struct_PX53*)spriteGeometriesBufferWithCount:(long long)arg1 ;
-(id<MTLBuffer>)spriteStylesBuffer;
-(id)_resizedBufferIfNeeded:(id)arg1 neededLength:(long long)arg2 ;
-(void)dealloc;
-(SCD_Struct_PX12*)resizableCapInsetsBufferWithCount:(long long)arg1 ;
@end

