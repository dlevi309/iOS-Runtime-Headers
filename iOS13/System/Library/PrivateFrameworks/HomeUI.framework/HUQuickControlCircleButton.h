/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton {

	UIColor* _selectedColor;
	UIView* _backgroundView;
	UIColor* _standardBackgroundColor;

}

@property (nonatomic,retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * standardBackgroundColor;              //@synthesize standardBackgroundColor=_standardBackgroundColor - In the implementation block
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * selectedColor;                        //@synthesize selectedColor=_selectedColor - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setStandardBackgroundColor:(UIColor *)arg1 ;
-(void)_controlStateChanged;
-(void)_adjustTitleColor;
-(UIColor *)standardBackgroundColor;
@end

