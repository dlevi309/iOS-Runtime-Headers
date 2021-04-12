/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<ACUIAccountOperationsDelegate>)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 ;
-(void)saveAccount:(id)arg1 requireVerification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIsSavingAccount:(BOOL)arg1 ;
-(id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id*)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(BOOL)arg3 ;
-(void)setIsRemovingAccount:(BOOL)arg1 ;
-(void)saveAccount:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 ;
-(BOOL)isRemovingAccount;
-(BOOL)isSavingAccount;
@end

