/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAiCloudTermsAgreeRequest : AARequest {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _preferPassword;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;              //@synthesize preferPassword=_preferPassword - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
@end

