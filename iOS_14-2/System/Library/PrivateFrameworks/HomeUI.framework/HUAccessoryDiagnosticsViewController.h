/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HUAccessoryDiagnosticsItemManager, NSString;

@interface HUAccessoryDiagnosticsViewController : HUItemTableViewController <UITextViewDelegate> {

	HUAccessoryDiagnosticsItemManager* _accessoryLogsItemManager;

}

@property (assign,nonatomic,__weak) HUAccessoryDiagnosticsItemManager * accessoryLogsItemManager;              //@synthesize accessoryLogsItemManager=_accessoryLogsItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithSourceItem:(id)arg1 ;
-(void)setAccessoryLogsItemManager:(HUAccessoryDiagnosticsItemManager *)arg1 ;
-(HUAccessoryDiagnosticsItemManager *)accessoryLogsItemManager;
-(void)generateNewLogs;
-(void)showShareSheetForItem:(id)arg1 withAnchorView:(id)arg2 ;
@end

