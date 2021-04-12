/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject {

	CNAuthorizationContext* _authorizer;

}

@property (nonatomic,readonly) CNAuthorizationContext * authorizer;              //@synthesize authorizer=_authorizer - In the implementation block
+(id)new;
+(id)allAuthorizationKeys;
-(id)init;
-(id)initWithAuthorizer:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_CN6)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg1 ;
-(void)removeUnauthorizedKeysFromFetchRequest:(id)arg1 ;
-(void)performWork:(/*^block*/id)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(CNAuthorizationContext *)authorizer;
-(BOOL)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2 ;
@end

