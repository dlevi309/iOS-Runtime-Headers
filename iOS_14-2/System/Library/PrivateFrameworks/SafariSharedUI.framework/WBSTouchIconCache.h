/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSSiteMetadataImageCacheDelegate.h>
#import <libobjc.A.dylib/WBSWebViewMetadataFetchOperationDelegate.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSObject, WBSSiteMetadataImageCache, NSMutableDictionary, NSCache, NSMutableArray, NSMutableSet, WBSTouchIconCacheSettingsSQLiteStore, NSURL, NSDictionary, NSString;

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	atomic<bool> _didLoadSettings;
	WBSSiteMetadataImageCache* _imageCache;
	NSMutableDictionary* _hostsToRequestSets;
	os_unfair_lock_s _touchIconsDataForHostsAccessLock;
	NSMutableDictionary* _touchIconsDataForHosts;
	NSCache* _requestsToResponses;
	NSMutableDictionary* _requestsToDelayedResponses;
	NSMutableArray* _pendingSaveTouchIconToDiskBlocks;
	NSMutableSet* _pendingTouchIconRequestHosts;
	WBSTouchIconCacheSettingsSQLiteStore* _cacheSettingsStore;
	BOOL _readOnly;
	BOOL _allowFetchingOverCellularNetwork;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;
	NSURL* _cacheDirectoryURL;
	long long _protectionType;
	long long _fileMappingStyle;

}

@property (nonatomic,readonly) NSURL * imageDirectoryURL; 
@property (nonatomic,readonly) NSURL * cacheDirectoryURL;                             //@synthesize cacheDirectoryURL=_cacheDirectoryURL - In the implementation block
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly;                       //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) long long protectionType;                              //@synthesize protectionType=_protectionType - In the implementation block
@property (nonatomic,readonly) long long fileMappingStyle;                            //@synthesize fileMappingStyle=_fileMappingStyle - In the implementation block
@property (nonatomic,readonly) BOOL allowFetchingOverCellularNetwork;                 //@synthesize allowFetchingOverCellularNetwork=_allowFetchingOverCellularNetwork - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uuidStringToHost; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
+(id)_monogramConfiguration;
+(id)_generateDefaultFavoritesIcon;
+(id)defaultBackgroundColor;
+(id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3 ;
+(id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2 ;
+(id)defaultGlyphColor;
-(BOOL)isReadOnly;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)emptyCaches;
-(id)init;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(long long)protectionType;
-(void)purgeUnneededCacheEntries;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg1 ;
-(NSURL *)imageDirectoryURL;
-(id)_operationWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3 ;
-(NSURL *)cacheDirectoryURL;
-(id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2 ;
-(id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(BOOL)arg4 fileMappingStyle:(long long)arg5 ;
-(id)initWithCacheDirectoryURL:(id)arg1 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(void)dealloc;
-(void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1 ;
-(void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2 ;
-(id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2 ;
-(void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2 ;
-(void)_setUpImageCacheSettingsSQLiteStore;
-(id)_imageCacheSettingsDatabaseURL;
-(void)_ensureCacheDirectory;
-(void)_openCacheSettingsDatabaseIfNeeded;
-(void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2 ;
-(void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2 ;
-(id)_resizedImage:(id)arg1 forHost:(id)arg2 ;
-(void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6 ;
-(void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(BOOL)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 ;
-(BOOL)_canFetchTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 shouldCheckImageState:(BOOL*)arg4 ;
-(id)_responseForTouchIconRequestWithNoHost:(id)arg1 ;
-(id)_touchIconForURL:(id)arg1 getImageState:(long long*)arg2 ;
-(void)_setUpAndReturnDelayedResponseForRequest:(id)arg1 ;
-(void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 withImage:(id)arg2 imageState:(long long)arg3 didReceiveNewData:(BOOL)arg4 ;
-(id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3 knownImageState:(long long)arg4 ;
-(/*^block*/id)_blockOperationForRequest:(id)arg1 knownImageState:(long long)arg2 ;
-(void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2 knownImageState:(long long)arg3 ;
-(double)_maximumScreenScale;
-(void)_enumerateRequestsForHost:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)_transparencyAnalysisResultForImage:(id)arg1 ;
-(void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2 ;
-(void)_removeTouchIconsDataForHost:(id)arg1 ;
-(void)_removeTouchIconsDataForHost:(id)arg1 ifIconIsInCache:(BOOL)arg2 ;
-(BOOL)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2 ;
-(NSDictionary *)uuidStringToHost;
-(void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2 ;
-(void)retainTouchIconForURLString:(id)arg1 ;
-(void)retainTouchIconForHost:(id)arg1 ;
-(void)retainTouchIconsForHosts:(id)arg1 ;
-(void)releaseTouchIconForURLString:(id)arg1 ;
-(void)releaseTouchIconForHost:(id)arg1 ;
-(void)releaseTouchIconsForHosts:(id)arg1 ;
-(BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1 ;
-(BOOL)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1 ;
-(BOOL)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 ;
-(void)removeTouchIconMetadataForHosts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)fileMappingStyle;
-(BOOL)allowFetchingOverCellularNetwork;
@end

