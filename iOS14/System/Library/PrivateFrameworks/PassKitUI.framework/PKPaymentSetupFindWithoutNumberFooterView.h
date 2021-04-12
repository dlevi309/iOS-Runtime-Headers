/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPaymentSetupFindWithoutNumberFooterView : PKTableFooterView {

	long long _context;
	UIButton* _noNumberButton;

}

@property (assign,nonatomic) long long context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIButton * noNumberButton;              //@synthesize noNumberButton=_noNumberButton - In the implementation block
-(long long)context;
-(BOOL)isBuddyiPad;
-(void)setNoNumberButton:(UIButton *)arg1 ;
-(UIButton *)noNumberButton;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setContext:(long long)arg1 ;
@end

