/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, NSArray, UIImageView, UILabel;

@interface WDDataListViewControllerCell : UITableViewCell {

	NSLayoutConstraint* _largeTextIconImageCenterYAnchorConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;
	UIImageView* _iconImageView;
	UILabel* _titleTextLabel;
	UILabel* _subtitleTextLabel;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleTextLabel;                 //@synthesize titleTextLabel=_titleTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleTextLabel;              //@synthesize subtitleTextLabel=_subtitleTextLabel - In the implementation block
-(UIImageView *)iconImageView;
-(UILabel *)titleTextLabel;
-(void)setupSubviews;
-(void)layoutSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(void)_updateFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)subtitleTextLabel;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
@end

