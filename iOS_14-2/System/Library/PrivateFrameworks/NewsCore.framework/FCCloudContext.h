/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCTestingContext.h>
#import <libobjc.A.dylib/FCCKDatabaseEncryptionDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCContentContext.h>
#import <libobjc.A.dylib/FCPrivateDataContext.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol FCAppActivityMonitor, FCNewsletterManager, FCOfflineArticleManagerType, FCPurchaseProviderType, FCPurchaseManagerType, FCBundleSubscriptionManagerType, FCCurrentIssuesChecker, FCPaidAccessCheckerType, FCLocalRegionManager, FCBackgroundTaskable, FCForYouMagazineFeedManaging, FCForYouPluginGroupManaging, FCForYouBridgedConfigurationParser, FCPPTContext, FCContentContext, FCPrivateDataContext;
@class NSString, FCAssetManager, FCArticleController, FCTagController, FCFlintResourceManager, FCNetworkBehaviorMonitor, NSURL, FCIssueReadingHistory, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCAudioPlaylist, FCSubscriptionList, FCUserInfo, FCTagSettings, FCSubscriptionController, FCFeedManager, FCClientEndpointConnection, FCCommandQueue, FCNewsletterEndpointConnection, FCNotificationsEndpointConnection, FCNotificationController, FCPurchaseController, FCTranslationManager, FCLocalAreasManager, FCUserVectorManager, FCAccessChecker;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing> {

	BOOL _deviceIsiPad;
	FCSubscriptionController* _subscriptionController;
	FCFeedManager* _feedManager;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCAppActivityMonitor> _appActivityMonitor;
	FCClientEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	id<FCNewsletterManager> _newsletterManager;
	FCNewsletterEndpointConnection* _newsletterEndpointConnection;
	FCCommandQueue* _newsletterEndpointCommandQueue;
	FCNotificationsEndpointConnection* _notificationsEndpointConnection;
	FCCommandQueue* _notificationsEndpointCommandQueue;
	FCNotificationController* _notificationController;
	id<FCOfflineArticleManagerType> _offlineArticleManager;
	FCPurchaseController* _purchaseController;
	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCPurchaseManagerType> _purchaseManager;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCTranslationManager* _translationManager;
	FCLocalAreasManager* _localAreasManager;
	FCUserVectorManager* _userVectorManager;
	id<FCCurrentIssuesChecker> _currentIssuesChecker;
	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCAccessChecker* _issueAccessChecker;
	FCAccessChecker* _articleAccessChecker;
	id<FCLocalRegionManager> _localRegionProvider;
	id<FCBackgroundTaskable> _backgroundTaskable;
	id<FCForYouMagazineFeedManaging> _forYouMagazineFeedManager;
	/*^block*/id _forYouPluginGroupManagingProvider;
	id<FCForYouPluginGroupManaging> _forYouPluginGroupManager;
	id<FCForYouBridgedConfigurationParser> _forYouBridgedConfigurationParser;
	/*^block*/id _offlineArticleManagerProvider;
	id<FCPPTContext> _pptContext;
	id<FCContentContext> _contentContext;
	id<FCPrivateDataContext> _privateDataContext;
	long long _options;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCAppActivityMonitor> appActivityMonitor;                                              //@synthesize appActivityMonitor=_appActivityMonitor - In the implementation block
@property (nonatomic,retain) id<FCPrivateDataContext> privateDataContext;                                              //@synthesize privateDataContext=_privateDataContext - In the implementation block
@property (nonatomic,retain) FCTranslationManager * translationManager;                                                //@synthesize translationManager=_translationManager - In the implementation block
@property (nonatomic,retain) FCLocalAreasManager * localAreasManager;                                                  //@synthesize localAreasManager=_localAreasManager - In the implementation block
@property (nonatomic,retain) FCUserVectorManager * userVectorManager;                                                  //@synthesize userVectorManager=_userVectorManager - In the implementation block
@property (nonatomic,retain) id<FCCurrentIssuesChecker> currentIssuesChecker;                                          //@synthesize currentIssuesChecker=_currentIssuesChecker - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;                                            //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,retain) FCAccessChecker * issueAccessChecker;                                                     //@synthesize issueAccessChecker=_issueAccessChecker - In the implementation block
@property (nonatomic,retain) FCAccessChecker * articleAccessChecker;                                                   //@synthesize articleAccessChecker=_articleAccessChecker - In the implementation block
@property (assign,nonatomic) long long options;                                                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FCSubscriptionController * subscriptionController;                                      //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,readonly) FCNotificationController * notificationController;                                      //@synthesize notificationController=_notificationController - In the implementation block
@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                              //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider;                                            //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseManagerType> purchaseManager;                                              //@synthesize purchaseManager=_purchaseManager - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                          //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,readonly) FCFeedManager * feedManager;                                                            //@synthesize feedManager=_feedManager - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> feedPersonalizer; 
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                      //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) id<FCLocalRegionManager> localRegionProvider;                                             //@synthesize localRegionProvider=_localRegionProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FCBackgroundTaskable> backgroundTaskable;                                       //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (assign,nonatomic,__weak) id<FCForYouMagazineFeedManaging> forYouMagazineFeedManager;                        //@synthesize forYouMagazineFeedManager=_forYouMagazineFeedManager - In the implementation block
@property (nonatomic,copy) id forYouPluginGroupManagingProvider;                                                       //@synthesize forYouPluginGroupManagingProvider=_forYouPluginGroupManagingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FCForYouPluginGroupManaging> forYouPluginGroupManager;                          //@synthesize forYouPluginGroupManager=_forYouPluginGroupManager - In the implementation block
@property (nonatomic,retain) id<FCForYouBridgedConfigurationParser> forYouBridgedConfigurationParser;                  //@synthesize forYouBridgedConfigurationParser=_forYouBridgedConfigurationParser - In the implementation block
@property (nonatomic,copy) id offlineArticleManagerProvider;                                                           //@synthesize offlineArticleManagerProvider=_offlineArticleManagerProvider - In the implementation block
@property (nonatomic,readonly) id<FCOfflineArticleManagerType> offlineArticleManager;                                  //@synthesize offlineArticleManager=_offlineArticleManager - In the implementation block
@property (nonatomic,readonly) id<FCNewsletterManager> newsletterManager;                                              //@synthesize newsletterManager=_newsletterManager - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsiPad;                                                                      //@synthesize deviceIsiPad=_deviceIsiPad - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                            //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,readonly) BOOL isPrivateDataEncryptionEnabled; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseStartingUp; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseOnline; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseTemporarilySuspended; 
@property (nonatomic,readonly) FCClientEndpointConnection * endpointConnection;                                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCNotificationsEndpointConnection * notificationsEndpointConnection;                    //@synthesize notificationsEndpointConnection=_notificationsEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCNewsletterEndpointConnection * newsletterEndpointConnection;                          //@synthesize newsletterEndpointConnection=_newsletterEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                                                  //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * notificationsEndpointCommandQueue;                                     //@synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * newsletterEndpointCommandQueue;                                        //@synthesize newsletterEndpointCommandQueue=_newsletterEndpointCommandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager; 
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager; 
@property (nonatomic,readonly) id<FCAVAssetPrewarming> avAssetPrewarmer; 
@property (nonatomic,readonly) FCArticleController * articleController; 
@property (nonatomic,readonly) FCTagController * tagController; 
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager; 
@property (nonatomic,retain) id<FCWebArchiveSource> webArchiveSource; 
@property (nonatomic,copy,readonly) NSString * contentDirectory; 
@property (nonatomic,readonly) NSURL * assetCacheDirectoryURL; 
@property (nonatomic,readonly) NSURL * webArchiveCacheDirectoryURL; 
@property (nonatomic,readonly) id<FCContentContextInternal> internalContentContext; 
@property (nonatomic,readonly) long long preferredMediaQuality; 
@property (nonatomic,copy,readonly) NSString * contentEnvironmentToken; 
@property (nonatomic,readonly) FCIssueReadingHistory * issueReadingHistory; 
@property (nonatomic,readonly) FCPersonalizationData * personalizationData; 
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController; 
@property (nonatomic,readonly) FCReadingHistory * readingHistory; 
@property (nonatomic,readonly) FCReadingList * readingList; 
@property (nonatomic,readonly) FCAudioPlaylist * audioPlaylist; 
@property (nonatomic,readonly) FCSubscriptionList * subscriptionList; 
@property (nonatomic,readonly) FCUserInfo * userInfo; 
@property (nonatomic,readonly) FCTagSettings * tagSettings; 
@property (nonatomic,readonly) id<FCPushNotificationHandling> privatePushNotificationHandler; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (nonatomic,copy,readonly) NSString * privateDataDirectory; 
@property (nonatomic,readonly) id<FCPrivateDataContextInternal> internalPrivateDataContext; 
+(void)initialize;
+(id)testingContext;
+(id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(id)initForTesting;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(FCSubscriptionList *)subscriptionList;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(FCClientEndpointConnection *)endpointConnection;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)recordSourceWithSchema:(id)arg1 ;
-(NSString *)supportedContentStoreFrontID;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_purchaseControllerDidAddALaCarteSubscription;
-(id<FCForYouPluginGroupManaging>)forYouPluginGroupManager;
-(FCFeedManager *)feedManager;
-(FCUserInfo *)userInfo;
-(FCUserVectorManager *)userVectorManager;
-(id<FCPrivateDataContext>)privateDataContext;
-(id)init;
-(void)setIssueAccessChecker:(FCAccessChecker *)arg1 ;
-(FCFlintResourceManager *)flintResourceManager;
-(BOOL)isPrivateDatabaseOnline;
-(void)setForYouPluginGroupManagingProvider:(id)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(void)setLocalAreasManager:(FCLocalAreasManager *)arg1 ;
-(BOOL)isPrivateDataEncryptionEnabled;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(long long)preferredMediaQuality;
-(BOOL)isPrivateDataSyncingEnabled;
-(id<FCForYouMagazineFeedManaging>)forYouMagazineFeedManager;
-(id)magazinesConfigurationManager;
-(id<FCNewsletterManager>)newsletterManager;
-(id)insertTestArticle;
-(id<FCPurchaseManagerType>)purchaseManager;
-(void)setLocalRegionProvider:(id<FCLocalRegionManager>)arg1 ;
-(BOOL)isPrivateDatabaseStartingUp;
-(FCReadingHistory *)readingHistory;
-(void)setForYouMagazineFeedManager:(id<FCForYouMagazineFeedManaging>)arg1 ;
-(long long)options;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCLocalAreasManager *)localAreasManager;
-(id<FCContentContext>)contentContext;
-(FCAccessChecker *)articleAccessChecker;
-(FCTagSettings *)tagSettings;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(FCPurchaseController *)purchaseController;
-(FCSubscriptionController *)subscriptionController;
-(FCCommandQueue *)newsletterEndpointCommandQueue;
-(void)setAppActivityMonitor:(id<FCAppActivityMonitor>)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setArticleAccessChecker:(FCAccessChecker *)arg1 ;
-(id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4 ;
-(void)setOfflineArticleManagerProvider:(id)arg1 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setForYouBridgedConfigurationParser:(id<FCForYouBridgedConfigurationParser>)arg1 ;
-(FCTagController *)tagController;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(void)ppt_prewarmFeedDatabase;
-(id<FCCurrentIssuesChecker>)currentIssuesChecker;
-(FCReadingList *)readingList;
-(BOOL)isPrivateDatabaseTemporarilySuspended;
-(NSString *)contentEnvironmentToken;
-(NSURL *)webArchiveCacheDirectoryURL;
-(FCNotificationController *)notificationController;
-(NSString *)contentStoreFrontID;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(BOOL)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1 ;
-(id<FCAVAssetPrewarming>)avAssetPrewarmer;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCCommandQueue *)notificationsEndpointCommandQueue;
-(NSURL *)assetCacheDirectoryURL;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(FCNewsletterEndpointConnection *)newsletterEndpointConnection;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(BOOL)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14 ;
-(FCArticleController *)articleController;
-(void)setTranslationManager:(FCTranslationManager *)arg1 ;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCAudioPlaylist *)audioPlaylist;
-(FCAssetManager *)assetManager;
-(NSString *)contentDirectory;
-(void)setForYouPluginGroupManager:(id<FCForYouPluginGroupManaging>)arg1 ;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(FCNotificationsEndpointConnection *)notificationsEndpointConnection;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)notificationsController;
-(id<FCLocalRegionManager>)localRegionProvider;
-(void)setBackgroundTaskable:(id<FCBackgroundTaskable>)arg1 ;
-(id<FCPPTContext>)pptContext;
-(id)news_core_ConfigurationManager;
-(FCIssueReadingHistory *)issueReadingHistory;
-(id)offlineArticleManagerProvider;
-(id<FCOfflineArticleManagerType>)offlineArticleManager;
-(FCAccessChecker *)issueAccessChecker;
-(BOOL)deviceIsiPad;
-(void)setUserVectorManager:(FCUserVectorManager *)arg1 ;
-(id)forYouPluginGroupManagingProvider;
-(NSString *)privateDataDirectory;
-(FCPersonalizationData *)personalizationData;
-(id<FCContentContextInternal>)internalContentContext;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(FCCommandQueue *)endpointCommandQueue;
-(FCTranslationManager *)translationManager;
-(id<FCForYouBridgedConfigurationParser>)forYouBridgedConfigurationParser;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id)arg2 ;
-(id)insertTestArticlesWithCount:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(BOOL)arg10 deviceIsiPad:(BOOL)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14 ;
-(void)setPrivateDataContext:(id<FCPrivateDataContext>)arg1 ;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)setCurrentIssuesChecker:(id<FCCurrentIssuesChecker>)arg1 ;
-(id<FCWebArchiveSource>)webArchiveSource;
@end

