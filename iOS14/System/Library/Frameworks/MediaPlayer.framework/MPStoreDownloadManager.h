/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray, NSDictionary, NSMapTable, NSHashTable, SSDownloadManager, SSPurchaseManager, NSString;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _activeDownloads;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	NSMutableArray* _blockObservers;
	NSDictionary* _downloadKindToRequiredClientBundleIdentifiers;
	NSMutableArray* _downloads;
	NSMutableArray* _userDownloads;
	NSMapTable* _downloadIdentifiersToDownloads;
	NSMapTable* _downloadsToObservers;
	NSMapTable* _libraryIdentifiersToDownloads;
	NSHashTable* _observersForAllDownloads;
	NSMapTable* _storeIdentifiersToDownloads;
	BOOL _fetchedInitialDownloads;
	SSDownloadManager* _downloadManager;
	SSPurchaseManager* _purchaseManager;

}

@property (nonatomic,readonly) NSArray * activeDownloads; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSArray * userDownloads; 
@property (getter=isUsingNetwork,nonatomic,readonly) BOOL usingNetwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSArray *)downloads;
-(id)_observersForDownload:(id)arg1 ;
-(BOOL)isUsingNetwork;
-(void)reloadFromServer;
-(void)_onQueue_removeDownloadFromMapTables:(id)arg1 ;
-(NSArray *)activeDownloads;
-(id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2 ;
-(void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(id)init;
-(id)downloadForDownloadPersistentIdentifier:(long long)arg1 ;
-(void)_unregisterBlockObserver:(id)arg1 ;
-(id)addDownloads:(id)arg1 ;
-(void)_addPurchaseFinishedHandler:(/*^block*/id)arg1 forDownloads:(id)arg2 ;
-(void)_registerBlockObserver:(id)arg1 ;
-(id)downloadForStoreID:(long long)arg1 ;
-(void)_addNonCancelledDownloadsToActiveList:(id)arg1 ;
-(id)_existingDownloadForSSDownload:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)prioritizeDownloads:(id)arg1 ;
-(void)restartDownloads:(id)arg1 ;
-(void)_updateActiveDownloadsWithCancelledDownloads:(id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(id)downloadForMediaItemPersistentID:(unsigned long long)arg1 ;
-(void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addFinishHandler:(/*^block*/id)arg1 forDownloads:(id)arg2 ;
-(void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2 ;
-(void)_onQueue_addDownloadToMapTables:(id)arg1 ;
-(BOOL)hasFetchedInitialDownloads;
-(void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1 ;
-(void)_updateActiveDownloadsWithChangedActiveDownloads:(id)arg1 inactiveDownloads:(id)arg2 ;
-(id)downloadForMediaPlaybackItemMetadata:(id)arg1 ;
-(void)removeObserver:(id)arg1 forDownloads:(id)arg2 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(id)_observersForAllDownloads;
-(void)addObserver:(id)arg1 forDownloads:(id)arg2 ;
-(void)resumeDownloads:(id)arg1 ;
-(id)_init;
-(void)_addStoreDownloadForRedownloadProductItem:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 ;
-(NSArray *)userDownloads;
-(id)activeDownloadForStoreID:(long long)arg1 ;
-(BOOL)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1 ;
-(BOOL)_isActiveDownload:(id)arg1 ;
-(void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2 ;
-(void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2 ;
-(BOOL)_shouldHideDownload:(id)arg1 ;
-(void)dealloc;
-(void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)activeDownloadForMediaItemPersistentID:(unsigned long long)arg1 ;
-(void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1 ;
-(id)downloadForMediaItem:(id)arg1 ;
@end

