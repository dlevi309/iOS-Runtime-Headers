/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class CUICatalog;

@interface CUINamedVectorGlyph : CUINamedLookup {

	double _pointSize;
	double _lookedupScaleFactor;
	CGImageRef _cgImageRef;
	double _fontMatchingScaleFactor;
	CUICatalog* _catalog;
	long long _layoutDirection;
	unsigned _generatedImage : 1;
	unsigned _flippable : 1;

}

@property (assign,nonatomic) double fontMatchingScaleFactor; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) CGRect alignmentRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) BOOL isFlippable; 
@property (nonatomic,readonly) float templateVersion; 
@property (nonatomic,readonly) double baselineOffsetUnrounded; 
@property (nonatomic,readonly) double capHeightUnrounded; 
@property (nonatomic,readonly) CGRect contentBoundsUnrounded; 
@property (nonatomic,readonly) CGRect alignmentRectUnrounded; 
@property (nonatomic,readonly) unsigned long long numberOfLayers; 
+(id)_colorStyleNames;
+(id)_knockoutStyleNames;
-(id)configuration;
-(id)UIImageWithAsset:(id)arg1 configuration:(id)arg2 flippedHorizontally:(BOOL)arg3 ;
-(CGRect)contentBounds;
-(double)scale;
-(id)debugDescription;
-(CGRect)alignmentRect;
-(CGImageRef)image;
-(double)pointSize;
-(double)capHeight;
-(double)fontMatchingScaleFactor;
-(long long)glyphSize;
-(double)baselineOffset;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(double)referencePointSize;
-(long long)glyphWeight;
-(BOOL)isFlippable;
-(CGImageRef)imageWithColorResolver:(/*^block*/id)arg1 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withColorResolver:(/*^block*/id)arg3 ;
-(id)knownAvailableVectorSizes;
-(CGImageRef)_imageForTemplateRendering:(BOOL)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(float)templateVersion;
-(double)_requestedPointSizeRatio;
-(BOOL)_containsKnockoutStylesFromRendition:(id)arg1 ;
-(void)_prepareDocumentfromRendition:(id)arg1 withColorResolver:(/*^block*/id)arg2 ;
-(id)_fillColorsOfStylesNamed:(id)arg1 inDocument:(CGSVGDocumentRef)arg2 ;
-(void)_performWithLockedRendition:(/*^block*/id)arg1 ;
-(CGColorRef)_fillColorOfStyle:(CGSVGAttributeMapRef)arg1 ;
-(long long)layoutDirection;
-(CGImageRef)_rasterizeFromRendition:(id)arg1 imageUsingScaleFactor:(double)arg2 forTargetSize:(CGSize)arg3 ;
-(void)_setFillColor:(CGColorRef)arg1 ofStyle:(CGSVGAttributeMapRef)arg2 ;
-(CGImageRef)imageTintedWithColors:(id)arg1 ;
-(id)makeLayerTintedWithColors:(id)arg1 ;
-(double)capHeightUnrounded;
-(id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7 ;
-(double)baselineOffsetUnrounded;
-(id)makeLayerWithColorResolver:(/*^block*/id)arg1 ;
-(CGRect)alignmentRectUnrounded;
-(CGRect)contentBoundsUnrounded;
-(CGSVGDocumentRef)referenceGlyph;
-(void)setFontMatchingScaleFactor:(double)arg1 ;
-(BOOL)generatedImage;
-(unsigned long long)numberOfLayers;
-(BOOL)layerAtIndexContainsColor:(unsigned long long)arg1 ;
-(CGImageRef)maskForLayerAtIndex:(unsigned long long)arg1 ;
-(CGImageRef)imageTintedWithColor:(CGColorRef)arg1 ;
-(id)makeLayerTintedWithColor:(CGColorRef)arg1 ;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 withTintColors:(id)arg3 ;
-(void)dealloc;
@end

