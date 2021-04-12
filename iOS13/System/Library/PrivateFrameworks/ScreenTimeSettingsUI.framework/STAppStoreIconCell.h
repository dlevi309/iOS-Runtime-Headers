/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UIImageView, UILabel, UIButton;

@interface STAppStoreIconCell : STTableCell {

	UIImageView* _appIconView;
	UILabel* _nameLabel;
	UIButton* _viewButton;

}

@property (nonatomic,readonly) UIImageView * appIconView;              //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UIButton * viewButton;                  //@synthesize viewButton=_viewButton - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(UILabel *)nameLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(UIButton *)viewButton;
-(UIImageView *)appIconView;
-(void)viewAppInStore:(id)arg1 ;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
@end

