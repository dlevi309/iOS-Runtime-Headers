/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


@protocol QLDiskCacheDelegate;
@class NSString, QLCacheIndexDatabase, QLCacheMMAPBlobDatabase, NSLock, NSMutableDictionary;

@interface QLDiskCache : NSObject {

	NSString* _path;
	QLCacheIndexDatabase* _indexDatabase;
	QLCacheMMAPBlobDatabase* _blobDatabase;
	NSString* _metaDataFilePath;
	NSString* _dirtyFilePath;
	NSString* _exclusivePath;
	NSString* _resetFilePath;
	NSString* _resetReasonPath;
	BOOL _dirtyForDelegate;
	NSLock* _databaseLock;
	BOOL _opened;
	NSMutableDictionary* _metaData;
	BOOL _metaDataDirty;
	long long _writingCount;
	int _exclusiveFD;
	BOOL _hasDirtyLock;
	id<QLDiskCacheDelegate> _delegate;

}

@property (assign) BOOL metaDataDirty;                                     //@synthesize metaDataDirty=_metaDataDirty - In the implementation block
@property (retain) NSMutableDictionary * metaData;                         //@synthesize metaData=_metaData - In the implementation block
@property (retain) NSString * metaDataFilePath;                            //@synthesize metaDataFilePath=_metaDataFilePath - In the implementation block
@property (nonatomic,readonly) BOOL hasDirtyLock;                          //@synthesize hasDirtyLock=_hasDirtyLock - In the implementation block
@property (readonly) BOOL isOpened;                                        //@synthesize opened=_opened - In the implementation block
@property (readonly) NSString * path;                                      //@synthesize path=_path - In the implementation block
@property (readonly) float fragmentation; 
@property (readonly) unsigned long long reserveBufferCount; 
@property (readonly) unsigned long long reserveBufferSize; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long maxSize; 
@property (readonly) unsigned long long maxThumbnailLifeTime; 
@property (__weak) id<QLDiskCacheDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long fileEntryCount; 
@property (readonly) unsigned long long thumbnailCount; 
@property (readonly) long long writingCount;                               //@synthesize writingCount=_writingCount - In the implementation block
+(id)defaultLocation;
+(void)setupCacheAtLocationIfNecessary:(id)arg1 ;
+(void)setCacheLocationForTesting:(id)arg1 ;
-(BOOL)_open;
-(void)_close;
-(void)do:(/*^block*/id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)open;
-(id<QLDiskCacheDelegate>)delegate;
-(void)close;
-(unsigned long long)size;
-(NSString *)path;
-(void)setMetaData:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<QLDiskCacheDelegate>)arg1 ;
-(NSMutableDictionary *)metaData;
-(unsigned long long)cleanup;
-(unsigned long long)maxSize;
-(void)checkpoint;
-(void)reset;
-(BOOL)isOpened;
-(unsigned long long)thumbnailCount;
-(unsigned long long)removeThumbnailsOlderThanDate:(id)arg1 ;
-(id)lastCrapWithDate:(id*)arg1 ;
-(void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2 ;
-(void)removeFilesWithFileInfo:(id)arg1 ;
-(BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1 ;
-(unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1 ;
-(unsigned long long)reserveBufferCount;
-(unsigned long long)reserveBufferSize;
-(unsigned long long)fileEntryCount;
-(void)noteRemoteThumbnailMissingForItems:(id)arg1 ;
-(void)noteRemoteThumbnailPresentForItems:(id)arg1 ;
-(id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1 ;
-(unsigned long long)maxThumbnailLifeTime;
-(id)checkConsistency;
-(id)indexDatabase;
-(id)blobDatabase;
-(id)enumeratorForThumbnailRequests:(id)arg1 ;
-(BOOL)doReading:(/*^block*/id)arg1 ;
-(BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 ;
-(void)writeThumbnailDataBatch:(id)arg1 ;
-(unsigned long long)cleanupDeletedFiles;
-(BOOL)doWriting:(/*^block*/id)arg1 ;
-(void)discardThumbnailDataBatchForReset:(id)arg1 ;
-(float)fragmentation;
-(id)reserveBufferWithLength:(unsigned long long)arg1 ;
-(BOOL)validateReservedBuffer:(id)arg1 ;
-(BOOL)discardReservedBuffer:(id)arg1 ;
-(void)_createDirtyLockInformDelegate:(BOOL)arg1 ;
-(BOOL)metaDataDirty;
-(NSString *)metaDataFilePath;
-(void)setMetaDataDirty:(BOOL)arg1 ;
-(void)_removeDirtyLock;
-(BOOL)_setThumbnailData:(id)arg1 ;
-(void)_discardThumbnailDataForReset:(id)arg1 ;
-(unsigned long long)_deleteBlobArrayFromDatabase:(id)arg1 ;
-(void)_closeWhatIsOpen;
-(void)_resetWithReason:(id)arg1 ;
-(void)_cleanupForceResetAtNextLaunch;
-(void)setMetaData:(id)arg1 forKey:(id)arg2 ;
-(id)_checkConsistency;
-(id)initWithPathLocation:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3 ;
-(id)enumeratorForAllFilesUbiquitousFiles:(BOOL)arg1 withExtraInfo:(BOOL)arg2 ;
-(id)enumeratorForAllThumbnailsWithFileIdentifier:(id)arg1 ;
-(void)_cleanupDirtyLock;
-(void)forceResetAtNextLaunch;
-(unsigned long long)freeDiskSpaceForNewThumbnails;
-(id)metaDataForKey:(id)arg1 ;
-(id)reserveBufferForData:(id)arg1 ;
-(id)lastResetWithDate:(id*)arg1 ;
-(BOOL)hasDirtyLock;
-(long long)writingCount;
-(void)setMetaDataFilePath:(NSString *)arg1 ;
@end

