/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol OS_dispatch_queue, MTCoreDataContainerConfigProvider;
@class NSManagedObjectModel, MTManagedObjectContext, NSObject, NSPersistentStoreCoordinator, NSHashTable, NSMutableArray;

@interface MTCoreDataContainer : NSObject {

	BOOL _valid;
	NSManagedObjectModel* _managedObjectModel;
	MTManagedObjectContext* _mainQueueContext;
	MTManagedObjectContext* _privateQueueContext;
	MTManagedObjectContext* _carPlayContext;
	MTManagedObjectContext* _storeContext;
	MTManagedObjectContext* _importContext;
	MTManagedObjectContext* _resetableImportContext;
	NSObject*<OS_dispatch_queue> _mergeQueue;
	NSObject*<OS_dispatch_queue> _mergeNotifierQueue;
	NSPersistentStoreCoordinator* _coordinator;
	id<MTCoreDataContainerConfigProvider> _config;
	NSHashTable* _notifiers;
	NSMutableArray* _entityNames;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                    //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * mainQueueContext;                    //@synthesize mainQueueContext=_mainQueueContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * privateQueueContext;                 //@synthesize privateQueueContext=_privateQueueContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * carPlayContext;                      //@synthesize carPlayContext=_carPlayContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * storeContext;                        //@synthesize storeContext=_storeContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * importContext;                       //@synthesize importContext=_importContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * resetableImportContext;              //@synthesize resetableImportContext=_resetableImportContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mergeQueue;                      //@synthesize mergeQueue=_mergeQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mergeNotifierQueue;              //@synthesize mergeNotifierQueue=_mergeNotifierQueue - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * coordinator;                   //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) id<MTCoreDataContainerConfigProvider> config;                 //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSHashTable * notifiers;                                      //@synthesize notifiers=_notifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * entityNames;                                 //@synthesize entityNames=_entityNames - In the implementation block
@property (assign,nonatomic) BOOL valid;                                                   //@synthesize valid=_valid - In the implementation block
-(id<MTCoreDataContainerConfigProvider>)config;
-(void)setConfig:(id<MTCoreDataContainerConfigProvider>)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(id)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(void)destroy;
-(BOOL)valid;
-(void)setCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)coordinator;
-(MTManagedObjectContext *)importContext;
-(void)setImportContext:(MTManagedObjectContext *)arg1 ;
-(NSMutableArray *)entityNames;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)setEntityNames:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mergeQueue;
-(void)setMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)notifiers;
-(void)setNotifiers:(NSHashTable *)arg1 ;
-(void)setMergeNotifierQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MTManagedObjectContext *)mainQueueContext;
-(MTManagedObjectContext *)privateQueueContext;
-(id)_createManagedObjectContextWithName:(id)arg1 coordinator:(id)arg2 concurrencyType:(unsigned long long)arg3 ;
-(void)mergeFromContextDidSave:(id)arg1 ;
-(void)_notifyLibraryChanged:(id)arg1 ;
-(void)_addChanges:(id)arg1 ofType:(int)arg2 toLibraryChanges:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)mergeNotifierQueue;
-(void)_tearDown:(BOOL)arg1 ;
-(id)mainOrPrivateContext;
-(MTManagedObjectContext *)carPlayContext;
-(MTManagedObjectContext *)storeContext;
-(MTManagedObjectContext *)resetableImportContext;
-(id)persistentStoreUuid;
-(void)addChangeNotifier:(id)arg1 ;
-(void)removeChangeNotifier:(id)arg1 ;
-(void)tearDownAsync:(BOOL)arg1 ;
-(void)setMainQueueContext:(MTManagedObjectContext *)arg1 ;
-(void)setPrivateQueueContext:(MTManagedObjectContext *)arg1 ;
-(void)setCarPlayContext:(MTManagedObjectContext *)arg1 ;
-(void)setStoreContext:(MTManagedObjectContext *)arg1 ;
-(void)setResetableImportContext:(MTManagedObjectContext *)arg1 ;
@end

