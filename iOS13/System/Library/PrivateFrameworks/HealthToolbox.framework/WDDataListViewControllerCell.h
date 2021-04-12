/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)titleTextLabel;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)_updateFont;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(void)setTitleTextLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleTextLabel;
@end

