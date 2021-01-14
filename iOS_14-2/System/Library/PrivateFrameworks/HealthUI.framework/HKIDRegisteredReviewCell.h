/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKIDRegisteredReviewCell : UITableViewCell {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

