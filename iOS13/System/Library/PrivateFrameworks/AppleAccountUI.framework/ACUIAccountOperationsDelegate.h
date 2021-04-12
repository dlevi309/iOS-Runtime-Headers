/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@protocol ACUIAccountOperationsDelegate <NSObject>
@optional
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
-(long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;

@required
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;

@end

