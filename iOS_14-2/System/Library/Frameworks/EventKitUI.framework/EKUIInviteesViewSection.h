/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUIInviteesViewSection <NSObject>
@optional
-(BOOL)hideDivderLineForindexPath:(id)arg1;

@required
-(void)cancelOutstandingOperations;
-(id)headerTitle;
-(id)debugTitle;
-(unsigned long long)numberOfRows;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
-(BOOL)canSelectRow:(id)arg1;
-(void)selectRow:(id)arg1;
-(double)estimatedHeightForRow:(id)arg1;
-(BOOL)canEditRow:(id)arg1;
-(long long)editingStyleForRow:(id)arg1;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
-(void)setTableViewCellHook:(/*^block*/id)arg1;
-(id)actionsForRow:(id)arg1;

@end

