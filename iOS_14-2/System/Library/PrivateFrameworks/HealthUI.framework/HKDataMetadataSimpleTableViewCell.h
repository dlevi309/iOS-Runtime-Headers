/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell {

	UILabel* _titleTextLabel;
	UILabel* _subtitleTextLabel;

}

@property (nonatomic,retain) UILabel * titleTextLabel;                 //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleTextLabel;              //@synthesize subtitleTextLabel=_subtitleTextLabel - In the implementation block
-(UILabel *)titleTextLabel;
-(void)setupSubviews;
-(void)layoutSubviews;
-(void)_updateForCurrentSizeCategory;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(UILabel *)subtitleTextLabel;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
@end

