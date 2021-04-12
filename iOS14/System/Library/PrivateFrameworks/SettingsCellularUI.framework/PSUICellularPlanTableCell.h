/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel;

@interface PSUICellularPlanTableCell : PSTableCell {

	PSUIBadgeView* _badgeView;
	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _statusLabel;
	PSUIBadgeView* _centeredBadgeView;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) PSUIBadgeView * badgeView;                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                          //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                          //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) PSUIBadgeView * centeredBadgeView;              //@synthesize centeredBadgeView=_centeredBadgeView - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;                    //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(PSUIBadgeView *)badgeView;
-(void)setBadgeView:(PSUIBadgeView *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)detailTextLabel;
-(BOOL)canReload;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(id)textLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(BOOL)canBeChecked;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
-(PSUIBadgeView *)centeredBadgeView;
-(void)setCenteredBadgeView:(PSUIBadgeView *)arg1 ;
-(void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3 ;
-(void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2 ;
@end
