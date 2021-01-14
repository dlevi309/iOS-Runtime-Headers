/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(UIImageView *)appIconView;
-(UIButton *)viewButton;
-(UILabel *)nameLabel;
-(id)value;
-(void)viewAppInStore:(id)arg1 ;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
@end

