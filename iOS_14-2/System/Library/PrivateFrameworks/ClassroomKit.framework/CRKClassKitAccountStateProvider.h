/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class ACAccountStore;

@interface CRKClassKitAccountStateProvider : NSObject {

	long long _accountState;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) long long accountState;                       //@synthesize accountState=_accountState - In the implementation block
-(id)init;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(long long)accountState;
-(void)dealloc;
-(void)endObservingAccountChanges;
-(void)beginObservingAccountChanges;
-(void)updateAccountState;
-(long long)currentAccountState;
-(void)setAccountState:(long long)arg1 ;
@end

