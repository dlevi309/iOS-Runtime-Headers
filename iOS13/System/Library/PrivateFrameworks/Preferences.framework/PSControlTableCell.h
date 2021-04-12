/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>

@class UIControl;

@interface PSControlTableCell : PSTableCell {

	UIControl* _control;

}

@property (nonatomic,retain) UIControl * control; 
-(void)dealloc;
-(id)valueLabel;
-(void)setControl:(UIControl *)arg1 ;
-(UIControl *)control;
-(id)controlValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(id)newControl;
-(void)controlChanged:(id)arg1 ;
@end

