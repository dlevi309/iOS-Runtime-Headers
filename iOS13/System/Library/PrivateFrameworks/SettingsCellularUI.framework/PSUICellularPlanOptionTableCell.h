/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSUICellularPlanOptionTableCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                    //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;              //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(id)textLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)detailTextLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(BOOL)canBeChecked;
-(void)setCellEnabled:(BOOL)arg1 ;
-(UILabel *)numberLabel;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
-(void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2 ;
-(void)_setCenteredText:(id)arg1 ;
@end

