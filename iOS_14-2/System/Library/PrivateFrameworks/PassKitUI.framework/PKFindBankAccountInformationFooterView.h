/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setAccountInformationButton:(UIButton *)arg1 ;
-(UIButton *)accountInformationButton;
@end

