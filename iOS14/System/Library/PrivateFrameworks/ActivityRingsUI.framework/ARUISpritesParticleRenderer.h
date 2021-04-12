/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLBuffer;
@class ARUISpriteParticleRenderState;

@interface ARUISpritesParticleRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	id<MTLBuffer> _vertexAttributesBuffer;
	id<MTLBuffer> _uniformsBuffer;
	ARUISpriteParticleRenderState* _spriteRenderState;
	unsigned long long _bufferSize;

}
-(void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 ;
-(void)_sharedInitWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 bufferSize:(unsigned long long)arg3 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 bufferSize:(unsigned long long)arg3 ;
@end

