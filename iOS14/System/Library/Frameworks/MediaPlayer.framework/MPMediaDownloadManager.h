/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long activeDownloadsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)addObserver:(id)arg1 ;
-(id)downloadForIdentifierSet:(id)arg1 downloadState:(long long*)arg2 ;
-(void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2 ;
-(id)init;
-(void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)prioritizeDownload:(long long)arg1 ;
-(id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1 ;
-(BOOL)_hasRequiredAirTrafficEntitlement;
-(id)_statusChangeObservers;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2 ;
-(void)_prefectchAllATDownloads;
-(id)_downloadProgressConnection;
-(BOOL)_isValidMediaAsset:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1 ;
-(long long)activeDownloadsCount;
-(void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2 ;
-(id)_init;
-(void)_notifyObserversOfAssetDownloadProgress:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 ;
-(id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)arg1 ;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2 ;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)arg1 ;
-(NSArray *)allMediaDownloadLibraryIdentifiers;
-(void)downloadLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)atcDidEnqueueAsset:(id)arg1 ;
-(BOOL)hasActiveDownloads;
-(void)dealloc;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2 ;
-(id)activeDownloadForMediaItemPersistentID:(long long)arg1 ;
-(id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)arg1 ;
-(id)_keepLocalTaskConnection;
@end

