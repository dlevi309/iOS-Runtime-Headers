/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)traitsWithGeometry:(id)arg1 ;
+(id)emptyTraits;
+(id)traitsWithSymbolStyle:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)addRenderEffect:(id)arg1 ;
-(NSArray *)renderFlags;
-(void)setRenderFlags:(NSArray *)arg1 ;
-(UIKBRenderGeometry *)geometry;
-(void)setGeometry:(UIKBRenderGeometry *)arg1 ;
-(long long)blendForm;
-(BOOL)renderSecondarySymbolsSeparately;
-(NSArray *)secondarySymbolStyles;
-(BOOL)controlOpacities;
-(NSString *)hashString;
-(UIKBTextStyle *)symbolStyle;
-(void)modifyForMasking;
-(BOOL)blurBlending;
-(UIKBRenderTraits *)variantTraits;
-(void)setBlendForm:(long long)arg1 ;
-(void)setBlurBlending:(BOOL)arg1 ;
-(void)setVariantGeometries:(NSArray *)arg1 ;
-(NSArray *)variantGeometries;
-(void)setLayeredBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)overlayWithTraits:(id)arg1 ;
-(void)setHashString:(NSString *)arg1 ;
-(void)removeAllRenderEffects;
-(void)setSymbolStyle:(UIKBTextStyle *)arg1 ;
-(void)setSecondarySymbolStyles:(NSArray *)arg1 ;
-(void)setControlOpacities:(BOOL)arg1 ;
-(void)setVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setLayeredForegroundGradient:(UIKBGradient *)arg1 ;
-(void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setRenderSecondarySymbolsSeparately:(BOOL)arg1 ;
-(long long)renderFlagsForAboveEffects;
-(void)setRenderFlagsForAboveEffects:(long long)arg1 ;
-(UIKBRenderTraits *)highlightedVariantTraits;
-(void)addForegroundRenderEffect:(id)arg1 ;
-(UIKBGradient *)layeredForegroundGradient;
-(UIKBGradient *)backgroundGradient;
-(UIKBGradient *)layeredBackgroundGradient;
-(UIKBTextStyle *)fallbackSymbolStyle;
-(NSArray *)renderEffects;
-(NSArray *)foregroundRenderEffects;
-(void)setFallbackSymbolStyle:(UIKBTextStyle *)arg1 ;
@end

