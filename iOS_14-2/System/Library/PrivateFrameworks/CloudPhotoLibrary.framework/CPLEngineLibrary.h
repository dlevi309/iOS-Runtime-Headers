/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue, CPLEngineLibraryOwner;
@class NSArray, NSObject, NSMutableDictionary, NSHashTable, NSError, CPLStatus, NSDate, CPLPlatformObject, NSString, NSURL, CPLEngineStore, CPLEngineScheduler, CPLEngineSyncManager, CPLEngineTransport, CPLEngineSystemMonitor, CPLEngineFeedbackManager, CPLConfiguration;

@interface CPLEngineLibrary : NSObject <CPLStatusDelegate, CPLAbstractObject> {

	NSArray* _components;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _closingQueue;
	NSMutableDictionary* _blocksToDispatchWhenLibraryAttaches;
	NSHashTable* _attachedObjects;
	NSError* _openingError;
	CPLStatus* _status;
	BOOL _closed;
	BOOL _totalAssetCountHasBeenCalculated;
	NSDate* _cachedLastQuarantineCountReportDate;
	unsigned long long _totalAssetCount;
	BOOL _libraryIsCorrupted;
	CPLPlatformObject* _platformObject;
	NSString* _currentClosingComponentName;
	NSURL* _clientLibraryBaseURL;
	NSURL* _cloudLibraryStateStorageURL;
	NSURL* _cloudLibraryResourceStorageURL;
	NSString* _libraryIdentifier;
	unsigned long long _libraryOptions;
	id<CPLEngineLibraryOwner> _owner;
	CPLEngineStore* _store;
	CPLEngineScheduler* _scheduler;
	CPLEngineSyncManager* _syncManager;
	CPLEngineTransport* _transport;
	CPLEngineSystemMonitor* _systemMonitor;
	CPLEngineFeedbackManager* _feedback;
	CPLConfiguration* _configuration;

}

@property (nonatomic,readonly) BOOL libraryIsCorrupted;                                  //@synthesize libraryIsCorrupted=_libraryIsCorrupted - In the implementation block
@property (readonly) NSString * currentClosingComponentName;                             //@synthesize currentClosingComponentName=_currentClosingComponentName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * clientLibraryBaseURL;                        //@synthesize clientLibraryBaseURL=_clientLibraryBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryStateStorageURL;                 //@synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryResourceStorageURL;              //@synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                        //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long libraryOptions;                        //@synthesize libraryOptions=_libraryOptions - In the implementation block
@property (assign,nonatomic,__weak) id<CPLEngineLibraryOwner> owner;                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) CPLEngineStore * store;                                   //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEngineScheduler * scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CPLEngineSyncManager * syncManager;                       //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) CPLEngineTransport * transport;                           //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) CPLEngineSystemMonitor * systemMonitor;                   //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,readonly) CPLEngineFeedbackManager * feedback;                      //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) CPLConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL hasChangesToProcess; 
@property (assign,nonatomic) BOOL iCloudLibraryClientVersionTooOld; 
@property (nonatomic,readonly) NSDate * initialSyncDate; 
@property (assign,nonatomic) BOOL isExceedingQuota; 
@property (assign,nonatomic) BOOL iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) BOOL iCloudLibraryExists; 
@property (nonatomic,copy) NSDate * exitDeleteTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                       //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
-(CPLEngineFeedbackManager *)feedback;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)statusDidChange:(id)arg1 ;
-(CPLEngineTransport *)transport;
-(id<CPLEngineLibraryOwner>)owner;
-(CPLEngineStore *)store;
-(NSString *)libraryIdentifier;
-(NSDate *)initialSyncDate;
-(BOOL)isExceedingQuota;
-(NSDate *)exitDeleteTime;
-(CPLEngineSystemMonitor *)systemMonitor;
-(BOOL)iCloudLibraryHasBeenWiped;
-(NSString *)description;
-(CPLConfiguration *)configuration;
-(BOOL)iCloudLibraryClientVersionTooOld;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOwner:(id<CPLEngineLibraryOwner>)arg1 ;
-(CPLEngineSyncManager *)syncManager;
-(id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(CPLPlatformObject *)platformObject;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(id)componentName;
-(CPLEngineScheduler *)scheduler;
-(void)startSyncSession;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestClientToPushAllChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideCloudResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)clientLibraryBaseURL;
-(NSURL *)cloudLibraryStateStorageURL;
-(NSURL *)cloudLibraryResourceStorageURL;
-(unsigned long long)libraryOptions;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)corruptionInfo;
-(BOOL)hasChangesToProcess;
-(void)setHasChangesToProcess:(BOOL)arg1 ;
-(void)setICloudLibraryHasBeenWiped:(BOOL)arg1 ;
-(BOOL)iCloudLibraryExists;
-(void)setICloudLibraryExists:(BOOL)arg1 ;
-(void)setICloudLibraryClientVersionTooOld:(BOOL)arg1 ;
-(void)setHasCellularBudget:(BOOL)arg1 hasBatteryBudget:(BOOL)arg2 isConstrainedNetwork:(BOOL)arg3 isBudgetValid:(BOOL)arg4 ;
-(void)setConnectedToNetwork:(BOOL)arg1 cellularIsRestricted:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(void)setLowDiskSpace:(BOOL)arg1 ;
-(void)reportLibraryCorrupted;
-(void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1 ;
-(void)reportQuarantineCountIfNecessary;
-(void)reportRadar:(unsigned long long)arg1 ;
-(void)_openNextComponent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setCurrentClosingComponentName:(id)arg1 ;
-(NSString *)currentClosingComponentName;
-(void)updateLastSuccessfullSyncDate:(id)arg1 ;
-(void)updateInitialSyncDate:(id)arg1 ;
-(void)reportUnsuccessfulSync;
-(void)updateDisabledFeatures:(id)arg1 ;
-(void)_updateTotalAssetCountWithAssetCounts:(id)arg1 ;
-(void)updateAssetCountsFromServer:(id)arg1 ;
-(unsigned long long)totalAssetCountOnServer;
-(BOOL)hasAssetCountOnServer;
-(void)updateAccountFlagsData:(id)arg1 ;
-(BOOL)hasAccountFlagsData;
-(void)forceFetchAccountFlags;
-(id)_libraryObject;
-(void)attachObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)detachObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(/*^block*/id)arg2 ;
-(void)_performPendingBlockForWhenLibraryAttaches;
-(id)_performBlockWhenLibraryAttaches:(/*^block*/id)arg1 ;
-(void)_cancelBlockWhenLibraryAttaches:(id)arg1 ;
-(void)performBlockOnLibrary:(/*^block*/id)arg1 ;
-(void)requestAttachedLibrary;
-(void)notifyAttachedObjectsPullQueueIsFull;
-(void)notifyAttachedObjectsHasStatusChanges;
-(void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1 ;
-(void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1 ;
-(void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1 ;
-(void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2 ;
-(void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5 ;
-(void)forceBackupWithActivity:(id)arg1 forceClientPush:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performMaintenanceCleanupWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)libraryIsCorrupted;
-(void)_fillStatus:(id)arg1 forComponents:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_fillStatusArray:(id)arg1 forComponents:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
