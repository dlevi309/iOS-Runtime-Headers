/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@protocol NSXPCProxyCreating;
@class NSError;

@interface _SFCredentialStore : NSObject {

	id _credentialStoreInternal;
	id<NSXPCProxyCreating> _serverConnection;
	NSError* _serverError;

}
+(id)defaultCredentialStore;
+(id)_serverConnectionWithError:(id*)arg1 ;
-(id)_init;
-(void)fetchPasswordCredentialForPersistentIdentifier:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)serverProxyWithResultHandler:(/*^block*/id)arg1 ;
-(id)serverProxyWithDualResultHandler:(/*^block*/id)arg1 ;
-(id)serverProxyWithBooleanHandler:(/*^block*/id)arg1 ;
-(void)addCredential:(id)arg1 withAccessPolicy:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)lookupCredentialsForServiceIdentifiers:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)removeCredentialWithPersistentIdentifier:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)replaceCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

