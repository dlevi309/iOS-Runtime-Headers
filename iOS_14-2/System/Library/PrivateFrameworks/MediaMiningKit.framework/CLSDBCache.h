/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface CLSDBCache : NSObject {

	BOOL _supportsVersioning;
	NSURL* _diskCacheURL;
	NSString* _dataModelName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSURL * diskCacheURL;                                              //@synthesize diskCacheURL=_diskCacheURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataModelName;                                          //@synthesize dataModelName=_dataModelName - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic) BOOL supportsVersioning;                                                  //@synthesize supportsVersioning=_supportsVersioning - In the implementation block
+(void)initialize;
+(id)defaultCacheName;
+(id)currentApplicationDataUrlQueue;
+(id)defaultCache;
+(id)applicationDataUrlQueueWithURL:(id)arg1 ;
+(BOOL)locationIsValidForDatabaseAtURL:(id)arg1 ;
+(id)urlForGraphApplicationData;
+(id)diskCacheWithName:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(id)formatVersion;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)save;
-(id)initAtURL:(id)arg1 ;
-(NSString *)dataModelName;
-(NSURL *)diskCacheURL;
-(void)invalidateMemoryCaches;
-(id)initWithDiskCacheName:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)invalidateDiskCaches;
-(void)_resetCoreDataStack;
-(id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2 ;
-(void)_saveAsync;
-(BOOL)supportsVersioning;
-(void)setSupportsVersioning:(BOOL)arg1 ;
@end

