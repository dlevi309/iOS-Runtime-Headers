/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultCache;
+(id)applicationDataUrlQueueWithURL:(id)arg1 ;
+(id)defaultCacheName;
+(BOOL)locationIsValidForDatabaseAtURL:(id)arg1 ;
+(id)urlForGraphApplicationData;
+(id)currentApplicationDataUrlQueue;
+(id)diskCacheWithName:(id)arg1 ;
-(BOOL)save;
-(NSManagedObjectModel *)managedObjectModel;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(id)formatVersion;
-(void)invalidateDiskCaches;
-(void)_resetCoreDataStack;
-(NSURL *)diskCacheURL;
-(void)invalidateMemoryCaches;
-(id)initWithDiskCacheName:(id)arg1 ;
-(NSString *)dataModelName;
-(id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2 ;
-(id)initAtURL:(id)arg1 ;
-(void)_saveAsync;
-(BOOL)supportsVersioning;
-(void)setSupportsVersioning:(BOOL)arg1 ;
@end

