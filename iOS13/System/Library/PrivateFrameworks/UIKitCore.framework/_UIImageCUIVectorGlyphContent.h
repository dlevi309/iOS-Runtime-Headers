/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) CUINamedVectorGlyph * _vectorGlyph; 
@property (assign,nonatomic) double glyphScaleFactor;                 //@synthesize glyphScaleFactor=_glyphScaleFactor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(double)vectorScale;
-(CGSize)sizeInPixels;
-(BOOL)_canProvideCGImageDirectly;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isVectorGlyph;
-(id)vectorGlyph;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorGlyph:(id)arg2 scale:(double)arg3 ;
-(CUINamedVectorGlyph *)_vectorGlyph;
-(double)glyphScaleFactor;
-(void)setGlyphScaleFactor:(double)arg1 ;
@end

