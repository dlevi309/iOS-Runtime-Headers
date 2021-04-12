/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(NSString *)titleText;
-(UIColor *)valueColor;
-(void)setValueFont:(UIFont *)arg1 ;
-(UIFont *)valueFont;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(void)setValueText:(NSString *)arg1 ;
-(void)setValueColor:(UIColor *)arg1 ;
-(NSString *)valueText;
@end

