/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <SafariCore/WBSSQLiteStore.h>

@protocol OS_dispatch_queue;
@class WBSSQLiteStatementCache, NSObject;

@interface SFExternalCredentialIdentityStore : WBSSQLiteStore {

	WBSSQLiteStatementCache* _statements;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithURL:(id)arg1 ;
-(int)_currentSchemaVersion;
-(int)_createFreshDatabaseSchema;
-(id)initWithURL:(id)arg1 protectionType:(long long)arg2 ;
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_databaseWillClose;
-(void)openAndCheckIntegrity:(BOOL)arg1 createIfNeeded:(BOOL)arg2 fallBackToMemoryStoreIfError:(BOOL)arg3 lockingPolicy:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)_vacuum;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_saveCredentialIdentities:(id)arg1 ;
-(int)_removeAllCredentialIdentities;
-(int)_removeCredentialIdentities:(id)arg1 ;
-(int)_removeCredentialIdentity:(id)arg1 ;
-(int)_updateCredentialIdentity:(id)arg1 ;
-(int)_insertCredentialIdentity:(id)arg1 ;
-(id)_fetchCredentialIdentities;
-(id)_fetchCredentialIdentitiesMatchingDomains:(id)arg1 ;
-(id)_credentialIdentityFromRow:(id)arg1 ;
-(BOOL)_fetchStoreIsEmpty;
-(void)fetchCredentialIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStoreEmptyStateWithCompletion:(/*^block*/id)arg1 ;
@end

