/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, UIView;

@interface PSUIDanglingPlanTableCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _statusLabel;
	UILabel* _centeredNameLabel;
	UIView* _accessorySpacerView;

}

@property (nonatomic,retain) UIView * accessorySpacerView;              //@synthesize accessorySpacerView=_accessorySpacerView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                     //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                     //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;               //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(id)textLabel;
-(void)setAccessoryType:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)detailTextLabel;
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
-(void)_setView;
-(void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2 ;
-(void)_setCenteredText:(id)arg1 ;
-(UIView *)accessorySpacerView;
-(void)setAccessorySpacerView:(UIView *)arg1 ;
@end

