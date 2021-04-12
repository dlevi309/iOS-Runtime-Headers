/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

@class HRProfile, UITableView;


@protocol HRWDTableViewSectionDelegate <NSObject>
@property (retain) HRProfile * profile; 
@property (retain) UITableView * tableView; 
@required
-(HRProfile *)profile;
-(void)setProfile:(id)arg1;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(UITableView *)tableView;
-(void)setTableView:(id)arg1;
-(id)indexPathForCell:(id)arg1;
-(void)reloadSection:(unsigned long long)arg1 animated:(BOOL)arg2;
-(void)reloadTable;
-(void)pushViewController:(id)arg1;
-(void)sectionAddedChildViewController:(id)arg1;

@end

