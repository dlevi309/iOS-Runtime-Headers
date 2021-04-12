/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSNumber;

@interface CNAuthorizationContext : NSObject {

	NSNumber* _number_isFirstParty;
	BOOL _hasAuditToken;
	Class _entitlementVerifierClass;
	SCD_Struct_CN1 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_CN1 auditToken;                      //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) BOOL hasAuditToken;                             //@synthesize hasAuditToken=_hasAuditToken - In the implementation block
@property (nonatomic,readonly) BOOL isValidatingFirstPartyClient; 
@property (nonatomic,readonly) Class entitlementVerifierClass;                 //@synthesize entitlementVerifierClass=_entitlementVerifierClass - In the implementation block
-(SCD_Struct_CN1)auditToken;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(BOOL)hasAuditToken;
-(BOOL)isValidatingFirstPartyClient;
-(id)_isFirstParty;
-(id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(BOOL)arg2 ;
-(Class)entitlementVerifierClass;
@end

