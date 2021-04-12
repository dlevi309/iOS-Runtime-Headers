/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setPrimaryAppleAccount:(ACAccount *)arg1 ;
-(ACAccount *)primaryAppleAccount;
-(void)_queue_updatePrimaryAppleAccountAndNotify:(BOOL)arg1 ;
-(void)_updatePrimaryAppleAccount;
@end

