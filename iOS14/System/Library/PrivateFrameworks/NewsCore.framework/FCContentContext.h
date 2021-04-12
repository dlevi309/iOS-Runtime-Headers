/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirementObserving.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCContentContext.h>

@protocol FCCoreConfigurationManager, FCAVAssetCacheType, FCAVAssetPrewarming, FCPPTContext, FCBackgroundTaskable, FCWebArchiveSource, FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerType, FCAVAssetFactoryType, FCAVAssetKeyServiceType, FCAVAssetKeyCacheType, FCAVAssetKeyManagerType, FCAVAssetResourceLoaderType, FCNetworkReachabilityRequirement;
@class FCArticleController, FCAssetManager, FCAVAssetDownloadManager, FCFlintResourceManager, FCTagController, FCNetworkBehaviorMonitor, FCContextConfiguration, NSString, NSURL, FCContentContextInternal;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext> {

	id<FCCoreConfigurationManager> _configurationManager;
	FCArticleController* _articleController;
	FCAssetManager* _assetManager;
	id<FCAVAssetCacheType> _avAssetCache;
	FCAVAssetDownloadManager* _avAssetDownloadManager;
	id<FCAVAssetPrewarming> _avAssetPrewarmer;
	FCFlintResourceManager* _flintResourceManager;
	FCTagController* _tagController;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCPPTContext> _pptContext;
	id<FCBackgroundTaskable> _backgroundTaskable;
	id<FCWebArchiveSource> _webArchiveSource;
	long long _preferredMediaQuality;
	FCContextConfiguration* _contextConfiguration;
	NSString* _contentDirectory;
	NSURL* _assetCacheDirectoryURL;
	NSURL* _webArchiveCacheDirectoryURL;
	FCContentContextInternal* _internalContentContext;
	id<FCAssetKeyServiceType> _assetKeyService;
	id<FCAssetKeyCacheType> _assetKeyCache;
	id<FCAssetKeyManagerType> _assetKeyManager;
	id<FCAVAssetFactoryType> _avAssetFactory;
	id<FCAVAssetKeyServiceType> _avAssetKeyService;
	id<FCAVAssetKeyCacheType> _avAssetKeyCache;
	id<FCAVAssetKeyManagerType> _avAssetKeyManager;
	id<FCAVAssetResourceLoaderType> _avAssetResourceLoader;
	id<FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;

}

@property (nonatomic,copy) FCContextConfiguration * contextConfiguration;                                                      //@synthesize contextConfiguration=_contextConfiguration - In the implementation block
@property (nonatomic,copy) NSString * contentDirectory;                                                                        //@synthesize contentDirectory=_contentDirectory - In the implementation block
@property (nonatomic,retain) NSURL * assetCacheDirectoryURL;                                                                   //@synthesize assetCacheDirectoryURL=_assetCacheDirectoryURL - In the implementation block
@property (nonatomic,retain) NSURL * webArchiveCacheDirectoryURL;                                                              //@synthesize webArchiveCacheDirectoryURL=_webArchiveCacheDirectoryURL - In the implementation block
@property (nonatomic,retain) FCContentContextInternal * internalContentContext;                                                //@synthesize internalContentContext=_internalContentContext - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyServiceType> assetKeyService;                                                        //@synthesize assetKeyService=_assetKeyService - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyCacheType> assetKeyCache;                                                            //@synthesize assetKeyCache=_assetKeyCache - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyManagerType> assetKeyManager;                                                        //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetFactoryType> avAssetFactory;                                                          //@synthesize avAssetFactory=_avAssetFactory - In the implementation block
@property (nonatomic,retain) id<FCAVAssetCacheType> avAssetCache;                                                              //@synthesize avAssetCache=_avAssetCache - In the implementation block
@property (nonatomic,retain) FCAVAssetDownloadManager * avAssetDownloadManager;                                                //@synthesize avAssetDownloadManager=_avAssetDownloadManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetKeyServiceType> avAssetKeyService;                                                    //@synthesize avAssetKeyService=_avAssetKeyService - In the implementation block
@property (nonatomic,retain) id<FCAVAssetKeyCacheType> avAssetKeyCache;                                                        //@synthesize avAssetKeyCache=_avAssetKeyCache - In the implementation block
@property (nonatomic,retain) id<FCAVAssetKeyManagerType> avAssetKeyManager;                                                    //@synthesize avAssetKeyManager=_avAssetKeyManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetResourceLoaderType> avAssetResourceLoader;                                            //@synthesize avAssetResourceLoader=_avAssetResourceLoader - In the implementation block
@property (nonatomic,retain) id<FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement;              //@synthesize supportedCountryNetworkReachabilityRequirement=_supportedCountryNetworkReachabilityRequirement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                                            //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager;                                                                  //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetPrewarming> avAssetPrewarmer;                                                       //@synthesize avAssetPrewarmer=_avAssetPrewarmer - In the implementation block
@property (nonatomic,readonly) FCArticleController * articleController;                                                        //@synthesize articleController=_articleController - In the implementation block
@property (nonatomic,readonly) FCTagController * tagController;                                                                //@synthesize tagController=_tagController - In the implementation block
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager;                                                  //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) id<FCWebArchiveSource> webArchiveSource;                                                          //@synthesize webArchiveSource=_webArchiveSource - In the implementation block
@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;                                             //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) long long preferredMediaQuality;                                                                //@synthesize preferredMediaQuality=_preferredMediaQuality - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                                    //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentEnvironmentToken; 
+(void)initialize;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCAVAssetKeyServiceType>)avAssetKeyService;
-(id)recordSourceWithSchema:(id)arg1 ;
-(NSString *)supportedContentStoreFrontID;
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(void)setAvAssetDownloadManager:(FCAVAssetDownloadManager *)arg1 ;
-(void)setAvAssetResourceLoader:(id<FCAVAssetResourceLoaderType>)arg1 ;
-(FCFlintResourceManager *)flintResourceManager;
-(id)webArchiveSourceAllowingNil;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(long long)preferredMediaQuality;
-(void)setAssetKeyService:(id<FCAssetKeyServiceType>)arg1 ;
-(id)magazinesConfigurationManager;
-(void)setAvAssetFactory:(id<FCAVAssetFactoryType>)arg1 ;
-(id<FCAVAssetKeyManagerType>)avAssetKeyManager;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 assetKeyManagerDelegate:(id)arg7 appActivityMonitor:(id)arg8 backgroundTaskable:(id)arg9 preferredMediaQuality:(long long)arg10 pptContext:(id)arg11 ;
-(FCTagController *)tagController;
-(void)ppt_prewarmFeedDatabase;
-(FCAVAssetDownloadManager *)avAssetDownloadManager;
-(void)setContentDirectory:(NSString *)arg1 ;
-(NSString *)contentEnvironmentToken;
-(NSURL *)webArchiveCacheDirectoryURL;
-(NSString *)contentStoreFrontID;
-(void)setAvAssetKeyCache:(id<FCAVAssetKeyCacheType>)arg1 ;
-(void)setAssetKeyCache:(id<FCAssetKeyCacheType>)arg1 ;
-(id<FCNetworkReachabilityRequirement>)supportedCountryNetworkReachabilityRequirement;
-(id<FCAVAssetPrewarming>)avAssetPrewarmer;
-(void)setAvAssetKeyService:(id<FCAVAssetKeyServiceType>)arg1 ;
-(NSURL *)assetCacheDirectoryURL;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(void)setAssetCacheDirectoryURL:(NSURL *)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(FCArticleController *)articleController;
-(id<FCAssetKeyServiceType>)assetKeyService;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupCustomURLProtocols:(BOOL)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 assetKeyManagerDelegate:(id)arg9 appActivityMonitor:(id)arg10 backgroundTaskable:(id)arg11 preferredMediaQuality:(long long)arg12 pptContext:(id)arg13 ;
-(FCAssetManager *)assetManager;
-(void)setInternalContentContext:(FCContentContextInternal *)arg1 ;
-(NSString *)contentDirectory;
-(void)_updateReachabilityGivenRequirements;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 appActivityMonitor:(id)arg7 backgroundTaskable:(id)arg8 preferredMediaQuality:(long long)arg9 pptContext:(id)arg10 ;
-(void)setSupportedCountryNetworkReachabilityRequirement:(id<FCNetworkReachabilityRequirement>)arg1 ;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id<FCAVAssetKeyCacheType>)avAssetKeyCache;
-(id<FCPPTContext>)pptContext;
-(void)setAvAssetCache:(id<FCAVAssetCacheType>)arg1 ;
-(void)setAvAssetKeyManager:(id<FCAVAssetKeyManagerType>)arg1 ;
-(id)news_core_ConfigurationManager;
-(FCContextConfiguration *)contextConfiguration;
-(void)setWebArchiveCacheDirectoryURL:(NSURL *)arg1 ;
-(id<FCAssetKeyCacheType>)assetKeyCache;
-(void)setAssetKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(void)networkReachabilityRequirementDidBecomeDirty:(id)arg1 ;
-(id<FCAVAssetResourceLoaderType>)avAssetResourceLoader;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(id<FCAVAssetCacheType>)avAssetCache;
-(FCContentContextInternal *)internalContentContext;
-(void)setContextConfiguration:(FCContextConfiguration *)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id)arg2 ;
-(void)dealloc;
-(id<FCWebArchiveSource>)webArchiveSource;
@end

