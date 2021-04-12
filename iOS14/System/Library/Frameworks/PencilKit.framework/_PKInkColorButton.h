/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor;

@interface _PKInkColorButton : UIButton {

	BOOL _isCompact;
	BOOL _isUsedOnDarkBackground;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL isCompact;                           //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) BOOL isUsedOnDarkBackground;              //@synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground - In the implementation block
+(CGRect)swatchRectForBounds:(CGRect)arg1 isCompact:(BOOL)arg2 ;
+(double)swatchInsetForIsCompact:(BOOL)arg1 ;
+(double)transparentSelectionRingInset:(BOOL)arg1 ;
+(double)innerColorCircleInset:(BOOL)arg1 ;
+(id)pathForFillShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3 ;
+(id)buttonWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
+(id)embossOverlayImageForColor:(id)arg1 selected:(BOOL)arg2 isCompact:(BOOL)arg3 ;
+(id)pathForSelectedColorShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 embossed:(BOOL)arg3 isCompact:(BOOL)arg4 ;
+(id)pathForStrokeShapeLayerWithSwatchRect:(CGRect)arg1 selected:(BOOL)arg2 color:(id)arg3 isUsedOnDarkBackground:(BOOL)arg4 isCompact:(BOOL)arg5 ;
+(id)strokeColorForStrokeShapeLayerWithColor:(id)arg1 isUsedOnDarkBackground:(BOOL)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIColor *)color;
-(BOOL)isCompact;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIsCompact:(BOOL)arg1 ;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(CGRect)_swatchRect;
-(double)_swatchInset;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1 ;
-(BOOL)isUsedOnDarkBackground;
@end

