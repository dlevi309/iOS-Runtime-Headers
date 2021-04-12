/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKFindBankAccountInformationFooterView : PKTableFooterView {

	UIButton* _accountInformationButton;

}

@property (nonatomic,retain) UIButton * accountInformationButton;              //@synthesize accountInformationButton=_accountInformationButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setAccountInformationButton:(UIButton *)arg1 ;
-(UIButton *)accountInformationButton;
@end

