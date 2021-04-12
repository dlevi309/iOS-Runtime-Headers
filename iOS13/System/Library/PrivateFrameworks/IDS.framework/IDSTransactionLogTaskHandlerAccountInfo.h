/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)serviceName;
-(ENAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3 ;
-(NSDictionary *)aliasToAccountsMap;
-(id)accountForAlias:(id)arg1 ;
@end

