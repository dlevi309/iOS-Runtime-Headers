/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class WDProfile, UITableView;


@protocol WDTableViewSectionDelegate <NSObject>
@property (nonatomic,retain) WDProfile * profile; 
@property (nonatomic,retain) UITableView * tableView; 
@required
-(void)setProfile:(id)arg1;
-(UITableView *)tableView;
-(void)reloadSection:(unsigned long long)arg1 animated:(BOOL)arg2;
-(void)pushViewController:(id)arg1;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(WDProfile *)profile;
-(void)setTableView:(id)arg1;
-(id)indexPathForCell:(id)arg1;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)reloadTable;
-(void)sectionAddedChildViewController:(id)arg1;

@end

