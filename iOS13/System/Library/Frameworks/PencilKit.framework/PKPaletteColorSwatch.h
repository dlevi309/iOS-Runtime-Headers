/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteColorSwatchProperties.h>

@class PKSwatchColor, UIView, CAShapeLayer, NSString;

@interface PKPaletteColorSwatch : UIView <PKPaletteColorSwatchProperties> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showsSelectionHighlight;                       //@synthesize showsSelectionHighlight=_showsSelectionHighlight - In the implementation block
@property (nonatomic,retain) PKSwatchColor * swatchColor;                        //@synthesize swatchColor=_swatchColor - In the implementation block
@property (assign,nonatomic) long long colorUserInterfaceStyle;                  //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateBackgroundView;
-(void)_updateUI;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(long long)colorUserInterfaceStyle;
-(long long)_uiColorUserInterfaceStyle;
-(void)_updateColorBulletView;
-(void)_updateSelectionHighlight;
-(UIView *)colorBackgroundView;
-(UIView *)colorBulletView;
-(CAShapeLayer *)selectionRingMaskLayer;
-(BOOL)showsSelectionHighlight;
-(PKSwatchColor *)swatchColor;
-(id)newColorBackgroundView;
-(void)setColorBackgroundView:(UIView *)arg1 ;
-(BOOL)wantsBackgroundViewColor;
-(id)_uiColor;
-(void)setSelectionRingMaskLayer:(CAShapeLayer *)arg1 ;
-(BOOL)wantsColorBulletVisible;
-(void)setColorBulletView:(UIView *)arg1 ;
-(void)setShowsSelectionHighlight:(BOOL)arg1 ;
-(void)setSwatchColor:(PKSwatchColor *)arg1 ;
@end

