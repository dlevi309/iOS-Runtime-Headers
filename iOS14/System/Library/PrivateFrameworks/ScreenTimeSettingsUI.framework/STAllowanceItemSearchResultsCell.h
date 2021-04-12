/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface STAllowanceItemSearchResultsCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _nameLabel;
	UILabel* _dashLabel;
	UILabel* _categoryLabel;

}

@property (retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (retain) UILabel * dashLabel;                      //@synthesize dashLabel=_dashLabel - In the implementation block
@property (retain) UILabel * categoryLabel;                  //@synthesize categoryLabel=_categoryLabel - In the implementation block
-(UIImageView *)iconImageView;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)categoryLabel;
-(UILabel *)dashLabel;
-(void)setDashLabel:(UILabel *)arg1 ;
@end

