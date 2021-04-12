/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@protocol TKTonePickerTableViewControllerHelper <NSObject>
@required
-(id)selectedTonePickerItem;
-(void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1;
-(void)loadViewForTonePickerTableViewController:(id)arg1;
-(void)updateCell:(id)arg1 withCheckedStatus:(BOOL)arg2 forTonePickerItem:(id)arg3;
-(void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3;
-(void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1;
-(id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3;
-(void)updateCell:(id)arg1 withDetailText:(id)arg2;
-(void)tonePickerTableViewWillDisappear:(BOOL)arg1;

@end

