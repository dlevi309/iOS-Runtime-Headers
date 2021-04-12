/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface SBAccountStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAppleAccount;

}

@property (retain) ACAccount * primaryAppleAccount;                        //@synthesize primaryAppleAccount=_primaryAppleAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(ACAccount *)primaryAppleAccount;
-(void)setPrimaryAppleAccount:(ACAccount *)arg1 ;
-(void)_queue_updatePrimaryAppleAccountAndNotify:(BOOL)arg1 ;
-(void)_updatePrimaryAppleAccount;
@end

