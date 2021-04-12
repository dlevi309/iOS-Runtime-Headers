/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxContext : NSObject {

	FxContextPriv* _priv;

}
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextForCGImageWithOptions:(id)arg1 ;
+(id)contextForGLTextureWithOptions:(id)arg1 ;
+(id)contextWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
+(id)contextForCIImageWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)options;
-(void)setOptions:(id)arg1 ;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(int)contextType;
-(id)ciImage;
-(CGImageRef)cgImage;
-(CGContextRef)cgContext;
-(id)initForCGImageWithOptions:(id)arg1 ;
-(id)initForGLTextureWithOptions:(id)arg1 ;
-(id)initWithFxBitmapImage:(id)arg1 options:(id)arg2 ;
-(id)initForCIImageWithOptions:(id)arg1 ;
-(void)setCGImage:(CGImageRef)arg1 ;
-(void)setGLTexture:(unsigned long long)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(unsigned long long)glTexture;
-(CGSize)glTextureSize;
-(BOOL)glTextureIsFlipped;
-(CGColorSpaceRef)glTextureColorSpace;
-(id)derivedCIContext;
-(void)setCIImage:(id)arg1 ;
-(id)bitmap;
-(void)drawFxSample:(id)arg1 withRegionOfInterest:(id)arg2 ;
@end

