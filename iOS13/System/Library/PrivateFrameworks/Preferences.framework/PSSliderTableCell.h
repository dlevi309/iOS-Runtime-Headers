/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {

	UIView* _disabledView;

}
-(void)setValue:(id)arg1 ;
-(void)prepareForReuse;
-(id)titleLabel;
-(void)layoutSubviews;
-(id)controlValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)newControl;
@end

