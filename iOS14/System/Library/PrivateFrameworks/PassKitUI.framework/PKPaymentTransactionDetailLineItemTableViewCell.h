/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSString, UIFont, UIColor, UILabel;

@interface PKPaymentTransactionDetailLineItemTableViewCell : UITableViewCell {

	BOOL _hasTrailingLineSeperator;
	NSString* _titleText;
	UIFont* _titleFont;
	UIColor* _titleColor;
	NSString* _valueText;
	UIFont* _valueFont;
	UIColor* _valueColor;
	UILabel* _titleLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                       //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                         //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                       //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) NSString * valueText;                       //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                         //@synthesize valueFont=_valueFont - In the implementation block
@property (nonatomic,retain) UIColor * valueColor;                       //@synthesize valueColor=_valueColor - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingLineSeperator;              //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
-(NSString *)titleText;
-(void)setValueColor:(UIColor *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setValueText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)valueFont;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(UILabel *)valueLabel;
-(UIColor *)valueColor;
-(void)setValueLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(NSString *)valueText;
@end

