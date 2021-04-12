/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, NSString, UIImage, NSData;

@interface UIKBRenderer : NSObject {

	CGContextRef _cachingContext;
	/*^block*/id _cachingContextCompletion;
	long long _forceColorFormat;
	UIColor* _singleColor;
	int _colorCount;
	BOOL _opaque;
	BOOL _colorDetectMode;
	BOOL _disableInternalCaching;
	CGContextRef _ctx;
	double _scale;
	long long _renderFlags;
	NSString* _cacheKey;
	UIImage* _renderedImage;
	long long _contentColorFormat;
	long long _assetIdiom;
	CGSize _size;

}

@property (nonatomic,readonly) CGContextRef context;                      //@synthesize ctx=_ctx - In the implementation block
@property (nonatomic,readonly) NSData * contextData; 
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL opaque;                               //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,readonly) long long renderFlags;                     //@synthesize renderFlags=_renderFlags - In the implementation block
@property (nonatomic,readonly) UIImage * renderedImage;                   //@synthesize renderedImage=_renderedImage - In the implementation block
@property (nonatomic,readonly) long long contentColorFormat;              //@synthesize contentColorFormat=_contentColorFormat - In the implementation block
@property (nonatomic,readonly) UIColor * singleColor; 
@property (nonatomic,retain) NSString * cacheKey;                         //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) BOOL colorDetectMode;                        //@synthesize colorDetectMode=_colorDetectMode - In the implementation block
@property (assign,nonatomic) BOOL disableInternalCaching;                 //@synthesize disableInternalCaching=_disableInternalCaching - In the implementation block
@property (nonatomic,readonly) long long assetIdiom;                      //@synthesize assetIdiom=_assetIdiom - In the implementation block
+(id)rendererWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6 ;
+(CGContextRef)imageContextWithSize:(CGSize)arg1 scale:(double)arg2 colorFormat:(long long)arg3 opaque:(BOOL)arg4 invert:(BOOL)arg5 ;
+(void)clearInternalCaches;
-(void)dealloc;
-(id)description;
-(CGSize)size;
-(CGContextRef)context;
-(double)scale;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSData *)contextData;
-(BOOL)opaque;
-(void)setDisableInternalCaching:(BOOL)arg1 ;
-(void)renderBackgroundTraits:(id)arg1 ;
-(UIImage *)renderedImage;
-(long long)renderFlags;
-(BOOL)loadCachedImageForHashString:(id)arg1 ;
-(void)renderKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(void)renderNullEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderShadowEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderDivotEffect:(id)arg1 withTraits:(id)arg2 ;
-(id)initWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6 ;
-(UIColor *)singleColor;
-(void)_addDetectedColor:(CGColorRef)arg1 ;
-(void)detectColorsForNamedColor:(id)arg1 ;
-(void)detectColorsForGradient:(id)arg1 ;
-(void)ensureContext;
-(void)detectColorsForEffect:(id)arg1 ;
-(void)addPathForTraits:(id)arg1 displayRect:(CGRect*)arg2 ;
-(void)addPathForFlickGeometry:(id)arg1 ;
-(void)addRoundRect:(CGRect)arg1 radius:(double)arg2 corners:(unsigned long long)arg3 ;
-(void)addPathForRenderGeometry:(id)arg1 ;
-(void)_drawLinearGradient:(id)arg1 inRect:(CGRect)arg2 ;
-(BOOL)disableInternalCaching;
-(long long)contentColorFormat;
-(void)_completeCacheImageWithTraitsIfNecessary:(id)arg1 ;
-(void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2 ;
-(unsigned long long)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3 ;
-(unsigned long long)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3 ;
-(BOOL)renderKeyPathContents:(id)arg1 withTraits:(id)arg2 ;
-(void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(long long)assetIdiom;
-(void)_drawKeyImage:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 force1xImages:(BOOL)arg4 flipHorizontally:(BOOL)arg5 ;
-(BOOL)_drawSingleSymbol:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(BOOL)_drawKeyString:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(CGPathRef)_thickShiftGlyphPath;
-(CGPathRef)_thinShiftGlyphPath;
-(CGPathRef)_deleteGlyphPaths;
-(void)drawPath:(CGPathRef)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 fill:(BOOL)arg5 ;
-(void)drawShiftPath:(BOOL)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 ;
-(void)addPathForFlickPopupGeometries:(id)arg1 ;
-(void)addPathForSplitGeometry:(id)arg1 ;
-(id)pathForRenderGeometry:(id)arg1 ;
-(id)pathForFlickGeometry:(id)arg1 ;
-(id)pathForFlickPopupGeometries:(id)arg1 ;
-(id)pathForSplitGeometry:(id)arg1 ;
-(id)pathForConcaveCornerWithGeometry:(id)arg1 ;
-(id)pathForFlickWidth:(double)arg1 height:(double)arg2 handleLength:(double)arg3 keyMiddle:(CGPoint)arg4 angle:(double)arg5 ;
-(void)forceColorFormat:(long long)arg1 ;
-(BOOL)colorDetectMode;
-(void)setColorDetectMode:(BOOL)arg1 ;
@end

