/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCTestingContext.h>
#import <libobjc.A.dylib/FCCKDatabaseEncryptionDelegate.h>
#import <libobjc.A.dylib/FCAssetKeyManagerDelegate.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCContentContext.h>
#import <libobjc.A.dylib/FCPrivateDataContext.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol FCAppActivityMonitor, FCPurchaseProviderType, FCPurchaseManagerType, FCBundleSubscriptionManagerType, FCCurrentIssuesChecker, FCPaidAccessCheckerType, FCFlintHelper, FCBackgroundTaskable, FCForYouMagazineFeedManaging, FCForYouPluginGroupManaging, FCForYouBridgedConfigurationParser, FCPPTContext, FCContentContext, FCPrivateDataContext;
@class NSString, FCAssetManager, FCArticleController, FCTagController, FCFlintResourceManager, FCNetworkBehaviorMonitor, NSURL, FCIssueReadingHistory, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCUserInfo, FCTagSettings, FCSubscriptionController, FCFeedManager, FCClientEndpointConnection, FCCommandQueue, FCNotificationsEndpointConnection, FCNotificationController, FCPurchaseController, FCTranslationManager, FCAccessChecker;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing> {

	BOOL _deviceIsiPad;
	FCSubscriptionController* _subscriptionController;
	FCFeedManager* _feedManager;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCAppActivityMonitor> _appActivityMonitor;
	FCClientEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	FCNotificationsEndpointConnection* _notificationsEndpointConnection;
	FCCommandQueue* _notificationsEndpointCommandQueue;
	FCNotificationController* _notificationController;
	FCPurchaseController* _purchaseController;
	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCPurchaseManagerType> _purchaseManager;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCTranslationManager* _translationManager;
	id<FCCurrentIssuesChecker> _currentIssuesChecker;
	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCAccessChecker* _issueAccessChecker;
	FCAccessChecker* _articleAccessChecker;
	id<FCFlintHelper> _flintHelper;
	id<FCBackgroundTaskable> _backgroundTaskable;
	id<FCForYouMagazineFeedManaging> _forYouMagazineFeedManager;
	/*^block*/id _forYouPluginGroupManagingProvider;
	id<FCForYouPluginGroupManaging> _forYouPluginGroupManager;
	id<FCForYouBridgedConfigurationParser> _forYouBridgedConfigurationParser;
	id<FCPPTContext> _pptContext;
	id<FCContentContext> _contentContext;
	id<FCPrivateDataContext> _privateDataContext;
	long long _options;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;                                                      //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,retain) id<FCAppActivityMonitor> appActivityMonitor;                                              //@synthesize appActivityMonitor=_appActivityMonitor - In the implementation block
@property (nonatomic,retain) id<FCPrivateDataContext> privateDataContext;                                              //@synthesize privateDataContext=_privateDataContext - In the implementation block
@property (nonatomic,retain) FCTranslationManager * translationManager;                                                //@synthesize translationManager=_translationManager - In the implementation block
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
@property (assign,nonatomic,__weak) id<FCFlintHelper> flintHelper;                                                     //@synthesize flintHelper=_flintHelper - In the implementation block
@property (assign,nonatomic,__weak) id<FCBackgroundTaskable> backgroundTaskable;                                       //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (assign,nonatomic,__weak) id<FCForYouMagazineFeedManaging> forYouMagazineFeedManager;                        //@synthesize forYouMagazineFeedManager=_forYouMagazineFeedManager - In the implementation block
@property (nonatomic,copy) id forYouPluginGroupManagingProvider;                                                       //@synthesize forYouPluginGroupManagingProvider=_forYouPluginGroupManagingProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FCForYouPluginGroupManaging> forYouPluginGroupManager;                          //@synthesize forYouPluginGroupManager=_forYouPluginGroupManager - In the implementation block
@property (nonatomic,retain) id<FCForYouBridgedConfigurationParser> forYouBridgedConfigurationParser;                  //@synthesize forYouBridgedConfigurationParser=_forYouBridgedConfigurationParser - In the implementation block
@property (nonatomic,readonly) BOOL deviceIsiPad;                                                                      //@synthesize deviceIsiPad=_deviceIsiPad - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                            //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,readonly) BOOL isPrivateDataEncryptionEnabled; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseStartingUp; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseOnline; 
@property (nonatomic,readonly) BOOL isPrivateDatabaseTemporarilySuspended; 
@property (nonatomic,readonly) FCClientEndpointConnection * endpointConnection;                                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCNotificationsEndpointConnection * notificationsEndpointConnection;                    //@synthesize notificationsEndpointConnection=_notificationsEndpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                                                  //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * notificationsEndpointCommandQueue;                                     //@synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager; 
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager; 
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
-(id)init;
-(long long)options;
-(FCUserInfo *)userInfo;
-(void)setOptions:(long long)arg1 ;
-(FCAssetManager *)assetManager;
-(BOOL)deviceIsiPad;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCPurchaseManagerType>)purchaseManager;
-(id)initForTesting;
-(FCSubscriptionController *)subscriptionController;
-(FCClientEndpointConnection *)endpointConnection;
-(FCPurchaseController *)purchaseController;
-(FCPersonalizationData *)personalizationData;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(NSString *)contentStoreFrontID;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FCNotificationsEndpointConnection *)notificationsEndpointConnection;
-(FCFeedManager *)feedManager;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(FCTagController *)tagController;
-(FCSubscriptionList *)subscriptionList;
-(id<FCForYouPluginGroupManaging>)forYouPluginGroupManager;
-(id<FCPPTContext>)pptContext;
-(NSString *)contentDirectory;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(NSString *)privateDataDirectory;
-(id<FCAppActivityMonitor>)appActivityMonitor;
-(FCTagSettings *)tagSettings;
-(id<FCContentContextInternal>)internalContentContext;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
-(FCReadingHistory *)readingHistory;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(id<FCForYouBridgedConfigurationParser>)forYouBridgedConfigurationParser;
-(FCArticleController *)articleController;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(NSString *)supportedContentStoreFrontID;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(FCAccessChecker *)articleAccessChecker;
-(FCAccessChecker *)issueAccessChecker;
-(FCReadingList *)readingList;
-(FCTranslationManager *)translationManager;
-(id<FCPrivateDataContextInternal>)internalPrivateDataContext;
-(FCNotificationController *)notificationController;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(BOOL)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14 ;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(void)setAppActivityMonitor:(id<FCAppActivityMonitor>)arg1 ;
-(id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4 ;
-(id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1 ;
-(void)_purchaseControllerDidAddALaCarteSubscription;
-(FCIssueReadingHistory *)issueReadingHistory;
-(id)forYouPluginGroupManagingProvider;
-(id<FCPrivateDataContext>)privateDataContext;
-(id<FCContentContext>)contentContext;
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
-(BOOL)isPrivateDataSyncingEnabled;
-(id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id<FCPushNotificationHandling>)privatePushNotificationHandler;
-(id)insertTestArticle;
-(id)insertTestArticlesWithCount:(unsigned long long)arg1 ;
-(BOOL)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(long long)preferredMediaQuality;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(BOOL)arg10 deviceIsiPad:(BOOL)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14 ;
-(id)notificationsController;
-(FCCommandQueue *)endpointCommandQueue;
-(FCCommandQueue *)notificationsEndpointCommandQueue;
-(BOOL)isPrivateDataEncryptionEnabled;
-(BOOL)isPrivateDatabaseStartingUp;
-(BOOL)isPrivateDatabaseOnline;
-(BOOL)isPrivateDatabaseTemporarilySuspended;
-(void)setTranslationManager:(FCTranslationManager *)arg1 ;
-(id<FCCurrentIssuesChecker>)currentIssuesChecker;
-(void)setCurrentIssuesChecker:(id<FCCurrentIssuesChecker>)arg1 ;
-(void)setIssueAccessChecker:(FCAccessChecker *)arg1 ;
-(void)setArticleAccessChecker:(FCAccessChecker *)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setBackgroundTaskable:(id<FCBackgroundTaskable>)arg1 ;
-(id<FCForYouMagazineFeedManaging>)forYouMagazineFeedManager;
-(void)setForYouMagazineFeedManager:(id<FCForYouMagazineFeedManaging>)arg1 ;
-(void)setForYouPluginGroupManagingProvider:(id)arg1 ;
-(void)setForYouPluginGroupManager:(id<FCForYouPluginGroupManaging>)arg1 ;
-(void)setForYouBridgedConfigurationParser:(id<FCForYouBridgedConfigurationParser>)arg1 ;
-(void)setPrivateDataContext:(id<FCPrivateDataContext>)arg1 ;
@end

