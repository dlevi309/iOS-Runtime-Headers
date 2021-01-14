/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIView, NSLayoutConstraint;

@interface HKInfographicTableViewCell : UITableViewCell {

	BOOL hideSeparator;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIView* _separator;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIView * separator;                                 //@synthesize separator=_separator - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
-(UIView *)separator;
-(id)_valueFont;
-(NSLayoutConstraint *)heightConstraint;
-(void)setSeparator:(UIView *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_labelWithFont:(id)arg1 ;
@end

