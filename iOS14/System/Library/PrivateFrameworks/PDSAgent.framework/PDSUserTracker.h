/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@interface PDSUserTracker : NSObject {

	/*^block*/id _accountStoreBlock;

}

@property (nonatomic,copy) id accountStoreBlock;              //@synthesize accountStoreBlock=_accountStoreBlock - In the implementation block
+(id)standardAccountStore;
-(void)refreshCredentialsForUser:(id)arg1 withError:(id*)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)validUser:(id)arg1 withError:(id*)arg2 ;
-(id)_accountForUser:(id)arg1 withError:(id*)arg2 ;
-(void)setAccountStoreBlock:(id)arg1 ;
-(id)initWithAccountStoreBlock:(/*^block*/id)arg1 ;
-(id)tokenAndIdentifier:(id*)arg1 forUser:(id)arg2 withError:(id*)arg3 ;
-(id)accountStoreBlock;
@end

