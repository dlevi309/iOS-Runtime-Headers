/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImportExceptionRecorder.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSHashTable, NSString, NSURL, NSObject, NSMutableArray, NSDateFormatter, PHImportDuplicateChecker, NSMutableSet, PHImportOptions, NSProgress;

@interface PHImportSource : PHImportExceptionRecorder {

	NSMutableDictionary* _assetsByImportIdentifier;
	NSMutableDictionary* _representationsByImportIdentifier;
	NSMutableDictionary* _audioByImportIdentifier;
	NSHashTable* _observers;
	os_unfair_lock_s _observersLock;
	BOOL _ejecting;
	BOOL _canAutolaunch;
	unsigned char _sourceAccessState;
	BOOL _rampBatchInterval;
	BOOL _open;
	BOOL _canShowProgress;
	BOOL _deleteContentAllowed;
	NSString* _uuid;
	unsigned long long _batchSize;
	double _batchInterval;
	NSURL* _autolaunchApplicationURL;
	unsigned long long _currentItemIndex;
	unsigned long long _nextItemIndex;
	unsigned long long _inFlight;
	unsigned long long _completedItems;
	NSObject*<OS_dispatch_queue> _controlQueue;
	NSObject*<OS_dispatch_queue> _itemQueue;
	NSObject*<OS_dispatch_queue> _batchQueue;
	NSObject*<OS_dispatch_queue> _dupPathCollectionQueue;
	/*^block*/id _completion;
	NSMutableArray* _duplicateAssets;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _itemProcessingQueue;
	unsigned long long _processingConcurrency;
	NSMutableArray* _removedSourceFileIdentifiers;
	NSDateFormatter* _dupeDateFormatter;
	PHImportDuplicateChecker* _duplicateChecker;
	NSMutableArray* _processed;
	double _batchStart;
	unsigned long long _batchCount;
	NSMutableDictionary* _importIdentifierToLivePhotoStateMap;
	NSMutableArray* _items;
	NSMutableSet* _folders;
	NSMutableArray* _errors;
	PHImportOptions* _options;
	NSMutableArray* _assets;
	NSProgress* _progress;
	long long _assetLoadOrder;
	NSString* _prefix;
	NSMutableDictionary* _pairedSidecarsByImportIdentifier;

}

@property (assign,nonatomic) unsigned long long currentItemIndex;                                    //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long nextItemIndex;                                       //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long inFlight;                                            //@synthesize inFlight=_inFlight - In the implementation block
@property (assign,nonatomic) unsigned long long completedItems;                                      //@synthesize completedItems=_completedItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> controlQueue;                              //@synthesize controlQueue=_controlQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> itemQueue;                                 //@synthesize itemQueue=_itemQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batchQueue;                                //@synthesize batchQueue=_batchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dupPathCollectionQueue;                    //@synthesize dupPathCollectionQueue=_dupPathCollectionQueue - In the implementation block
@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSMutableArray * duplicateAssets;                                       //@synthesize duplicateAssets=_duplicateAssets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                           //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> itemProcessingQueue;                       //@synthesize itemProcessingQueue=_itemProcessingQueue - In the implementation block
@property (assign,nonatomic) unsigned long long processingConcurrency;                               //@synthesize processingConcurrency=_processingConcurrency - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedSourceFileIdentifiers;                        //@synthesize removedSourceFileIdentifiers=_removedSourceFileIdentifiers - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dupeDateFormatter;                                    //@synthesize dupeDateFormatter=_dupeDateFormatter - In the implementation block
@property (nonatomic,retain) PHImportDuplicateChecker * duplicateChecker;                            //@synthesize duplicateChecker=_duplicateChecker - In the implementation block
@property (nonatomic,retain) NSMutableArray * processed;                                             //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) double batchStart;                                                      //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchCount;                                          //@synthesize batchCount=_batchCount - In the implementation block
@property (assign,nonatomic) BOOL rampBatchInterval;                                                 //@synthesize rampBatchInterval=_rampBatchInterval - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * importIdentifierToLivePhotoStateMap;              //@synthesize importIdentifierToLivePhotoStateMap=_importIdentifierToLivePhotoStateMap - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableSet * folders;                                                 //@synthesize folders=_folders - In the implementation block
@property (retain) NSMutableArray * errors;                                                          //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL open;                                                              //@synthesize open=_open - In the implementation block
@property (readonly) BOOL canShowProgress;                                                           //@synthesize canShowProgress=_canShowProgress - In the implementation block
@property (assign,nonatomic) BOOL deleteContentAllowed;                                              //@synthesize deleteContentAllowed=_deleteContentAllowed - In the implementation block
@property (nonatomic,retain) PHImportOptions * options;                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                                                //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL stalled; 
@property (assign,nonatomic) long long assetLoadOrder;                                               //@synthesize assetLoadOrder=_assetLoadOrder - In the implementation block
@property (assign,nonatomic) unsigned char sourceAccessState;                                        //@synthesize sourceAccessState=_sourceAccessState - In the implementation block
@property (nonatomic,retain) NSString * prefix;                                                      //@synthesize prefix=_prefix - In the implementation block
@property (readonly) BOOL canReference; 
@property (nonatomic,retain) NSMutableDictionary * pairedSidecarsByImportIdentifier;                 //@synthesize pairedSidecarsByImportIdentifier=_pairedSidecarsByImportIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * productKind; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) CGImageRef icon; 
@property (nonatomic,readonly) BOOL isCamera; 
@property (nonatomic,readonly) BOOL isAppleDevice; 
@property (nonatomic,readonly) BOOL canEject; 
@property (nonatomic,readonly) BOOL isConnectedDevice; 
@property (getter=isEjecting,nonatomic,readonly) BOOL ejecting;                                      //@synthesize ejecting=_ejecting - In the implementation block
@property (nonatomic,readonly) BOOL canAutolaunch;                                                   //@synthesize canAutolaunch=_canAutolaunch - In the implementation block
@property (nonatomic,readonly) BOOL isAvailable; 
@property (nonatomic,readonly) NSString * volumePath; 
@property (nonatomic,readonly) BOOL canDeleteContent; 
@property (assign,nonatomic) unsigned long long batchSize;                                           //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) double batchInterval;                                                   //@synthesize batchInterval=_batchInterval - In the implementation block
@property (nonatomic,copy) NSURL * autolaunchApplicationURL;                                         //@synthesize autolaunchApplicationURL=_autolaunchApplicationURL - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(PHImportOptions *)options;
-(BOOL)open;
-(NSString *)path;
-(NSProgress *)progress;
-(NSString *)uuid;
-(void)setOptions:(PHImportOptions *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isAvailable;
-(NSMutableArray *)errors;
-(void)setCompletion:(id)arg1 ;
-(unsigned long long)batchSize;
-(id)completion;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)prefix;
-(void)setProgress:(NSProgress *)arg1 ;
-(CGImageRef)icon;
-(void)setPrefix:(NSString *)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setFolders:(NSMutableSet *)arg1 ;
-(NSMutableSet *)folders;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(unsigned long long)nextItemIndex;
-(void)setNextItemIndex:(unsigned long long)arg1 ;
-(BOOL)isAppleDevice;
-(NSString *)volumePath;
-(NSString *)productKind;
-(BOOL)canEject;
-(NSMutableArray *)processed;
-(void)setProcessed:(NSMutableArray *)arg1 ;
-(id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(BOOL)arg2 ;
-(void)checkForDuplicates:(id)arg1 considerItemsInTrash:(BOOL)arg2 forEach:(/*^block*/id)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)generatePPTData;
-(BOOL)canReference;
-(NSMutableArray *)duplicateAssets;
-(void)beginWork;
-(id)assetsByProcessingItem:(id)arg1 ;
-(void)endWork;
-(void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeAssets:(id)arg1 ;
-(void)cancelAssetLoading;
-(id)deleteImportAssets:(id)arg1 isConfirmed:(BOOL)arg2 isCancelable:(BOOL)arg3 atEnd:(/*^block*/id)arg4 ;
-(BOOL)canDeleteContent;
-(BOOL)canAutolaunch;
-(BOOL)isConnectedDevice;
-(void)eject;
-(BOOL)isEjecting;
-(void)addImportSourceObserver:(id)arg1 ;
-(void)removeImportSourceObserver:(id)arg1 ;
-(void)notifyObserversUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isCamera;
-(id)requestDeleteAssetsForRecords:(id)arg1 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 atEnd:(/*^block*/id)arg4 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 atEnd:(/*^block*/id)arg5 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchInterval:(double)arg4 atEnd:(/*^block*/id)arg5 ;
-(id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(BOOL)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 batchInterval:(double)arg5 atEnd:(/*^block*/id)arg6 ;
-(void)processNextItems;
-(void)endBatch;
-(unsigned long long)inFlight;
-(void)incrementInFlight;
-(void)decrementInFlight;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(BOOL)batchComplete;
-(BOOL)stalled;
-(void)addSourceFileIdentifiersForRemovedFiles:(id)arg1 ;
-(void)addPairedSidecar:(id)arg1 ;
-(BOOL)isPairedSidecar:(id)arg1 ;
-(BOOL)date:(id)arg1 matchesDate:(id)arg2 ;
-(BOOL)processPotentialJpegAsset:(id)arg1 plusRawAsset:(id)arg2 ;
-(id)processAssets:(id)arg1 ;
-(void)processRepresentation:(id)arg1 ;
-(void)processResource:(id)arg1 ;
-(void)addRepresentationsForAsset:(id)arg1 ;
-(BOOL)isLivePhotoForImportIdentifier:(id)arg1 ;
-(void)setIsLivePhotoForImportIdentifier:(id)arg1 ;
-(BOOL)confirmAsset:(id)arg1 isRenderOf:(id)arg2 ;
-(BOOL)confirmAsset:(id)arg1 isSocOf:(id)arg2 ;
-(BOOL)confirmAsset:(id)arg1 isBaseOf:(id)arg2 ;
-(BOOL)confirmAsset:(id)arg1 isSidecarOfAsset:(id)arg2 ;
-(void)loadSidecarsFor:(id)arg1 ;
-(id)additionalQueues;
-(void)pauseAssetLoading;
-(void)resumeAssetLoading;
-(id)assetsDescription;
-(unsigned char)sourceAccessState;
-(void)setSourceAccessState:(unsigned char)arg1 ;
-(NSURL *)autolaunchApplicationURL;
-(void)setAutolaunchApplicationURL:(NSURL *)arg1 ;
-(unsigned long long)currentItemIndex;
-(void)setCurrentItemIndex:(unsigned long long)arg1 ;
-(void)setInFlight:(unsigned long long)arg1 ;
-(unsigned long long)completedItems;
-(void)setCompletedItems:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)controlQueue;
-(void)setControlQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)itemQueue;
-(void)setItemQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)batchQueue;
-(void)setBatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dupPathCollectionQueue;
-(void)setDupPathCollectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDuplicateAssets:(NSMutableArray *)arg1 ;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)itemProcessingQueue;
-(void)setItemProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)processingConcurrency;
-(void)setProcessingConcurrency:(unsigned long long)arg1 ;
-(NSMutableArray *)removedSourceFileIdentifiers;
-(NSDateFormatter *)dupeDateFormatter;
-(void)setDupeDateFormatter:(NSDateFormatter *)arg1 ;
-(PHImportDuplicateChecker *)duplicateChecker;
-(void)setDuplicateChecker:(PHImportDuplicateChecker *)arg1 ;
-(double)batchStart;
-(void)setBatchStart:(double)arg1 ;
-(unsigned long long)batchCount;
-(void)setBatchCount:(unsigned long long)arg1 ;
-(BOOL)rampBatchInterval;
-(void)setRampBatchInterval:(BOOL)arg1 ;
-(NSMutableDictionary *)importIdentifierToLivePhotoStateMap;
-(void)setImportIdentifierToLivePhotoStateMap:(NSMutableDictionary *)arg1 ;
-(BOOL)canShowProgress;
-(BOOL)deleteContentAllowed;
-(void)setDeleteContentAllowed:(BOOL)arg1 ;
-(long long)assetLoadOrder;
-(void)setAssetLoadOrder:(long long)arg1 ;
-(NSMutableDictionary *)pairedSidecarsByImportIdentifier;
-(void)setPairedSidecarsByImportIdentifier:(NSMutableDictionary *)arg1 ;
@end

