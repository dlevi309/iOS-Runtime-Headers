/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKAssetRepairSchedulerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class CKContainer, CKUploadRequestConfiguration, NSURL, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSSet;

@interface CKAssetRepairScheduler : NSObject {

	id<CKAssetRepairSchedulerDelegate> _delegate;
	CKContainer* _container;
	CKUploadRequestConfiguration* _repairContainerOverrides;
	NSURL* _temporaryAssetDirectory;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _requestOperationQueue;
	NSOperationQueue* _uploadOperationQueue;
	NSObject*<OS_dispatch_source> _uploadPendingRequestTimer;
	NSObject*<OS_dispatch_source> _uploadSuspensionTimer;
	NSMutableDictionary* _remainingAssetsToRequestCallbacks;
	NSMutableDictionary* _assetCache;
	NSMutableSet* _confirmedMissingAssets;
	NSMutableSet* _assetsBeingRequested;
	NSMutableSet* _assetsBeingUploaded;
	NSMutableDictionary* _retryCountForAssets;

}

@property (assign,nonatomic,__weak) CKContainer * container;                                       //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) CKUploadRequestConfiguration * repairContainerOverrides;                //@synthesize repairContainerOverrides=_repairContainerOverrides - In the implementation block
@property (nonatomic,copy) NSURL * temporaryAssetDirectory;                                        //@synthesize temporaryAssetDirectory=_temporaryAssetDirectory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                           //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestOperationQueue;                             //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * uploadOperationQueue;                              //@synthesize uploadOperationQueue=_uploadOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> uploadPendingRequestTimer;              //@synthesize uploadPendingRequestTimer=_uploadPendingRequestTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> uploadSuspensionTimer;                  //@synthesize uploadSuspensionTimer=_uploadSuspensionTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remainingAssetsToRequestCallbacks;              //@synthesize remainingAssetsToRequestCallbacks=_remainingAssetsToRequestCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCache;                                     //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) NSSet * remainingAssets; 
@property (nonatomic,readonly) NSSet * confirmedAvailableAssets; 
@property (nonatomic,retain) NSMutableSet * confirmedMissingAssets;                                //@synthesize confirmedMissingAssets=_confirmedMissingAssets - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsBeingRequested;                                  //@synthesize assetsBeingRequested=_assetsBeingRequested - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsBeingUploaded;                                   //@synthesize assetsBeingUploaded=_assetsBeingUploaded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryCountForAssets;                            //@synthesize retryCountForAssets=_retryCountForAssets - In the implementation block
@property (__weak) id<CKAssetRepairSchedulerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
+(id)nameForEvent:(long long)arg1 ;
+(long long)repairBatchSizeLimit;
+(long long)assetSizeEstimate;
+(long long)estimatedSizeForAssetOrPackage:(id)arg1 ;
+(long long)repairBatchCountLimit;
+(double)requestTimeout;
+(long long)cacheSizeLimit;
+(long long)repairRetryCount;
+(double)defaultSuspensionTime;
+(long long)canCopyFromFileURL:(id)arg1 toDirectoryURL:(id)arg2 ;
+(long long)packageSizeEstimate;
+(unsigned long long)remainingCapacityAtURL:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)diskSpaceBuffer;
+(long long)cacheCountLimit;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)tickle;
-(BOOL)hasPendingWork;
-(void)cancelAllOperations;
-(unsigned long long)cacheSize;
-(unsigned long long)cacheCount;
-(id<CKAssetRepairSchedulerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSMutableDictionary *)assetCache;
-(NSSet *)remainingAssets;
-(NSOperationQueue *)uploadOperationQueue;
-(NSMutableDictionary *)remainingAssetsToRequestCallbacks;
-(id)allRemainingRequestableAssets;
-(NSMutableDictionary *)retryCountForAssets;
-(NSMutableSet *)assetsBeingRequested;
-(NSOperationQueue *)requestOperationQueue;
-(NSMutableSet *)assetsBeingUploaded;
-(void)respondToEvent:(long long)arg1 withObject:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)uploadPendingRequestTimer;
-(void)setUploadPendingRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)allRemainingUploadableAssets;
-(void)scheduleRequestsWithMaxCount:(long long)arg1 ;
-(void)scheduleUploadBatch;
-(NSObject*<OS_dispatch_source>)uploadSuspensionTimer;
-(void)setUploadSuspensionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableSet *)confirmedMissingAssets;
-(void)scheduleClearAssetCache;
-(void)cacheAsset:(id)arg1 withMetadata:(id)arg2 ;
-(NSURL *)temporaryAssetDirectory;
-(void)removeAssetFromCacheWithMetadata:(id)arg1 ;
-(id)clonedAsset:(id)arg1 withError:(id*)arg2 ;
-(NSSet *)confirmedAvailableAssets;
-(void)setTemporaryAssetDirectory:(NSURL *)arg1 ;
-(void)setRequestOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setUploadOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setRemainingAssetsToRequestCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setConfirmedMissingAssets:(NSMutableSet *)arg1 ;
-(void)setAssetsBeingRequested:(NSMutableSet *)arg1 ;
-(void)setAssetsBeingUploaded:(NSMutableSet *)arg1 ;
-(void)setRetryCountForAssets:(NSMutableDictionary *)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setDelegate:(id<CKAssetRepairSchedulerDelegate>)arg1 ;
-(void)setAssetCache:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)clearAssetCache;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ;
-(CKUploadRequestConfiguration *)repairContainerOverrides;
-(void)setRepairContainerOverrides:(CKUploadRequestConfiguration *)arg1 ;
-(CKContainer *)container;
-(void)removeUploadRequestWithRecordID:(id)arg1 ;
-(void)addUploadRequestsWithMetadata:(id)arg1 requestBlocks:(id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

