/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Accounts/ACAccount.h>

@class CKDBackingFakeAccount;

@interface CKCredentialInterceptingAccount : ACAccount {

	CKDBackingFakeAccount* _backingFakeAccount;

}

@property (assign,nonatomic,__weak) CKDBackingFakeAccount * backingFakeAccount;              //@synthesize backingFakeAccount=_backingFakeAccount - In the implementation block
-(BOOL)aa_updateTokensWithProvisioningResponse:(id)arg1 ;
-(CKDBackingFakeAccount *)backingFakeAccount;
-(void)setBackingFakeAccount:(CKDBackingFakeAccount *)arg1 ;
@end

