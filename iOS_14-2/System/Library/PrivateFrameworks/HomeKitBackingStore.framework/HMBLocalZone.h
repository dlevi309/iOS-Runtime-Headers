/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMBLocalZoneID, HMBMirrorProtocol, HMBLocalZoneDelegate;
@class HMBLocalDatabase, HMBModelContainer, HMFUnfairLock, NSHashTable, NSMutableDictionary, HMBLocalSQLContext, NAFuture, NSString;

@interface HMBLocalZone : HMFObject <HMFLogging> {

	BOOL _hasStartedUp;
	HMBLocalDatabase* _localDatabase;
	HMBModelContainer* _modelContainer;
	id<HMBLocalZoneID> _zoneID;
	id<HMBMirrorProtocol> _mirror;
	id<HMBLocalZoneDelegate> _delegate;
	HMFUnfairLock* _propertyLock;
	NSHashTable* _observersForAllModels;
	NSMutableDictionary* _modelObserversByModelID;
	NSHashTable* _mirrorOutputObservers;
	unsigned long long _zoneRow;
	HMBLocalSQLContext* _sql;
	NAFuture* _shutdownFuture;

}

@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                               //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,readonly) NSHashTable * observersForAllModels;                        //@synthesize observersForAllModels=_observersForAllModels - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * modelObserversByModelID;              //@synthesize modelObserversByModelID=_modelObserversByModelID - In the implementation block
@property (nonatomic,readonly) NSHashTable * mirrorOutputObservers;                        //@synthesize mirrorOutputObservers=_mirrorOutputObservers - In the implementation block
@property (nonatomic,readonly) unsigned long long zoneRow;                                 //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLContext * sql;                                   //@synthesize sql=_sql - In the implementation block
@property (assign,nonatomic) BOOL hasStartedUp;                                            //@synthesize hasStartedUp=_hasStartedUp - In the implementation block
@property (nonatomic,retain) NAFuture * shutdownFuture;                                    //@synthesize shutdownFuture=_shutdownFuture - In the implementation block
@property (assign,nonatomic,__weak) HMBLocalDatabase * localDatabase;                      //@synthesize localDatabase=_localDatabase - In the implementation block
@property (nonatomic,readonly) HMBModelContainer * modelContainer;                         //@synthesize modelContainer=_modelContainer - In the implementation block
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID;                                  //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) id<HMBMirrorProtocol> mirror;                               //@synthesize mirror=_mirror - In the implementation block
@property (assign,nonatomic,__weak) id<HMBLocalZoneDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)outputModelFromUpdateModel:(id)arg1 mergedModel:(id)arg2 ;
+(BOOL)shouldMirrorInputExternalData:(id)arg1 overwriteExistingExternalData:(id)arg2 ;
+(id)outputBlockRowForTuple:(id)arg1 activity:(id)arg2 ;
-(id)remove:(id)arg1 ;
-(BOOL)shouldLogPrivateInformation;
-(id)flush;
-(HMBLocalSQLContext *)sql;
-(id)removeAllModelsOfTypes:(id)arg1 options:(id)arg2 ;
-(id)fetchModelsWithParentModelID:(id)arg1 ofType:(Class)arg2 error:(id*)arg3 ;
-(id)queryAllRowRecordsReturning:(unsigned long long)arg1 ;
-(id)update:(id)arg1 remove:(id)arg2 ;
-(id<HMBMirrorProtocol>)mirror;
-(BOOL)removeOutputBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)update:(id)arg1 ;
-(id<HMBLocalZoneID>)zoneID;
-(id)shutdown;
-(id)fetchRecordRowsWithModelIDs:(id)arg1 error:(id*)arg2 ;
-(id)fetchModelsOfType:(Class)arg1 error:(id*)arg2 ;
-(BOOL)_insertDeletionItemsForModelsAndDescendantModelsWithBlockRow:(unsigned long long)arg1 context:(id)arg2 type:(unsigned long long)arg3 modelIDs:(id)arg4 currentDepth:(unsigned long long)arg5 maximumDepth:(unsigned long long)arg6 options:(id)arg7 error:(id*)arg8 ;
-(id)fetchAllModelsWithError:(id*)arg1 ;
-(id)fetchItemsInBlock:(id)arg1 error:(id*)arg2 ;
-(id)setExternalID:(id)arg1 externalData:(id)arg2 forRecordRow:(unsigned long long)arg3 ;
-(id<HMBLocalZoneDelegate>)delegate;
-(id)removeOrphanedModelsOfTypes:(id)arg1 options:(id)arg2 ;
-(void)addObserver:(id)arg1 forModelWithID:(id)arg2 ;
-(id)fetchModelWithModelID:(id)arg1 recordRow:(unsigned long long*)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)modelObserversByModelID;
-(void)migrateUnsupportedModels;
-(id)fetchModelWithRecordRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)fetchModelWithModelID:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)insertBlockToRemoveModelsAndDescendantModelsWithType:(unsigned long long)arg1 modelIDs:(id)arg2 depth:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)insertBlockWithType:(unsigned long long)arg1 options:(id)arg2 items:(id)arg3 error:(id*)arg4 ;
-(void)queueIncompleteProcesses;
-(NSHashTable *)mirrorOutputObservers;
-(id)fetchReadyBlocksWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)logIdentifier;
-(id)fetchRecordsForOutputBlock:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)updateModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3 ;
-(id)removeModelsAndDescendantModelsWithIDs:(id)arg1 depth:(unsigned long long)arg2 options:(id)arg3 ;
-(id)queryModelsUsingQuery:(id)arg1 ;
-(id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 recordRowID:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)addModels:(id)arg1 andRemoveModelIDs:(id)arg2 options:(id)arg3 ;
-(void)addObserverForAllModels:(id)arg1 ;
-(id)modelIDForExternalID:(id)arg1 error:(id*)arg2 ;
-(id)triggerProcessForBlockRow:(unsigned long long)arg1 ;
-(unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)zoneRow;
-(id)externalIDForModelID:(id)arg1 error:(id*)arg2 ;
-(void)setHasStartedUp:(BOOL)arg1 ;
-(id)setExternalData:(id)arg1 forModelID:(id)arg2 ;
-(void)setDelegate:(id<HMBLocalZoneDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)removeAllRecordsWithError:(id*)arg1 ;
-(id)fetchRecordRowWithExternalID:(id)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)removeBlockWithRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)removeObserver:(id)arg1 forModelWithID:(id)arg2 ;
-(id)fetchModelsWithParentModelID:(id)arg1 error:(id*)arg2 ;
-(id)queryModelsRecursivelyStartingWithModelID:(id)arg1 ;
-(NSHashTable *)observersForAllModels;
-(id)queryModelsUsingQuery:(id)arg1 arguments:(id)arg2 ;
-(BOOL)hasStartedUp;
-(id)createOutputBlockWithError:(id*)arg1 ;
-(id)fetchModels;
-(id)fetchOptionsForOutputBlock:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)setExternalData:(id)arg1 forExternalID:(id)arg2 ;
-(id)updateModels:(id)arg1 options:(id)arg2 ;
-(id)observersForModelWithID:(id)arg1 ;
-(void)setShutdownFuture:(NAFuture *)arg1 ;
-(NAFuture *)shutdownFuture;
-(id)queryModelsOfType:(Class)arg1 predicate:(id)arg2 ;
-(HMFUnfairLock *)propertyLock;
-(id)addModels:(id)arg1 options:(id)arg2 ;
-(id)fetchModelWithModelID:(id)arg1 ofType:(Class)arg2 error:(id*)arg3 ;
-(id)queryModelsOfType:(Class)arg1 filter:(/*^block*/id)arg2 ;
-(id)externalDataForModelID:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)insertBlockToRemoveOrphanedModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)rebuildIndexesIfNeeded;
-(id)markGroupAsSentWithOutputBlock:(unsigned long long)arg1 tuples:(id)arg2 ;
-(id)inputContext:(id*)arg1 ;
-(id)removeModelIDs:(id)arg1 options:(id)arg2 ;
-(id)queryModelsWithParentModelID:(id)arg1 ;
-(id)queryModelsOfType:(Class)arg1 ;
-(id)countModelsUsingQuery:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)allMirrorOutputObservers;
-(HMBModelContainer *)modelContainer;
-(HMBLocalDatabase *)localDatabase;
-(id)initWithLocalDatabase:(id)arg1 zoneID:(id)arg2 zoneRow:(unsigned long long)arg3 delegate:(id)arg4 modelContainer:(id)arg5 mirror:(id)arg6 ;
-(void)removeObserverForAllModels:(id)arg1 ;
-(void)removeMirrorOutputObserver:(id)arg1 ;
-(id)queryModelsOfType:(Class)arg1 properties:(id)arg2 filter:(/*^block*/id)arg3 ;
-(id)externalDataForExternalID:(id)arg1 error:(id*)arg2 ;
-(void)startUp;
-(id)createInputBlockWithType:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)destroyWithError:(id*)arg1 ;
-(id)fetchRecordRowWithModelID:(id)arg1 returning:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)addMirrorOutputObserver:(id)arg1 ;
-(void)setLocalDatabase:(HMBLocalDatabase *)arg1 ;
@end

