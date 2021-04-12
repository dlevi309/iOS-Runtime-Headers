/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/


@protocol UITableViewDataSource <NSObject>
@optional
-(long long)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
-(id)sectionIndexTitlesForTableView:(id)arg1;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@required
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

