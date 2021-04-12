/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {

	NSString* _entitlement;
	unsigned long long _credentials;

}

@property (nonatomic,copy,readonly) NSString * entitlement;                 //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,readonly) unsigned long long credentials;              //@synthesize credentials=_credentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSystemClientAuthenticator;
+(id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3 ;
+(id)sharedUIAppClientAuthenticator;
+(id)sharedForegroundUIAppClientAuthenticator;
+(BOOL)authenticateAuditToken:(SCD_Struct_FB8)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
-(id)init;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)credentials;
-(id)initWithEntitlement:(id)arg1 ;
-(BOOL)authenticateClient:(id)arg1 error:(out id*)arg2 ;
-(BOOL)authenticateClient:(id)arg1 ;
-(NSString *)entitlement;
-(id)initWithCredentials:(unsigned long long)arg1 ;
-(id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2 ;
-(int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id*)arg3 withResult:(/*^block*/id)arg4 ;
-(BOOL)authenticateAuditToken:(id)arg1 error:(out id*)arg2 ;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(BOOL)authenticateAuditToken:(id)arg1 ;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 withResult:(/*^block*/id)arg2 ;
-(int)authenticateClient:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end

