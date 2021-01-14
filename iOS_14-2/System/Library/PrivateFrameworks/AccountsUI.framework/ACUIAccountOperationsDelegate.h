/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/


@protocol ACUIAccountOperationsDelegate <NSObject>
@optional
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
-(long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didLoadSaveActions:(id)arg2 forDataclass:(id)arg3 withAccount:(id)arg4 error:(id)arg5;

@required
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;

@end

