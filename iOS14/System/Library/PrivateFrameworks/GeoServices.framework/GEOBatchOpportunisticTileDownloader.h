/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileRequesterDelegate.h>

@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_group, GEOBatchOpportunisticTileDownloaderDelegate;
@class NSObject, NSString, GEOTileRequester, GEOTileKeyList, GEOTileKeyMap;

@interface GEOBatchOpportunisticTileDownloader : NSObject <GEOTileRequesterDelegate> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_os_log> _log;
	NSString* _logPrefix;
	NSObject*<OS_dispatch_group> _preparationGroup;
	id<GEOBatchOpportunisticTileDownloaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _countryCode;
	NSString* _regionCode;
	BOOL _canceled;
	BOOL _paused;
	GEOOnce_s _finished;
	GEOTileRequester* _activeRequester;
	GEOTileKeyList* _remainingKeysForActiveRequester;
	unsigned long long _numberOfTilesAttempted;
	unsigned long long _successfulTiles;
	unsigned long long _failedTiles;
	unsigned long long _bytesDownloaded;
	/*^block*/id _tileRequesterCreationBlock;
	GEOTileKeyMap* _currentStaleETags;
	GEOTileKeyMap* _currentStaleData;

}

@property (nonatomic,readonly) unsigned long long numberOfTilesConsidered; 
@property (nonatomic,readonly) unsigned long long numberOfTilesAttempted;               //@synthesize numberOfTilesAttempted=_numberOfTilesAttempted - In the implementation block
@property (nonatomic,readonly) unsigned long long successfulTiles;                      //@synthesize successfulTiles=_successfulTiles - In the implementation block
@property (nonatomic,readonly) unsigned long long failedTiles;                          //@synthesize failedTiles=_failedTiles - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesDownloaded;                      //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
+(unsigned char)_reason;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSetDB:(unsigned)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(GEOTileKey)arg7 userInfo:(id)arg8 ;
-(id)init;
-(unsigned long long)bytesDownloaded;
-(void)pause;
-(void)tileRequesterFinished:(id)arg1 ;
-(unsigned long long)failedTiles;
-(unsigned long long)successfulTiles;
-(unsigned long long)numberOfTilesConsidered;
-(unsigned long long)numberOfTilesAttempted;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 countryCode:(id)arg3 region:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(/*^block*/id)arg7 ;
-(void)determineNextBatchWithQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)downloadDidSucceedForTile:(GEOTileKey*)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned)arg3 ;
-(void)downloadDidFailForTile:(GEOTileKey*)arg1 error:(id)arg2 ;
-(void)_finish;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(GEOTileKey)arg3 ;
-(BOOL)cancelKey:(const GEOTileKey*)arg1 ;
-(void)cancel;
-(void)resume;
-(void)_startRequesterForKeys:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 ;
-(void)_requestNextBatch;
@end

