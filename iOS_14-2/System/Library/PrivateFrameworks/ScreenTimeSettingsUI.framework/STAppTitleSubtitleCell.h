/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@interface STAppTitleSubtitleCell : PSTableCell {

	BOOL _hasSubtitle;

}

@property (assign,nonatomic) BOOL hasSubtitle;              //@synthesize hasSubtitle=_hasSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL isAppCell; 
+(long long)cellStyle;
-(void)setSpecifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)hasSubtitle;
-(void)layoutSubviews;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(BOOL)isAppCell;
-(void)setHasSubtitle:(BOOL)arg1 ;
@end

