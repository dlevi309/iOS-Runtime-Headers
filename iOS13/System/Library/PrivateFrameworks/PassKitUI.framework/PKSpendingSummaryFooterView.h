/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKSpendingSummaryFooter.h>

@protocol PKSpendingSummaryFooterViewDelegate;
@class UIView, PKContinuousButton, UIColor, UIImage, UILabel, NSString;

@interface PKSpendingSummaryFooterView : UIView <PKSpendingSummaryFooter> {

	UIView* _separatorView;
	UIView* _topSeparatorView;
	PKContinuousButton* _payButton;
	BOOL _usingCircleButton;
	UIColor* _buttonTitleColor;
	UIColor* _buttonTintColor;
	UIImage* _payButtonImage;
	id<PKSpendingSummaryFooterViewDelegate> _delegate;
	UILabel* _leadingTitle;
	UILabel* _leadingDetail;
	UILabel* _trailingTitle;
	UILabel* _trailingDetail;

}

@property (assign,nonatomic,__weak) id<PKSpendingSummaryFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * leadingTitle;                                             //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,readonly) UILabel * leadingDetail;                                            //@synthesize leadingDetail=_leadingDetail - In the implementation block
@property (nonatomic,readonly) UILabel * trailingTitle;                                            //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,readonly) UILabel * trailingDetail;                                           //@synthesize trailingDetail=_trailingDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKSpendingSummaryFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKSpendingSummaryFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setButtonTitle:(id)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)_createSubviews;
-(void)setPayButtonImage:(id)arg1 ;
-(UILabel *)leadingTitle;
-(UILabel *)leadingDetail;
-(void)setButtonTintColor:(id)arg1 ;
-(void)setButtonTitleColor:(id)arg1 ;
-(UILabel *)trailingTitle;
-(UILabel *)trailingDetail;
-(id)_payButtonWithCircleLayout:(BOOL)arg1 ;
-(BOOL)isEqualToFooter:(id)arg1 ;
@end

