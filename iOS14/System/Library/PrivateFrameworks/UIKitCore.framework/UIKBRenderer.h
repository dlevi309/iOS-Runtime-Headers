/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	double __layerRoundRectRadius;
	CGSize _size;
	CGRect __layerPaddedFrame;

}

@property (assign,nonatomic) CGRect _layerPaddedFrame;                    //@synthesize _layerPaddedFrame=__layerPaddedFrame - In the implementation block
@property (assign,nonatomic) double _layerRoundRectRadius;                //@synthesize _layerRoundRectRadius=__layerRoundRectRadius - In the implementation block
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
+(void)clearInternalCaches;
+(CGContextRef)imageContextWithSize:(CGSize)arg1 scale:(double)arg2 colorFormat:(long long)arg3 opaque:(BOOL)arg4 invert:(BOOL)arg5 ;
+(id)rendererWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6 ;
-(BOOL)opaque;
-(long long)renderFlags;
-(NSString *)cacheKey;
-(long long)assetIdiom;
-(void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(void)setDisableInternalCaching:(BOOL)arg1 ;
-(NSData *)contextData;
-(void)addPathForFlickGeometry:(id)arg1 ;
-(CGPathRef)_deleteGlyphPaths;
-(void)set_layerPaddedFrame:(CGRect)arg1 ;
-(UIImage *)renderedImage;
-(void)setColorDetectMode:(BOOL)arg1 ;
-(id)pathForFlickGeometry:(id)arg1 ;
-(CGSize)size;
-(void)drawShiftPath:(BOOL)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 ;
-(CGPathRef)_thinShiftGlyphPath;
-(double)scale;
-(CGRect)_layerPaddedFrame;
-(void)_addDetectedColor:(CGColorRef)arg1 ;
-(CGContextRef)context;
-(unsigned long long)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3 ;
-(BOOL)_drawSingleSymbol:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(void)detectColorsForNamedColor:(id)arg1 ;
-(BOOL)_drawKeyString:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 ;
-(id)pathForFlickPopupGeometries:(id)arg1 ;
-(void)_drawLinearGradient:(id)arg1 inRect:(CGRect)arg2 ;
-(void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)drawPath:(CGPathRef)arg1 weight:(double)arg2 transform:(CGAffineTransform)arg3 color:(CGColorRef)arg4 fill:(BOOL)arg5 ;
-(void)detectColorsForEffect:(id)arg1 ;
-(void)_completeCacheImageWithTraitsIfNecessary:(id)arg1 ;
-(unsigned long long)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3 ;
-(BOOL)loadCachedImageForHashString:(id)arg1 ;
-(id)description;
-(void)set_layerRoundRectRadius:(double)arg1 ;
-(void)addPathForSplitGeometry:(id)arg1 ;
-(BOOL)disableInternalCaching;
-(void)addPathForFlickPopupGeometries:(id)arg1 ;
-(id)initWithContext:(CGContextRef)arg1 withSize:(CGSize)arg2 withScale:(double)arg3 opaque:(BOOL)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6 ;
-(void)renderNullEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)renderBackgroundTraits:(id)arg1 ;
-(id)pathForConcaveCornerWithGeometry:(id)arg1 ;
-(void)addPathForRenderGeometry:(id)arg1 ;
-(void)renderDivotEffect:(id)arg1 withTraits:(id)arg2 ;
-(id)pathForFlickWidth:(double)arg1 height:(double)arg2 handleLength:(double)arg3 keyMiddle:(CGPoint)arg4 angle:(double)arg5 ;
-(void)detectColorsForGradient:(id)arg1 ;
-(UIColor *)singleColor;
-(id)pathForSplitGeometry:(id)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)forceColorFormat:(long long)arg1 ;
-(void)renderShadowEffect:(id)arg1 withTraits:(id)arg2 ;
-(void)ensureContext;
-(double)_layerRoundRectRadius;
-(id)pathForRenderGeometry:(id)arg1 ;
-(CGPathRef)_thickShiftGlyphPath;
-(void)addPathForTraits:(id)arg1 displayRect:(CGRect*)arg2 ;
-(void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2 ;
-(void)_drawKeyImage:(id)arg1 inRect:(CGRect)arg2 withStyle:(id)arg3 force1xImages:(BOOL)arg4 flipHorizontally:(BOOL)arg5 ;
-(BOOL)colorDetectMode;
-(void)renderKeyContents:(id)arg1 withTraits:(id)arg2 ;
-(long long)contentColorFormat;
-(BOOL)renderKeyPathContents:(id)arg1 withTraits:(id)arg2 ;
-(void)dealloc;
-(void)addRoundRect:(CGRect)arg1 radius:(double)arg2 corners:(unsigned long long)arg3 ;
@end

