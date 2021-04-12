/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface TDreamFramebuffer : NSObject {

	BOOL _ownsTexture;
	BOOL _ownsFBO;
	CVOpenGLESTextureCacheRef _textureCache;
	BOOL _validLUT;
	unsigned _texture;
	unsigned _framebuffer;
	CGSize _size;

}

@property (readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned texture;                  //@synthesize texture=_texture - In the implementation block
@property (readonly) unsigned framebuffer;              //@synthesize framebuffer=_framebuffer - In the implementation block
@property (readonly) BOOL validLUT;                     //@synthesize validLUT=_validLUT - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(unsigned)texture;
-(id)initWithSize:(CGSize)arg1 ;
-(unsigned)framebuffer;
-(id)initWithTexName:(id)arg1 ;
-(BOOL)validLUT;
-(id)initWithExistingImageTexture:(IPImage)arg1 ;
-(void)generateFramebuffer;
-(void)generateFramebufferTex:(id)arg1 ;
@end

