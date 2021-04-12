/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UILabel *)titleTextLabel;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleTextLabel;
@end

