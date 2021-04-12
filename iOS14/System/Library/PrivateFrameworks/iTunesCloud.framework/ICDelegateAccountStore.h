/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICSQLiteConnectionDelegate.h>
#import <libobjc.A.dylib/ICDelegateAccountStoreWriter.h>

@class NSMutableArray, ICDelegateAccountStoreOptions, ICDelegateAccountStoreXPCWriter, NSString;

@interface ICDelegateAccountStore : NSObject <ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter> {

	NSMutableArray* _connectionPool;
	BOOL _isOpen;
	os_unfair_lock_s _lock;
	ICDelegateAccountStoreOptions* _options;
	ICDelegateAccountStore* _strongSelf;
	ICDelegateAccountStoreXPCWriter* _xpcWriter;

}

@property (nonatomic,copy,readonly) NSString * databasePath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)openWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)databasePath;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)close;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(id)_initWithValidatedOptions:(id)arg1 ;
-(id)initSingleWriterWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_openWithXPCWriter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_popConnection;
-(void)_recycleConnection:(id)arg1 ;
-(void)_postDidChangeNotification;
-(void)_writeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_resetCorruptionUsingSQL;
-(void)_resetCorruptionUsingXPC;
-(void)_writeSQLUsingBlock:(/*^block*/id)arg1 ;
-(void)_writeXPCUsingBlock:(/*^block*/id)arg1 ;
-(void)readUsingBlock:(/*^block*/id)arg1 ;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

