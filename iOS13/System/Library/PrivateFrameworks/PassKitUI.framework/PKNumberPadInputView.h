/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIInputView.h>

@class UIStackView, UIColor;

@interface PKNumberPadInputView : UIInputView {

	UIStackView* _verticalStackView;
	BOOL _showsDecimalPointButton;
	UIColor* _numberPadColor;

}

@property (assign,nonatomic) BOOL showsDecimalPointButton;              //@synthesize showsDecimalPointButton=_showsDecimalPointButton - In the implementation block
@property (nonatomic,copy) UIColor * numberPadColor;                    //@synthesize numberPadColor=_numberPadColor - In the implementation block
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_reloadSubviews;
-(void)setShowsDecimalPointButton:(BOOL)arg1 ;
-(id)initWithDefaultFrame;
-(void)setNumberPadColor:(UIColor *)arg1 ;
-(void)_performDelete;
-(void)_performInsertion:(id)arg1 ;
-(void)_numericKeyPressed:(id)arg1 ;
-(BOOL)showsDecimalPointButton;
-(UIColor *)numberPadColor;
@end

