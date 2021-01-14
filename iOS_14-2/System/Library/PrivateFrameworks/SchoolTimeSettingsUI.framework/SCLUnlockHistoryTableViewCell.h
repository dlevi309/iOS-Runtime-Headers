/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@class SCLHistoryItemView;

@interface SCLUnlockHistoryTableViewCell : PSTableCell {

	SCLHistoryItemView* _historyItemView;

}

@property (nonatomic,readonly) SCLHistoryItemView * historyItemView;              //@synthesize historyItemView=_historyItemView - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(SCLHistoryItemView *)historyItemView;
@end

