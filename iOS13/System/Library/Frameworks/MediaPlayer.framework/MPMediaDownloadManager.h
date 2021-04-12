/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>
#import <libobjc.A.dylib/ATDownloadProgressObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSMutableDictionary, NSXPCConnection, MPStoreDownloadManager, NSHashTable, NSObject, NSArray, NSString;

@interface MPMediaDownloadManager : NSObject <NSXPCListenerDelegate, MPStoreDownloadManagerObserver, ATDownloadProgressObserver> {

	NSMutableOrderedSet* _cachedATDownloads;
	NSMutableDictionary* _cachedProgressMap;
	NSMutableOrderedSet* _cachedATUnEnqueuedDownloads;
	NSMutableDictionary* _cachedATPausedDownloads;
	NSXPCConnection* __downloadProgressConnection;
	NSXPCConnection* __keepLocalTaskConnection;
	MPStoreDownloadManager* _storeDownloadManager;
	NSHashTable* _downloadObservers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	BOOL _hasRequiredAirTrafficEntitlement;

}

@property (nonatomic,readonly) NSArray * allMediaDownloadLibraryIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_hasRequiredAirTrafficEntitlement;
-(void)atcDidEnqueueAsset:(id)arg1 ;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2 ;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2 ;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2 ;
-(void)cancelDownloads:(id)arg1 ;
-(NSArray *)allMediaDownloadLibraryIdentifiers;
-(BOOL)hasActiveDownloads;
-(void)prioritizeDownload:(long long)arg1 ;
-(void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)activeDownloadForMediaItemPersistentID:(long long)arg1 ;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(id)pausedDownloadForMediaItemPersistentID:(long long)arg1 ;
-(void)downloadLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2 ;
-(id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)arg1 ;
-(id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)arg1 ;
-(id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1 ;
-(void)_notifyObserversOfAssetDownloadProgress:(id)arg1 ;
-(void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2 ;
-(void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)arg1 ;
-(BOOL)_isValidMediaAsset:(id)arg1 ;
-(id)_statusChangeObservers;
-(void)_prefectchAllATDownloads;
-(id)_keepLocalTaskConnection;
-(id)_downloadProgressConnection;
@end

