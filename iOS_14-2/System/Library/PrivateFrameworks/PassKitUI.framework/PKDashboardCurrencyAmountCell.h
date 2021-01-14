/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKCurrencyAmount, UILabel;

@interface PKDashboardCurrencyAmountCell : PKDashboardCollectionViewCell {

	NSString* _titleString;
	PKCurrencyAmount* _currencyAmount;
	UILabel* _titleLabel;
	UILabel* _currencyLabel;
	BOOL _showsPositivePrefix;
	NSString* _detailString;
	PKCurrencyAmount* _amount;

}

@property (nonatomic,copy) NSString * titleString;                  //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * detailString;                 //@synthesize detailString=_detailString - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * amount;               //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) BOOL showsPositivePrefix;              //@synthesize showsPositivePrefix=_showsPositivePrefix - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)detailString;
-(void)setShowsPositivePrefix:(BOOL)arg1 ;
-(void)setDetailString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(id)defaultPrimaryColor;
-(void)_updateCurrencyLabel;
-(void)resetFonts;
-(PKCurrencyAmount *)amount;
-(id)defaultSecondaryColor;
-(BOOL)_shouldUseStackedLayoutWithBounds:(CGRect)arg1 ;
-(BOOL)showsPositivePrefix;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

