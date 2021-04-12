/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKSwatchColor, UIView, CAShapeLayer, UIColor;

@interface PKPaletteColorSwatch : UIView {

	BOOL _selected;
	BOOL _showsSelectionHighlight;
	PKSwatchColor* _swatchColor;
	long long _colorUserInterfaceStyle;
	UIView* _colorBackgroundView;
	CAShapeLayer* _selectionRingMaskLayer;
	UIView* _colorBulletView;

}

@property (nonatomic,retain) UIView * colorBackgroundView;                       //@synthesize colorBackgroundView=_colorBackgroundView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectionRingMaskLayer;              //@synthesize selectionRingMaskLayer=_selectionRingMaskLayer - In the implementation block
@property (nonatomic,retain) UIView * colorBulletView;                           //@synthesize colorBulletView=_colorBulletView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showsSelectionHighlight;                       //@synthesize showsSelectionHighlight=_showsSelectionHighlight - In the implementation block
@property (nonatomic,retain) PKSwatchColor * swatchColor;                        //@synthesize swatchColor=_swatchColor - In the implementation block
@property (nonatomic,readonly) UIColor * presentationColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle;                  //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
-(void)_updateBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(id)_uiColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(long long)_uiColorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)_updateColorBulletView;
-(void)_updateSelectionHighlight;
-(PKSwatchColor *)swatchColor;
-(UIView *)colorBackgroundView;
-(UIView *)colorBulletView;
-(id)_colorBulletOutlineColor;
-(CAShapeLayer *)selectionRingMaskLayer;
-(BOOL)showsSelectionHighlight;
-(UIColor *)presentationColor;
-(id)newColorBackgroundView;
-(void)setColorBackgroundView:(UIView *)arg1 ;
-(BOOL)wantsBackgroundViewColor;
-(void)setSelectionRingMaskLayer:(CAShapeLayer *)arg1 ;
-(BOOL)wantsColorBulletVisible;
-(void)setColorBulletView:(UIView *)arg1 ;
-(void)setSwatchColor:(PKSwatchColor *)arg1 ;
-(void)setShowsSelectionHighlight:(BOOL)arg1 ;
@end

