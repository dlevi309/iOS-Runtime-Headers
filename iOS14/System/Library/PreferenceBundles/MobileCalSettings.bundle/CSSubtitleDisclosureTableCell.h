/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CSSubtitleDisclosureTableCell : PSTableCell {

	UILabel* _valueLabel;

}
+(long long)cellStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_valueLabelForSpecifier:(id)arg1 ;
@end

