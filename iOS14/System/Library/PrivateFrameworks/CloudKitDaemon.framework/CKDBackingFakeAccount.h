/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccount;

@interface CKDBackingFakeAccount : CKDBackingAccount {

	ACAccount* _fakeCKAccount;

}

@property (nonatomic,retain) ACAccount * fakeCKAccount;              //@synthesize fakeCKAccount=_fakeCKAccount - In the implementation block
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5 ;
+(void)_setUpFakeAccountShenanigans;
-(id)password;
-(BOOL)isFakeAccount;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(void)deviceCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(void)setFakeCKAccount:(ACAccount *)arg1 ;
-(id)ckAccount;
-(id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5 ;
-(id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 inStore:(id)arg3 ;
-(void)_checkAndLogIfAccountError;
-(ACAccount *)fakeCKAccount;
-(void)_setOverridesOnVettingContext:(id)arg1 ;
@end

