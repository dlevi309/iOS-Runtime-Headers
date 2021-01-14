/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencyManagedDataStore, NSPersistentContainer, NSManagedObjectContext, NSHashTable;

@interface TransparencyManagedDataStoreController : NSObject {

	Aq _sequenceId;
	BOOL _movedDatabase;
	TransparencyManagedDataStore* _dataStore;
	TransparencyManagedDataStore* _xpcQueueDataStore;
	TransparencyManagedDataStore* _mainQueueDataStore;
	NSPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _topLevelContext;
	NSManagedObjectContext* _mainQueueContext;
	NSHashTable* _mocStore;

}

@property (retain) NSPersistentContainer * persistentContainer;                    //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (retain) NSManagedObjectContext * topLevelContext;                       //@synthesize topLevelContext=_topLevelContext - In the implementation block
@property (retain) NSManagedObjectContext * mainQueueContext;                      //@synthesize mainQueueContext=_mainQueueContext - In the implementation block
@property (assign) BOOL movedDatabase;                                             //@synthesize movedDatabase=_movedDatabase - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) TransparencyManagedDataStore * xpcQueueDataStore;               //@synthesize xpcQueueDataStore=_xpcQueueDataStore - In the implementation block
@property (retain) TransparencyManagedDataStore * mainQueueDataStore;              //@synthesize mainQueueDataStore=_mainQueueDataStore - In the implementation block
@property (retain) NSHashTable * mocStore;                                         //@synthesize mocStore=_mocStore - In the implementation block
@property (readonly) BOOL loadedStore; 
@property (readonly) NSManagedObjectContext * backgroundContext; 
@property (readonly) Aq* sequenceId; 
+(void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4 ;
+(void)reportCoreDataEventForEntity:(id)arg1 hardFailure:(BOOL)arg2 write:(BOOL)arg3 code:(long long)arg4 underlyingError:(id)arg5 ;
-(TransparencyManagedDataStore *)dataStore;
-(NSPersistentContainer *)persistentContainer;
-(id)bundleURL;
-(id)init;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSManagedObjectContext *)backgroundContext;
-(void)loadPersistentStores;
-(void)setMocStore:(NSHashTable *)arg1 ;
-(BOOL)movedDatabase;
-(void)setTopLevelContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)topLevelContext;
-(void)setMainQueueContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)mainQueueContext;
-(long long)currentSequenceId:(id*)arg1 ;
-(void)handleDidSaveNotification:(id)arg1 ;
-(void)saveTopLevelContext;
-(void)setXpcQueueDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMainQueueDataStore:(TransparencyManagedDataStore *)arg1 ;
-(BOOL)createContexts:(id*)arg1 ;
-(BOOL)createDataStores:(id*)arg1 ;
-(BOOL)shouldMoveAsideDatabase:(id)arg1 ;
-(BOOL)moveAsideDatabase:(id)arg1 ;
-(void)setMovedDatabase:(BOOL)arg1 ;
-(NSHashTable *)mocStore;
-(BOOL)saveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadedStore;
-(Aq*)sequenceId:(SEL)arg1 ;
-(TransparencyManagedDataStore *)xpcQueueDataStore;
-(TransparencyManagedDataStore *)mainQueueDataStore;
@end

