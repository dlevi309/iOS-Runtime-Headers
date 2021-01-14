/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorGlyph, _UIImageContent;

@interface _UIImageCUIVectorGlyphContent : _UIImageCGImageContent {

	CUINamedVectorGlyph* _vectorGlyph;
	_UIImageContent* _vectorContent;
	double _glyphScaleFactor;
	double _vectorScale;
	CGSize _sizeInPixels;

}

@property (assign,nonatomic) double glyphScaleFactor;              //@synthesize glyphScaleFactor=_glyphScaleFactor - In the implementation block
-(CGSize)sizeInPixels;
-(id)vectorGlyph;
-(void)setGlyphScaleFactor:(double)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)description;
-(BOOL)isVectorGlyph;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorGlyph:(id)arg2 scale:(double)arg3 ;
-(unsigned long long)hash;
-(double)glyphScaleFactor;
-(BOOL)_canProvideCGImageDirectly;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)vectorScale;
@end

