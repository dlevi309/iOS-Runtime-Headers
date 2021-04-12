/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@interface STAppTitleSubtitleCell : PSTableCell {

	BOOL _hasSubtitle;

}

@property (assign,nonatomic) BOOL hasSubtitle;              //@synthesize hasSubtitle=_hasSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL isAppCell; 
+(long long)cellStyle;
-(void)layoutSubviews;
-(void)setSpecifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)hasSubtitle;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(BOOL)isAppCell;
-(void)setHasSubtitle:(BOOL)arg1 ;
@end

