/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSObject, MAAsset, CUReachabilityMonitor, NSDictionary, NSURL, NSMutableDictionary, NSString;

@interface SFDeviceAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	MAAsset* _deviceAssetManagement;
	CUReachabilityMonitor* _reachabilityMonitor;
	NSDictionary* _productTypesMappingTable;
	NSDictionary* _cachedProductMappingsTable;
	NSURL* _cacheDirectory;
	NSMutableDictionary* _cachedQueryPaths;
	BOOL _useProcessLocalCache;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _networkStatus;

}

@property (nonatomic,retain) NSString * networkStatus;                                //@synthesize networkStatus=_networkStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL useProcessLocalCache;                               //@synthesize useProcessLocalCache=_useProcessLocalCache - In the implementation block
-(void)onqueue_findAssetBundleForAssetQuery:(id)arg1 ucat:(LogCategory*)arg2 queryType:(id)arg3 fallback:(BOOL)arg4 retryAttempt:(BOOL)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)onqueue_downloadAsset:(id)arg1 ucat:(LogCategory*)arg2 queryLogString:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)cacheDirectory;
-(id)locallyCachedQueryResults;
-(id)init;
-(void)variantsMatchingQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onqueue_executeNextMAQueryForTask:(id)arg1 ;
-(void)addQueryResultToLocalCache:(id)arg1 url:(id)arg2 isFallback:(BOOL)arg3 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)networkStatus;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setUseProcessLocalCache:(BOOL)arg1 ;
-(id)localCacheWithFileName:(id)arg1 ;
-(void)storeEntries:(id)arg1 inLocalCacheWithFileName:(id)arg2 ;
-(void)onqueue_invalidate;
-(void)onqueue_activate;
-(void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)activate;
-(void)onqueue_purgeAssetsMatchingQuery:(id)arg1 ;
-(void)onqueue_updateSharingManagementAssetIfNecessary;
-(void)onqueue_updateMetaDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNetworkStatus:(NSString *)arg1 ;
-(id)onqueue_mappedProductTypeForProductType:(id)arg1 ;
-(void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 withRequestConfiguration:(id)arg2 ;
-(id)locallyCachedProductMappings;
-(BOOL)pathInLocalCache:(id)arg1 ;
-(void)onqueue_validateProductTypeInQuery:(id)arg1 ;
-(id)hardcodedMappedProducts;
-(void)onqueue_variantsMatchingQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)onqueue_sharingManagementAsset;
-(void)getAssetBundleForDeviceQuery:(id)arg1 withRequestConfiguration:(id)arg2 ;
-(void)purgeAssetsMatchingQuery:(id)arg1 ;
-(void)logNetworkStatus;
-(void)clearQueryResultFromLocalCache:(id)arg1 ;
-(void)invalidate;
-(void)onqueue_getCachedAssetBundleForTask:(id)arg1 ;
-(BOOL)canUseMobileAssetSPI;
-(void)mappedProductTypeForProductType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useProcessLocalCache;
-(id)onqueue_assetMappedProductTypeForProductType:(id)arg1 ;
-(void)storeProductMappingsInLocalCache:(id)arg1 ;
@end

