/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIColor;

@interface PKNumericBorderButton : UIButton {

	UIView* _bottomBorder;
	UIView* _topBorder;
	UIView* _trailingBorder;
	UIView* _leadingBorder;
	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,copy) UIColor * normalBackgroundColor;                   //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)pk_applyAppearance:(id)arg1 ;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setBorder:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

