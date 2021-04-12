/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSSpecifier;

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	PSSpecifier* _specifier;

}

@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(UILabel *)titleLabel;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)reloadFromSpecifier;
-(id)initWithSpecifier:(id)arg1 useContentLayoutGuide:(BOOL)arg2 ;
@end

