/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIView, PKPaymentPass, UIImageView, UILabel, PKContinuousButton;

@interface PKAddToWatchOfferView : UIView {

	PKWatchHeroImageView* _heroImageView;
	UIView* _backgroundView;
	CGSize _aspectSize;
	BOOL _isCompactWatch;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _passImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PKContinuousButton* _openAppButton;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * passImageView;                     //@synthesize passImageView=_passImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * openAppButton;              //@synthesize openAppButton=_openAppButton - In the implementation block
-(UILabel *)titleLabel;
-(UIImageView *)passImageView;
-(long long)context;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(BOOL)_isSmallPhone;
-(void)showSpinner:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(double)_sideMargin;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 ;
-(PKContinuousButton *)openAppButton;
@end

