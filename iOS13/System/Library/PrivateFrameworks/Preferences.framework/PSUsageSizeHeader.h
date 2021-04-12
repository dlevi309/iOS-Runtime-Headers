/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, NSLayoutConstraint;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _sizeLabel;
	UILabel* _titleLabel;
	NSLayoutConstraint* _labelLeadingConstraint;
	NSLayoutConstraint* _labelTrailingConstraint;

}

@property (nonatomic,retain) UILabel * sizeLabel;                                       //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeadingConstraint;               //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelTrailingConstraint;              //@synthesize labelTrailingConstraint=_labelTrailingConstraint - In the implementation block
-(void)setSize:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)setupConstraints;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)setLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelTrailingConstraint;
-(void)setSizeLabelHidden:(BOOL)arg1 ;
@end

