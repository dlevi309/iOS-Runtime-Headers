/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject {

	ENAccountIdentity* _accountIdentity;
	NSDictionary* _aliasToAccountsMap;
	NSString* _serviceName;

}

@property (nonatomic,readonly) ENAccountIdentity * accountIdentity;              //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * aliasToAccountsMap;                //@synthesize aliasToAccountsMap=_aliasToAccountsMap - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
-(ENAccountIdentity *)accountIdentity;
-(NSDictionary *)aliasToAccountsMap;
-(id)accountForAlias:(id)arg1 ;
-(NSString *)serviceName;
-(id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3 ;
@end

