/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(void)setSizeLabelHidden:(BOOL)arg1 ;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)setLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelTrailingConstraint;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setSize:(id)arg1 ;
-(void)updateConstraints;
-(void)setTableView:(id)arg1 ;
-(void)setupConstraints;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

