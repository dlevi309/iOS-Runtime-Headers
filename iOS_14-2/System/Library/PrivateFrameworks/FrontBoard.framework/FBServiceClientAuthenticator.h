/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3 ;
+(id)sharedForegroundUIAppClientAuthenticator;
+(BOOL)authenticateAuditToken:(SCD_Struct_FB8)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
+(int)_authenticateAuditToken:(id)arg1 entitlement:(id)arg2 credentials:(unsigned long long)arg3 error:(out id*)arg4 withResult:(/*^block*/id)arg5 ;
+(id)sharedUIAppClientAuthenticator;
+(id)sharedSystemClientAuthenticator;
-(id)succinctDescription;
-(id)initWithCredentials:(unsigned long long)arg1 ;
-(id)initWithEntitlement:(id)arg1 ;
-(NSString *)entitlement;
-(id)init;
-(BOOL)authenticateAuditToken:(id)arg1 error:(out id*)arg2 ;
-(BOOL)authenticateClient:(id)arg1 error:(out id*)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2 ;
-(int)authenticateClient:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(BOOL)authenticateClient:(id)arg1 ;
-(BOOL)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 ;
-(unsigned long long)credentials;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 forEntitlement:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(BOOL)authenticateAuditToken:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(int)authenticateAuditToken:(SCD_Struct_FB8*)arg1 withResult:(/*^block*/id)arg2 ;
@end

