/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSMutableArray, NSLayoutConstraint, NSString;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSMutableArray* _bodyFirstBaselineConstraints;
	NSLayoutConstraint* _detailLabelLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;                       //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailLabelLastBaselineConstraint;              //@synthesize detailLabelLastBaselineConstraint=_detailLabelLastBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
+(id)defaultReuseIdentifier;
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(void)_setUpUI;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailTextWithBullets:(id)arg1 ;
-(void)_updateLeadingDetailAttributedTextSize;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
-(void)setDetailLabelLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)detailLabelLastBaselineConstraint;
@end

