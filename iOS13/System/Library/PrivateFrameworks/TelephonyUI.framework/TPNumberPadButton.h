/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class UIColor, CALayer, UIView, TPRevealingRingView, NSString;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {

	unsigned character;
	UIColor* _color;
	CALayer* _glyphLayer;
	CALayer* _highlightedGlyphLayer;
	UIView* _circleView;
	UIColor* _buttonColor;
	TPRevealingRingView* _revealingRingView;

}

@property (retain) CALayer * glyphLayer;                                             //@synthesize glyphLayer=_glyphLayer - In the implementation block
@property (retain) CALayer * highlightedGlyphLayer;                                  //@synthesize highlightedGlyphLayer=_highlightedGlyphLayer - In the implementation block
@property (retain) UIView * circleView;                                              //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,readonly) UIColor * buttonColor;                                //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightedButtonColor; 
@property (nonatomic,readonly) TPRevealingRingView * revealingRingView;              //@synthesize revealingRingView=_revealingRingView - In the implementation block
@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character; 
+(CGSize)defaultSize;
+(double)horizontalPadding;
+(void)resetLocale;
+(double)verticalPadding;
+(UIEdgeInsets)paddingOutsideRing;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3 ;
+(id)imageForCharacter:(unsigned)arg1 ;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 ;
+(double)outerCircleDiameter;
+(void)loadNumberPadKeyPrototypeView;
+(void)resetLocaleIfNeeded;
+(id)scriptKey;
+(BOOL)usesBoldAssets;
+(BOOL)isCarPlay;
+(id)localizedLettersForCharacter:(unsigned)arg1 ;
+(BOOL)useLargeFont;
+(CGRect)circleBounds;
+(BOOL)usesButtonSaturationFilters;
+(id)disabledImageForCharacter:(unsigned)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchDown;
-(void)setGreyedOut:(BOOL)arg1 ;
-(UIColor *)buttonColor;
-(id)initForCharacter:(unsigned)arg1 ;
-(unsigned)character;
-(void)setCharacter:(unsigned)arg1 ;
-(TPRevealingRingView *)revealingRingView;
-(id)defaultColor;
-(void)reloadImagesForCurrentCharacter;
-(UIView *)circleView;
-(void)touchUp;
-(void)touchCancelled;
-(CALayer *)glyphLayer;
-(CALayer *)highlightedGlyphLayer;
-(void)setGlyphLayer:(CALayer *)arg1 ;
-(void)setHighlightedGlyphLayer:(CALayer *)arg1 ;
-(UIColor *)highlightedButtonColor;
-(void)highlightCircleView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCircleView:(UIView *)arg1 ;
@end

