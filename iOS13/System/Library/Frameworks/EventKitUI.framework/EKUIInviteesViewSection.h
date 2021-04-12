/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol EKUIInviteesViewSection <NSObject>
@optional
-(BOOL)hideDivderLineForindexPath:(id)arg1;

@required
-(void)cancelOutstandingOperations;
-(unsigned long long)numberOfRows;
-(id)headerTitle;
-(id)debugTitle;
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

