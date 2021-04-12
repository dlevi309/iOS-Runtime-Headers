/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class PKPassView, PKPaymentSetupMoreInfoItem, PKPaymentPass, UIImageView, PKTableHeaderView, UIButton;

@interface PKPaymentSetupMoreInfoView : UIScrollView {

	PKPassView* _passView;
	CGSize _boundSize;
	PKPaymentSetupMoreInfoItem* _moreInfoItem;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _customImageView;
	PKTableHeaderView* _headerView;
	UIButton* _linkButton;

}

@property (nonatomic,readonly) PKPaymentSetupMoreInfoItem * moreInfoItem;              //@synthesize moreInfoItem=_moreInfoItem - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * customImageView;                          //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,readonly) PKTableHeaderView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIButton * linkButton;                                  //@synthesize linkButton=_linkButton - In the implementation block
-(long long)context;
-(void)layoutSubviews;
-(PKTableHeaderView *)headerView;
-(UIButton *)linkButton;
-(PKPaymentPass *)pass;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 ;
-(void)_linkButtonTapped:(id)arg1 ;
-(PKPaymentSetupMoreInfoItem *)moreInfoItem;
-(UIImageView *)customImageView;
@end

