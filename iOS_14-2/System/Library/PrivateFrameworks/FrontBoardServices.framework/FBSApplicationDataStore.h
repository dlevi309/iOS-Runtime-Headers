/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol FBSApplicationDataStoreRepositoryClient;
@class NSString;

@interface FBSApplicationDataStore : NSObject {

	NSString* _bundleId;
	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleId=_bundleId - In the implementation block
+(id)applicationsWithAvailableStores;
+(void)_setClassClient:(id)arg1 ;
+(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(void)synchronize;
+(BOOL)isServerProcess;
+(void)setPrefetchedKeys:(id)arg1 ;
+(void)_doWithClassClient:(/*^block*/id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)bundleID;
-(void)removeAllObjects;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

