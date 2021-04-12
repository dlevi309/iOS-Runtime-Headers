/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarActionsModelDelegate <NSObject>
@required
-(void)actionsModelDidUpdateInlineActionButtons:(id)arg1;
-(void)actionsModel:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
-(void)actionsModelDidFinish:(id)arg1;
-(void)actionsModel:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)actionsModel:(id)arg1 shouldDeleteRecord:(id)arg2 resultBlock:(/*^block*/id)arg3;
-(void)presentEditorViewController:(id)arg1 forActionsModel:(id)arg2 isCreate:(BOOL)arg3;
-(void)actionsModel:(id)arg1 didAddRecord:(id)arg2;
-(void)actionsModel:(id)arg1 didEditRecord:(id)arg2;
-(void)actionsModel:(id)arg1 didCancelEditingRecord:(id)arg2;
-(void)dismissEditorViewController:(id)arg1 forActionsModel:(id)arg2 wasCreate:(BOOL)arg3 didEdit:(BOOL)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6;

@end

