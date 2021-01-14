/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
-(void)reloadActionRowsAnimated:(BOOL)arg1;
-(Class)cellConfigurationForIndexPath:(id)arg1;
-(long long)numberOfTopActionRowsInTableView:(id)arg1;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1;
-(long long)numberOfActionRowsInTableView:(id)arg1;

@end

