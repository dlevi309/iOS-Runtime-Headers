/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)tintColorDidChange;
-(void)_updateTextColor;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setupSubviews;
-(id)description;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(UILabel *)detailLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

