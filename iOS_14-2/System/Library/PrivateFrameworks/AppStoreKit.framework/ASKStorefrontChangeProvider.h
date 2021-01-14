/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface ASKStorefrontChangeProvider : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	ACAccountStore* _accountStore;
	ACAccount* _localAccount;
	ACAccount* _activeAccount;

}

@property (nonatomic,copy,readonly) id block;                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * localAccount;                                //@synthesize localAccount=_localAccount - In the implementation block
@property (nonatomic,retain) ACAccount * activeAccount;                               //@synthesize activeAccount=_activeAccount - In the implementation block
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(BOOL)hasStorefrontChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(ACAccount *)activeAccount;
-(id)block;
-(BOOL)hasManagedStateChangedFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setLocalAccount:(ACAccount *)arg1 ;
-(void)setActiveAccount:(ACAccount *)arg1 ;
-(ACAccount *)localAccount;
-(void)dealloc;
@end

