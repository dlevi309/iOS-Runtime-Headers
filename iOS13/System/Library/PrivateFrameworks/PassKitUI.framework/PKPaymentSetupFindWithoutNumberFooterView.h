/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setContext:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(BOOL)isBuddyiPad;
-(void)setNoNumberButton:(UIButton *)arg1 ;
-(UIButton *)noNumberButton;
@end

