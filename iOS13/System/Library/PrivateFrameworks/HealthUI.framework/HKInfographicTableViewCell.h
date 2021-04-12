/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UILabel *)titleLabel;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)separator;
-(void)setSeparator:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(id)_valueFont;
-(id)_labelWithFont:(id)arg1 ;
@end

