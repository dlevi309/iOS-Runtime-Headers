/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/

#import <AXAssetLoader/AXAssetLoader-Structs.h>
#import <AXAssetLoader/AXAssetControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, AXDispatchTimer, NSObject, AXAssetController, AXAssetPolicy, NSString;

@interface AXAssetUpdateMonitor : NSObject <AXAssetControllerObserver> {

	os_unfair_lock_s _assetsLock;
	NSHashTable* _updateObservers;
	NSArray* _cachedInstalledAssets;
	AXDispatchTimer* _refreshDispatchTimer;
	NSObject*<OS_dispatch_queue> _workerQueue;
	AXAssetController* _assetController;

}

@property (nonatomic,retain) AXAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,readonly) AXAssetPolicy * assetPolicy; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (nonatomic,readonly) BOOL hasInProgressDownloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetMonitorWithPolicy:(id)arg1 ;
+(id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned)arg2 ;
+(id)assetMonitorWithPolicy:(id)arg1 qosClass:(unsigned)arg2 targetQueue:(id)arg3 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)stop;
-(NSString *)description;
-(AXAssetPolicy *)assetPolicy;
-(void)setUserInitiated:(BOOL)arg1 ;
-(BOOL)userInitiated;
-(void)addUpdateObserver:(id)arg1 ;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 hasRemainingDownloads:(BOOL)arg5 ;
-(AXAssetController *)assetController;
-(void)setAssetController:(AXAssetController *)arg1 ;
-(id)_initWithAssetPolicy:(id)arg1 qosClass:(unsigned)arg2 targetQueue:(id)arg3 ;
-(void)logInfo:(id)arg1 ;
-(BOOL)hasInProgressDownloads;
-(void)_workerQueue_refreshAssetsAfterDelay:(double)arg1 canRefreshCatalog:(BOOL)arg2 ;
-(void)_performWithinLock:(/*^block*/id)arg1 ;
-(void)refreshAssetsAfterDelay:(double)arg1 ;
-(id)_purgeUnneededAssetsFromInstalledAssets:(id)arg1 ;
-(void)_updateCachedInstalledAssets:(id)arg1 ;
@end

