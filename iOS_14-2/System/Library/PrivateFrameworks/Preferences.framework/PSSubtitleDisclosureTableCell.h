/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSSubtitleDisclosureTableCell : PSTableCell {

	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
+(long long)cellStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)valueLabel;
-(void)_valueLabelForSpecifier:(id)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
@end

