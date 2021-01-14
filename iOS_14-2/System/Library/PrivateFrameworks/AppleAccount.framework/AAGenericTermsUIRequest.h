/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest {

	BOOL _preferPassword;
	NSDictionary* _requestDictionary;
	ACAccount* _account;

}

@property (nonatomic,readonly) NSDictionary * requestDictionary;              //@synthesize requestDictionary=_requestDictionary - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL preferPassword;                             //@synthesize preferPassword=_preferPassword - In the implementation block
+(Class)responseClass;
-(ACAccount *)account;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(BOOL)arg3 ;
-(id)_requestParamsForTermsEntries:(id)arg1 ;
-(id)initWithAccount:(id)arg1 termsEntries:(id)arg2 ;
-(BOOL)preferPassword;
-(void)setPreferPassword:(BOOL)arg1 ;
-(NSDictionary *)requestDictionary;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)initWithParameters:(id)arg1 ;
@end

