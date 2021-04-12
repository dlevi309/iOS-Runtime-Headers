/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned _generatedImage : 1;

}

@property (assign,nonatomic) double fontMatchingScaleFactor; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) CGRect alignmentRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) BOOL isFlippable; 
-(id)configuration;
-(id)UIImageWithAsset:(id)arg1 configuration:(id)arg2 flippedHorizontally:(BOOL)arg3 ;
-(void)dealloc;
-(double)scale;
-(CGImageRef)image;
-(double)pointSize;
-(double)baselineOffset;
-(double)capHeight;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(double)referencePointSize;
-(CGRect)alignmentRect;
-(long long)glyphSize;
-(long long)glyphWeight;
-(CGRect)contentBounds;
-(BOOL)isFlippable;
-(id)knownAvailableVectorSizes;
-(double)fontMatchingScaleFactor;
-(double)_requestedPointSizeRatio;
-(id)initWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 pointSize:(double)arg4 fromCatalog:(id)arg5 usingRenditionKey:(id)arg6 fromTheme:(unsigned long long)arg7 ;
-(CGSVGDocumentRef)referenceGlyph;
-(void)setFontMatchingScaleFactor:(double)arg1 ;
-(BOOL)generatedImage;
@end

