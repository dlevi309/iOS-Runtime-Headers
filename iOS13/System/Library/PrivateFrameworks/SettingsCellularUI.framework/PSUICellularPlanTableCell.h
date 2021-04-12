/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)textLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)detailTextLabel;
-(PSUIBadgeView *)badgeView;
-(void)setBadgeView:(PSUIBadgeView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(BOOL)canBeChecked;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(UILabel *)numberLabel;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
-(PSUIBadgeView *)centeredBadgeView;
-(void)setCenteredBadgeView:(PSUIBadgeView *)arg1 ;
-(void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3 ;
-(void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2 ;
@end

