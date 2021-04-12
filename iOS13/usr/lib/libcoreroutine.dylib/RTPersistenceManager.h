/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/RTPersistenceModelProvider.h>
#import <libobjc.A.dylib/RTPersistenceContextDelegate.h>

@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;
@class NSURL, NSArray, RTPersistenceStore, RTPersistenceContainer, NSManagedObjectModel, NSRecursiveLock, NSPointerArray, NSMutableArray, NSString;

@interface RTPersistenceManager : RTNotifier <RTPersistenceModelProvider, RTPersistenceContextDelegate> {

	NSURL* _modelsDirectory;
	NSURL* _storesDirectory;
	NSArray* _sortedModelNames;
	RTPersistenceStore* _stores[3];
	RTPersistenceContainer* _container;
	NSManagedObjectModel* _latestModel;
	NSRecursiveLock* _pointerArrayLock;
	NSRecursiveLock* _storesArrayLock;
	NSPointerArray* _outstandingContexts;
	NSMutableArray* _remoteServers;
	unsigned long long _availability;
	id<RTPersistenceDelegate> _delegate;
	id<RTPersistenceMirroringDelegate> _mirroringDelegate;

}

@property (assign) unsigned long long availability;                                                    //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic,__weak) id<RTPersistenceDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<RTPersistenceMirroringDelegate> mirroringDelegate;              //@synthesize mirroringDelegate=_mirroringDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultModelsDirectory;
+(id)defaultStoresDirectory;
-(id)init;
-(void)dealloc;
-(void)setContainer:(id)arg1 ;
-(id<RTPersistenceDelegate>)delegate;
-(void)setDelegate:(id<RTPersistenceDelegate>)arg1 ;
-(id<RTPersistenceMirroringDelegate>)mirroringDelegate;
-(id)managedObjectContext;
-(void)setMirroringDelegate:(id<RTPersistenceMirroringDelegate>)arg1 ;
-(unsigned long long)availability;
-(void)setAvailability:(unsigned long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)initializeContainer;
-(void)performImportMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)performExportMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)createManagedObjectContext:(/*^block*/id)arg1 ;
-(void)updateStoreAvailability:(unsigned long long)arg1 ;
-(id)persistenceContextWithOptions:(unsigned long long)arg1 ;
-(id)persistenceStoreForType:(unsigned long long)arg1 ;
-(long long)mirroringDelegateStateForStoreType:(unsigned long long)arg1 ;
-(void)performZoneResetMirroringRequestWithQualityOfService:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)persistenceContextPerformedSave:(id)arg1 error:(id*)arg2 ;
-(BOOL)persistenceContextShouldExecute:(id)arg1 ;
-(void)persistenceContext:(id)arg1 encounteredError:(id)arg2 ;
-(id)latestModel;
-(id)modelFollowingModel:(id)arg1 ;
-(void)setupPersistenceContainers:(/*^block*/id)arg1 ;
-(unsigned long long)storeTypeForURL:(id)arg1 ;
-(id)outstandingContexts;
-(id)historyTokenForStoreType:(unsigned long long)arg1 ;
-(unsigned long long)countOfPersistenceStores;
-(id)waitForPersistenceContext;
-(void)performImportMirroringRequest:(/*^block*/id)arg1 ;
-(void)performExportMirroringRequest:(/*^block*/id)arg1 ;
-(void)performZoneResetMirroringRequest:(/*^block*/id)arg1 ;
-(void)mirroringDelegateSetupState:(/*^block*/id)arg1 ;
-(void)tearDownPersistenceStack:(/*^block*/id)arg1 ;
-(id)initWithModelsDirectory:(id)arg1 storesDirectory:(id)arg2 ;
-(void)onCoreDataResetSync:(id)arg1 ;
-(id)storeDescriptionForStoreWithType:(unsigned long long)arg1 ;
-(BOOL)initializePersistenceStores;
-(id)persistenceStoreConfigurations;
-(void)trackContext:(id)arg1 ;
-(BOOL)_setupPersistenceContainers;
-(void)_updateStoreAvailability:(unsigned long long)arg1 ;
-(void)_setupRemoteStoreServers;
-(id)sortedModelNames;
-(id)urlForModelWithName:(id)arg1 ;
-(id)URLForStoreType:(unsigned long long)arg1 ;
-(id)modelNamed:(id)arg1 ;
-(void)performMirroringRequestOfType:(long long)arg1 qualityOfService:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_onCoreDataResetSync:(id)arg1 ;
@end

