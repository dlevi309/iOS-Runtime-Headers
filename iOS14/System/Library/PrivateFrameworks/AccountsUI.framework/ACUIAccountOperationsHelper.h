/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/


@protocol OS_dispatch_queue, ACUIAccountOperationsDelegate;
@class ACAccountStore, NSObject;

@interface ACUIAccountOperationsHelper : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_queue> _accountOperationsQueue;
	BOOL _isRemovingAccount;
	BOOL _isSavingAccount;
	id<ACUIAccountOperationsDelegate> _delegate;

}

@property (assign) BOOL isSavingAccount;                                                     //@synthesize isSavingAccount=_isSavingAccount - In the implementation block
@property (assign) BOOL isRemovingAccount;                                                   //@synthesize isRemovingAccount=_isRemovingAccount - In the implementation block
@property (assign,nonatomic,__weak) id<ACUIAccountOperationsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ACUIAccountOperationsDelegate>)delegate;
-(void)removeAccount:(id)arg1 ;
-(void)setDelegate:(id<ACUIAccountOperationsDelegate>)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)saveAccount:(id)arg1 ;
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 ;
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsSavingAccount:(BOOL)arg1 ;
-(id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id*)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIsRemovingAccount:(BOOL)arg1 ;
-(id)dataclassActionsForAccountSave:(id)arg1 forDataclass:(id)arg2 error:(id*)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 ;
-(BOOL)isRemovingAccount;
-(BOOL)isSavingAccount;
@end

