/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirementObserving.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCContentContext.h>

@protocol FCCoreConfigurationManager, FCPPTContext, FCBackgroundTaskable, FCWebArchiveSource, FCAssetKeyServiceType, FCAssetKeyCacheType, FCAssetKeyManagerType, FCNetworkReachabilityRequirement;
@class FCArticleController, FCAssetManager, FCFlintResourceManager, FCTagController, FCNetworkBehaviorMonitor, FCContextConfiguration, NSString, NSURL, FCContentContextInternal;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext> {

	id<FCCoreConfigurationManager> _configurationManager;
	FCArticleController* _articleController;
	FCAssetManager* _assetManager;
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
-(void)dealloc;
-(FCAssetManager *)assetManager;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(NSString *)contentStoreFrontID;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(FCTagController *)tagController;
-(id<FCPPTContext>)pptContext;
-(NSString *)contentDirectory;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(FCContentContextInternal *)internalContentContext;
-(FCArticleController *)articleController;
-(FCContextConfiguration *)contextConfiguration;
-(NSString *)supportedContentStoreFrontID;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 assetKeyManagerDelegate:(id)arg7 appActivityMonitor:(id)arg8 backgroundTaskable:(id)arg9 preferredMediaQuality:(long long)arg10 pptContext:(id)arg11 ;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupCustomURLProtocols:(BOOL)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 assetKeyManagerDelegate:(id)arg9 appActivityMonitor:(id)arg10 backgroundTaskable:(id)arg11 preferredMediaQuality:(long long)arg12 pptContext:(id)arg13 ;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(NSString *)contentEnvironmentToken;
-(FCFlintResourceManager *)flintResourceManager;
-(id)news_core_ConfigurationManager;
-(id)magazinesConfigurationManager;
-(NSURL *)assetCacheDirectoryURL;
-(NSURL *)webArchiveCacheDirectoryURL;
-(id<FCWebArchiveSource>)webArchiveSource;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(id)recordSourceWithSchema:(id)arg1 ;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(long long)preferredMediaQuality;
-(void)networkReachabilityRequirementDidBecomeDirty:(id)arg1 ;
-(void)setAssetKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(void)_updateReachabilityGivenRequirements;
-(id<FCNetworkReachabilityRequirement>)supportedCountryNetworkReachabilityRequirement;
-(void)setWebArchiveCacheDirectoryURL:(NSURL *)arg1 ;
-(id)webArchiveSourceAllowingNil;
-(id<FCAssetKeyCacheType>)assetKeyCache;
-(void)setContextConfiguration:(FCContextConfiguration *)arg1 ;
-(void)setContentDirectory:(NSString *)arg1 ;
-(void)setAssetCacheDirectoryURL:(NSURL *)arg1 ;
-(void)setInternalContentContext:(FCContentContextInternal *)arg1 ;
-(id<FCAssetKeyServiceType>)assetKeyService;
-(void)setAssetKeyService:(id<FCAssetKeyServiceType>)arg1 ;
-(void)setAssetKeyCache:(id<FCAssetKeyCacheType>)arg1 ;
-(void)setSupportedCountryNetworkReachabilityRequirement:(id<FCNetworkReachabilityRequirement>)arg1 ;
@end

