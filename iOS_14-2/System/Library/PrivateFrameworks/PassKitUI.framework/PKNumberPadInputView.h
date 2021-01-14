/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIStackView, UIColor;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;
	UIColor* _numberPadColor;
	UIColor* _textColor;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (nonatomic,copy) UIColor * numberPadColor;                    //@synthesize numberPadColor=_numberPadColor - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                         //@synthesize textColor=_textColor - In the implementation block
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberPadColor:(UIColor *)arg1 ;
-(void)_reloadSubviews;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(id)initWithDefaultFrameForInterfaceOrientation:(long long)arg1 ;
-(BOOL)showsDecimalPointButton;
-(UIColor *)numberPadColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
@end

