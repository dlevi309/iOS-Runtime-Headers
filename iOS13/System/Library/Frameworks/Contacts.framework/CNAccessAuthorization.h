/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@class CNFAccessAuthorization;

@interface CNAccessAuthorization : NSObject {

	CNFAccessAuthorization* _authorizer;

}

@property (nonatomic,retain) CNFAccessAuthorization * authorizer;              //@synthesize authorizer=_authorizer - In the implementation block
+(id)new;
+(id)allAuthorizationKeys;
-(id)init;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg1 ;
-(id)initWithAuthorizer:(id)arg1 ;
-(BOOL)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2 ;
-(void)removeUnauthorizedKeysFromFetchRequest:(id)arg1 ;
-(CNFAccessAuthorization *)authorizer;
-(void)performWork:(/*^block*/id)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)setAuthorizer:(CNFAccessAuthorization *)arg1 ;
@end

