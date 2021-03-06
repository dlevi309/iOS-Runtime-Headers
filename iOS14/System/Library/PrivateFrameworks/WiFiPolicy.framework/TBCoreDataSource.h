/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/TBDataSource.h>
#import <libobjc.A.dylib/TBCacheProvider.h>

@class NSManagedObjectContext, TBPersistenceManager, TBCoreDataStoreDescriptor, NSString;

@interface TBCoreDataSource : TBDataSource <TBCacheProvider> {

	BOOL _hasStorageError;
	unsigned long long _cacheExpirationInDays;
	NSManagedObjectContext* _context;
	TBPersistenceManager* _persistenceManager;
	TBCoreDataStoreDescriptor* _descriptor;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TBPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) TBCoreDataStoreDescriptor * descriptor;                 //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) BOOL hasStorageError;                                   //@synthesize hasStorageError=_hasStorageError - In the implementation block
@property (assign,nonatomic) unsigned long long cacheExpirationInDays;               //@synthesize cacheExpirationInDays=_cacheExpirationInDays - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPersistenceManager:(TBPersistenceManager *)arg1 ;
-(TBPersistenceManager *)persistenceManager;
-(NSManagedObjectContext *)context;
-(TBCoreDataStoreDescriptor *)descriptor;
-(id)initWithStoreDescriptor:(id)arg1 ;
-(void)setDescriptor:(TBCoreDataStoreDescriptor *)arg1 ;
-(unsigned long long)type;
-(void)executeFetchRequest:(id)arg1 ;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)_executePreferLocalFetchRequest:(id)arg1 ;
-(void)_executeFetchRequest:(id)arg1 ;
-(BOOL)_canSupportRequest:(id)arg1 ;
-(BOOL)hasStorageError;
-(unsigned long long)cacheExpirationInDays;
-(void)_createNewNetwork:(id)arg1 tile:(id)arg2 withMOC:(id)arg3 ;
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_createNewNetworkFromDictionary:(id)arg1 withMOC:(id)arg2 ;
-(void)cacheFetchResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeWithFetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importObjectsWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCacheExpirationInDays:(unsigned long long)arg1 ;
-(void)setHasStorageError:(BOOL)arg1 ;
@end

