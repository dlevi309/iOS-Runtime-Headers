/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIView, PKPaymentPass, UIImageView, UILabel, PKContinuousButton;

@interface PKAddToWatchOfferView : UIView {

	PKWatchHeroImageView* _heroImageView;
	UIView* _backgroundView;
	CGSize _aspectSize;
	unsigned long long _screenType;
	BOOL _isCompactWatch;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _passImageView;
	UILabel* _instructionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PKContinuousButton* _openAppButton;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * passImageView;                     //@synthesize passImageView=_passImageView - In the implementation block
@property (nonatomic,readonly) UILabel * instructionLabel;                      //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * openAppButton;              //@synthesize openAppButton=_openAppButton - In the implementation block
-(long long)context;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UILabel *)subtitleLabel;
-(void)showSpinner:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(BOOL)_isSmallPhone;
-(CGSize)_passImageSize;
-(double)_sideMargin;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 ;
-(PKContinuousButton *)openAppButton;
-(double)_instructionFontSize;
-(double)_instructionYCoordinate;
-(double)_passImageYCoordinate;
-(UIImageView *)passImageView;
-(UILabel *)instructionLabel;
@end

