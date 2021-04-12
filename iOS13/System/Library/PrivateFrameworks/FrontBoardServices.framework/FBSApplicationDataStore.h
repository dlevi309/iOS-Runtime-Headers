/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)synchronize;
+(BOOL)isServerProcess;
+(void)setPrefetchedKeys:(id)arg1 ;
+(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
+(void)_doWithClassClient:(/*^block*/id)arg1 ;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)_setClassClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleID;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
@end

