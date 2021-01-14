/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class UIColor, CALayer, UIView, TPRevealingRingView, NSString;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {

	long long character;
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
@property (assign) long long character; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)verticalPadding;
+(double)horizontalPadding;
+(CGSize)defaultSize;
+(UIEdgeInsets)paddingOutsideRing;
+(double)outerCircleDiameter;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(void)resetLocale;
+(BOOL)isCarPlay;
+(id)imageForCharacter:(long long)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3 ;
+(id)imageForCharacter:(long long)arg1 ;
+(id)imageForCharacter:(long long)arg1 highlighted:(BOOL)arg2 ;
+(void)loadNumberPadKeyPrototypeView;
+(void)resetLocaleIfNeeded;
+(id)scriptKey;
+(BOOL)usesBoldAssets;
+(id)localizedLettersForCharacter:(long long)arg1 ;
+(CGRect)circleBounds;
+(BOOL)usesButtonSaturationFilters;
+(id)disabledImageForCharacter:(long long)arg1 ;
-(UIColor *)buttonColor;
-(UIColor *)color;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)defaultColor;
-(id)initForCharacter:(long long)arg1 ;
-(void)setCharacter:(long long)arg1 ;
-(TPRevealingRingView *)revealingRingView;
-(void)setGreyedOut:(BOOL)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)touchDown;
-(void)touchUp;
-(long long)character;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)circleView;
-(void)setCircleView:(UIView *)arg1 ;
-(void)reloadImagesForCurrentCharacter;
-(void)touchCancelled;
-(CALayer *)glyphLayer;
-(CALayer *)highlightedGlyphLayer;
-(void)setGlyphLayer:(CALayer *)arg1 ;
-(void)setHighlightedGlyphLayer:(CALayer *)arg1 ;
-(UIColor *)highlightedButtonColor;
-(void)highlightCircleView:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

