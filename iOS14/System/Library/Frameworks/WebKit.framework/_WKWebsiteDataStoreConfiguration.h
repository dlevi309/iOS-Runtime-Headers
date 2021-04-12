/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString, NSURL, NSDictionary;

@interface _WKWebsiteDataStoreConfiguration : NSObject <WKObject> {

	ObjectStorage<WebKit::WebsiteDataStoreConfiguration> _configuration;

}

@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (setter=setHTTPProxy:,nonatomic,copy) NSURL * httpProxy; 
@property (setter=setHTTPSProxy:,nonatomic,copy) NSURL * httpsProxy; 
@property (assign,nonatomic) BOOL deviceManagementRestrictionsEnabled; 
@property (assign,nonatomic) BOOL networkCacheSpeculativeValidationEnabled; 
@property (assign,nonatomic) BOOL fastServerTrustEvaluationEnabled; 
@property (assign,nonatomic) unsigned long long perOriginStorageQuota; 
@property (nonatomic,copy) NSString * boundInterfaceIdentifier; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
@property (assign,nonatomic) BOOL legacyTLSEnabled; 
@property (nonatomic,copy) NSDictionary * proxyConfiguration; 
@property (nonatomic,copy) NSString * dataConnectionServiceType; 
@property (assign,nonatomic) BOOL preventsSystemHTTPProxyAuthentication; 
@property (assign,nonatomic) BOOL requiresSecureHTTPSProxyConnection; 
@property (setter=_setWebStorageDirectory:,nonatomic,copy) NSURL * _webStorageDirectory; 
@property (setter=_setIndexedDBDatabaseDirectory:,nonatomic,copy) NSURL * _indexedDBDatabaseDirectory; 
@property (setter=_setWebSQLDatabaseDirectory:,nonatomic,copy) NSURL * _webSQLDatabaseDirectory; 
@property (setter=_setCookieStorageFile:,nonatomic,copy) NSURL * _cookieStorageFile; 
@property (setter=_setResourceLoadStatisticsDirectory:,nonatomic,copy) NSURL * _resourceLoadStatisticsDirectory; 
@property (setter=_setCacheStorageDirectory:,nonatomic,copy) NSURL * _cacheStorageDirectory; 
@property (setter=_setServiceWorkerRegistrationDirectory:,nonatomic,copy) NSURL * _serviceWorkerRegistrationDirectory; 
@property (assign,nonatomic) BOOL serviceWorkerProcessTerminationDelayEnabled; 
@property (nonatomic,copy) NSURL * networkCacheDirectory; 
@property (nonatomic,copy) NSURL * deviceIdHashSaltsStorageDirectory; 
@property (nonatomic,copy) NSURL * applicationCacheDirectory; 
@property (nonatomic,copy) NSString * applicationCacheFlatFileSubdirectoryName; 
@property (nonatomic,copy) NSURL * mediaCacheDirectory; 
@property (nonatomic,copy) NSURL * mediaKeysStorageDirectory; 
@property (assign,nonatomic) unsigned long long testSpeedMultiplier; 
@property (assign,nonatomic) BOOL suppressesConnectionTerminationOnSystemChange; 
@property (assign,nonatomic) BOOL allowsServerPreconnect; 
@property (nonatomic,copy) NSURL * alternativeServicesStorageDirectory; 
@property (nonatomic,copy) NSURL * standaloneApplicationURL; 
@property (assign,nonatomic) BOOL allLoadsBlockedByDeviceManagementRestrictionsForTesting; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPersistent;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)_setIndexedDBDatabaseDirectory:(id)arg1 ;
-(void)setRequiresSecureHTTPSProxyConnection:(BOOL)arg1 ;
-(void)_setCookieStorageFile:(id)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setApplicationCacheDirectory:(NSURL *)arg1 ;
-(void)setStandaloneApplicationURL:(NSURL *)arg1 ;
-(void)setDataConnectionServiceType:(NSString *)arg1 ;
-(BOOL)suppressesConnectionTerminationOnSystemChange;
-(id)init;
-(NSURL *)httpsProxy;
-(void)setAlternativeServicesStorageDirectory:(NSURL *)arg1 ;
-(BOOL)legacyTLSEnabled;
-(id)initNonPersistentConfiguration;
-(BOOL)requiresSecureHTTPSProxyConnection;
-(void)setHTTPSProxy:(id)arg1 ;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
-(BOOL)serviceWorkerProcessTerminationDelayEnabled;
-(void)setNetworkCacheDirectory:(NSURL *)arg1 ;
-(NSURL *)_indexedDBDatabaseDirectory;
-(NSURL *)standaloneApplicationURL;
-(NSURL *)applicationCacheDirectory;
-(BOOL)fastServerTrustEvaluationEnabled;
-(void)setPreventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(BOOL)deviceManagementRestrictionsEnabled;
-(void)_setWebStorageDirectory:(id)arg1 ;
-(void)_setResourceLoadStatisticsDirectory:(id)arg1 ;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(NSURL *)mediaKeysStorageDirectory;
-(void)_setServiceWorkerRegistrationDirectory:(id)arg1 ;
-(void)setMediaKeysStorageDirectory:(NSURL *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(NSURL *)httpProxy;
-(void)setPerOriginStorageQuota:(unsigned long long)arg1 ;
-(NSURL *)_webStorageDirectory;
-(void)setDeviceIdHashSaltsStorageDirectory:(NSURL *)arg1 ;
-(NSURL *)networkCacheDirectory;
-(void)setAllLoadsBlockedByDeviceManagementRestrictionsForTesting:(BOOL)arg1 ;
-(NSString *)boundInterfaceIdentifier;
-(void)setAllowsServerPreconnect:(BOOL)arg1 ;
-(NSDictionary *)proxyConfiguration;
-(NSURL *)_resourceLoadStatisticsDirectory;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)_setCacheStorageDirectory:(id)arg1 ;
-(void)setLegacyTLSEnabled:(BOOL)arg1 ;
-(void)setHTTPProxy:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(unsigned long long)perOriginStorageQuota;
-(NSURL *)alternativeServicesStorageDirectory;
-(void)setServiceWorkerProcessTerminationDelayEnabled:(BOOL)arg1 ;
-(BOOL)preventsSystemHTTPProxyAuthentication;
-(void)setMediaCacheDirectory:(NSURL *)arg1 ;
-(void)setDeviceManagementRestrictionsEnabled:(BOOL)arg1 ;
-(NSString *)dataConnectionServiceType;
-(NSURL *)_webSQLDatabaseDirectory;
-(NSURL *)_cacheStorageDirectory;
-(Object*)_apiObject;
-(BOOL)allowsServerPreconnect;
-(void)setTestSpeedMultiplier:(unsigned long long)arg1 ;
-(unsigned long long)testSpeedMultiplier;
-(NSURL *)deviceIdHashSaltsStorageDirectory;
-(NSURL *)_cookieStorageFile;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setApplicationCacheFlatFileSubdirectoryName:(NSString *)arg1 ;
-(void)setNetworkCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(BOOL)allLoadsBlockedByDeviceManagementRestrictionsForTesting;
-(NSString *)applicationCacheFlatFileSubdirectoryName;
-(void)setFastServerTrustEvaluationEnabled:(BOOL)arg1 ;
-(NSURL *)_serviceWorkerRegistrationDirectory;
-(void)setSuppressesConnectionTerminationOnSystemChange:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)networkCacheSpeculativeValidationEnabled;
-(NSURL *)mediaCacheDirectory;
-(void)_setWebSQLDatabaseDirectory:(id)arg1 ;
@end

