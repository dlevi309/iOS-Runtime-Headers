/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSControlTableCell.h>

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {

	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) BOOL loading; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)controlValue;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)newControl;
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)loading;
-(BOOL)canReload;
@end

