/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg1 ;
@end

