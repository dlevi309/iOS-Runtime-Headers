/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <ATFoundation/ATAssetLinkDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSMapTable, NSMutableDictionary, NSHashTable, NSObject, MSVXPCTransaction, NSString;

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate, ICEnvironmentMonitorObserver> {

	NSMutableOrderedSet* _assetLinks;
	NSMutableOrderedSet* _assetQueue;
	NSMapTable* _assetsToLinks;
	NSMapTable* _assetsToFailedLinks;
	NSMutableDictionary* _activeTrackAssetsByAssetType;
	NSMutableDictionary* _trackAssetsPendingInstallByAssetType;
	NSMutableDictionary* _nonTrackAssetsPendingInstallByAssetType;
	NSMutableDictionary* _progressBlocksForAssetsInFlight;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned long long _cachedThermalLevel;
	BOOL _isNetworkConstrained;
	BOOL _currentNetworkIsCellularType;
	MSVXPCTransaction* _activeDownLoadsKeepAliveTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)cancelAllAssetsMatchingPredicate:(id)arg1 excludeActiveDownloads:(BOOL)arg2 withError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addObserver:(id)arg1 ;
-(unsigned long long)_getMaxThermalPressureThreshold;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)removeAssetLink:(id)arg1 ;
-(id)init;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 cancelPendingAssetsInBatch:(BOOL)arg5 ;
-(BOOL)_canEnqueueAsset:(id)arg1 ;
-(void)enqueueAssets:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prioritizeAsset:(id)arg1 onLinkClass:(Class)arg2 ;
-(BOOL)_assetIsEnqueued:(id)arg1 ;
-(void)cancelAssets:(id)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)assetLink:(id)arg1 didCloseWithOutstandingAssets:(id)arg2 ;
-(void)environmentMonitorDidChangeThermalLevel:(id)arg1 ;
-(void)assetLink:(id)arg1 didTransitionAssetStates:(id)arg2 ;
-(BOOL)_shouldReleaseKeepAliveTransaction;
-(void)enqueueAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)assetLinkDidChange:(id)arg1 ;
-(void)assetLink:(id)arg1 didUpdateDownloadPauseReasonForAssets:(id)arg2 ;
-(void)installCompleteForAssets:(id)arg1 ;
-(void)assetLink:(id)arg1 didOpenWithPendingAssets:(id)arg2 ;
-(void)prioritizeAssetWithStoreForLibraryIdentifier:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)allAssetLinks;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)assetLink:(id)arg1 didUpdateAsset:(id)arg2 progress:(double)arg3 ;
-(void)_addFailedLink:(id)arg1 forAsset:(id)arg2 ;
-(void)assetLink:(id)arg1 didPauseAsseDownload:(id)arg2 error:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(id)filteredAssetsToDownloadForAssets:(id)arg1 ;
-(void)addAssetLink:(id)arg1 ;
-(void)dispatchBlockOnControllerQueue:(/*^block*/id)arg1 ;
-(BOOL)assetIsEnqueued:(id)arg1 ;
-(void)_handleEnqueue:(id)arg1 onLink:(id)arg2 withPriority:(BOOL)arg3 ;
-(void)assetLink:(id)arg1 didFinishAsset:(id)arg2 error:(id)arg3 retryable:(BOOL)arg4 ;
-(void)_cancelAssets:(id)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_assetsDidChange;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3 ;
-(void)_updateCountsForFinishedTrackAssetTypes:(id)arg1 ;
-(BOOL)_canEnqueueAsset:(id)arg1 onLink:(id)arg2 ;
-(id)allAssets;
-(void)dealloc;
-(void)enqueueAssetForStoreDownload:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cancelAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

