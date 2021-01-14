/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, UIKBRenderGeometry, UIKBGradient, UIKBTextStyle, NSArray, NSString;

@interface UIKBRenderTraits : NSObject <NSCopying> {

	NSMutableArray* _renderEffects;
	NSMutableArray* _foregroundRenderEffects;
	BOOL _honorControlOpacity;
	BOOL _controlOpacities;
	BOOL _blurBlending;
	BOOL _renderSecondarySymbolsSeparately;
	UIKBRenderGeometry* _geometry;
	UIKBGradient* _backgroundGradient;
	UIKBGradient* _layeredBackgroundGradient;
	UIKBGradient* _layeredForegroundGradient;
	UIKBTextStyle* _symbolStyle;
	UIKBTextStyle* _fallbackSymbolStyle;
	NSArray* _secondarySymbolStyles;
	NSArray* _variantGeometries;
	UIKBRenderTraits* _variantTraits;
	UIKBRenderTraits* _highlightedVariantTraits;
	long long _blendForm;
	NSArray* _renderFlags;
	long long _renderFlagsForAboveEffects;
	NSString* _hashString;

}

@property (nonatomic,retain) UIKBRenderGeometry * geometry;                            //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) UIKBGradient * backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredBackgroundGradient;                 //@synthesize layeredBackgroundGradient=_layeredBackgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredForegroundGradient;                 //@synthesize layeredForegroundGradient=_layeredForegroundGradient - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * symbolStyle;                              //@synthesize symbolStyle=_symbolStyle - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * fallbackSymbolStyle;                      //@synthesize fallbackSymbolStyle=_fallbackSymbolStyle - In the implementation block
@property (nonatomic,retain) NSArray * secondarySymbolStyles;                          //@synthesize secondarySymbolStyles=_secondarySymbolStyles - In the implementation block
@property (nonatomic,readonly) NSArray * renderEffects;                                //@synthesize renderEffects=_renderEffects - In the implementation block
@property (nonatomic,readonly) NSArray * foregroundRenderEffects;                      //@synthesize foregroundRenderEffects=_foregroundRenderEffects - In the implementation block
@property (nonatomic,retain) NSArray * variantGeometries;                              //@synthesize variantGeometries=_variantGeometries - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * variantTraits;                         //@synthesize variantTraits=_variantTraits - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * highlightedVariantTraits;              //@synthesize highlightedVariantTraits=_highlightedVariantTraits - In the implementation block
@property (assign,nonatomic) BOOL controlOpacities;                                    //@synthesize controlOpacities=_controlOpacities - In the implementation block
@property (assign,nonatomic) BOOL blurBlending;                                        //@synthesize blurBlending=_blurBlending - In the implementation block
@property (assign,nonatomic) long long blendForm;                                      //@synthesize blendForm=_blendForm - In the implementation block
@property (nonatomic,retain) NSArray * renderFlags;                                    //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) BOOL renderSecondarySymbolsSeparately;                    //@synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately - In the implementation block
@property (assign,nonatomic) long long renderFlagsForAboveEffects;                     //@synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects - In the implementation block
@property (nonatomic,retain) NSString * hashString;                                    //@synthesize hashString=_hashString - In the implementation block
+(id)traitsWithSymbolStyle:(id)arg1 ;
+(id)traitsWithGeometry:(id)arg1 ;
+(id)emptyTraits;
-(NSArray *)renderFlags;
-(UIKBRenderGeometry *)geometry;
-(UIKBGradient *)layeredForegroundGradient;
-(void)setHashString:(NSString *)arg1 ;
-(void)setBlurBlending:(BOOL)arg1 ;
-(long long)renderFlagsForAboveEffects;
-(void)setLayeredBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)setSymbolStyle:(UIKBTextStyle *)arg1 ;
-(UIKBTextStyle *)symbolStyle;
-(UIKBTextStyle *)fallbackSymbolStyle;
-(BOOL)controlOpacities;
-(void)setFallbackSymbolStyle:(UIKBTextStyle *)arg1 ;
-(UIKBGradient *)layeredBackgroundGradient;
-(void)setControlOpacities:(BOOL)arg1 ;
-(void)addForegroundRenderEffect:(id)arg1 ;
-(void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setRenderSecondarySymbolsSeparately:(BOOL)arg1 ;
-(void)setLayeredForegroundGradient:(UIKBGradient *)arg1 ;
-(id)description;
-(UIKBRenderTraits *)variantTraits;
-(long long)blendForm;
-(UIKBRenderTraits *)highlightedVariantTraits;
-(void)addRenderEffect:(id)arg1 ;
-(void)setSecondarySymbolStyles:(NSArray *)arg1 ;
-(void)setGeometry:(UIKBRenderGeometry *)arg1 ;
-(UIKBGradient *)backgroundGradient;
-(NSArray *)variantGeometries;
-(NSString *)hashString;
-(void)setRenderFlags:(NSArray *)arg1 ;
-(void)setRenderFlagsForAboveEffects:(long long)arg1 ;
-(void)overlayWithTraits:(id)arg1 ;
-(BOOL)renderSecondarySymbolsSeparately;
-(void)setVariantGeometries:(NSArray *)arg1 ;
-(NSArray *)foregroundRenderEffects;
-(void)setBackgroundGradient:(UIKBGradient *)arg1 ;
-(NSArray *)renderEffects;
-(void)setBlendForm:(long long)arg1 ;
-(void)removeAllRenderEffects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)modifyForMasking;
-(BOOL)blurBlending;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)secondarySymbolStyles;
@end

