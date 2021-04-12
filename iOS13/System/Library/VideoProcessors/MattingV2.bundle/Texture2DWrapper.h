/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


@protocol MTLTexture;
#import <MattingV2/MattingV2-Structs.h>
@interface Texture2DWrapper : NSObject {

	CVBufferRef _pixelBuffer;
	id<MTLTexture> _texture;
	id<MTLTexture> _textureArray;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                   //@synthesize texture=_texture - In the implementation block
@property (nonatomic,retain) id<MTLTexture> textureArray;              //@synthesize textureArray=_textureArray - In the implementation block
-(CVBufferRef)pixelBuffer;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)texture;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)setTextureArray:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)textureArray;
-(unsigned long long)textureFormatOfPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTexture:(id)arg1 textureArray:(BOOL)arg2 ;
-(id)initWithFigMetalContext:(id)arg1 pixelBuffer:(CVBufferRef)arg2 textureArray:(BOOL)arg3 ;
-(id)initNewTextureWithFigMetalContext:(id)arg1 size:(CGSize)arg2 withFormat:(unsigned long long)arg3 textureArray:(BOOL)arg4 ;
-(id)initWithFigMetalContext:(id)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(id)initNewTextureWithFigMetalContext:(id)arg1 size:(CGSize)arg2 withFormat:(unsigned long long)arg3 ;
-(id)initWithFigMetalContext:(id)arg1 copyingPixelBuffer:(CVBufferRef)arg2 ;
@end

