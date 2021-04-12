/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL allLoadsBlockedByDeviceManagementRestrictionsForTesting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)isPersistent;
-(BOOL)allowsCellularAccess;
-(NSString *)boundInterfaceIdentifier;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSDictionary *)proxyConfiguration;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(Object*)_apiObject;
-(NSURL *)_cacheStorageDirectory;
-(void)_setCacheStorageDirectory:(id)arg1 ;
-(NSURL *)_serviceWorkerRegistrationDirectory;
-(void)_setServiceWorkerRegistrationDirectory:(id)arg1 ;
-(NSURL *)_indexedDBDatabaseDirectory;
-(BOOL)suppressesConnectionTerminationOnSystemChange;
-(void)setSuppressesConnectionTerminationOnSystemChange:(BOOL)arg1 ;
-(id)initNonPersistentConfiguration;
-(NSURL *)_webStorageDirectory;
-(void)_setWebStorageDirectory:(id)arg1 ;
-(void)_setIndexedDBDatabaseDirectory:(id)arg1 ;
-(NSURL *)networkCacheDirectory;
-(void)setNetworkCacheDirectory:(NSURL *)arg1 ;
-(NSURL *)deviceIdHashSaltsStorageDirectory;
-(void)setDeviceIdHashSaltsStorageDirectory:(NSURL *)arg1 ;
-(NSURL *)_webSQLDatabaseDirectory;
-(void)_setWebSQLDatabaseDirectory:(id)arg1 ;
-(NSURL *)httpProxy;
-(void)setHTTPProxy:(id)arg1 ;
-(NSURL *)httpsProxy;
-(void)setHTTPSProxy:(id)arg1 ;
-(NSURL *)_cookieStorageFile;
-(void)_setCookieStorageFile:(id)arg1 ;
-(NSURL *)_resourceLoadStatisticsDirectory;
-(void)_setResourceLoadStatisticsDirectory:(id)arg1 ;
-(BOOL)serviceWorkerProcessTerminationDelayEnabled;
-(void)setServiceWorkerProcessTerminationDelayEnabled:(BOOL)arg1 ;
-(NSURL *)applicationCacheDirectory;
-(void)setApplicationCacheDirectory:(NSURL *)arg1 ;
-(NSString *)applicationCacheFlatFileSubdirectoryName;
-(void)setApplicationCacheFlatFileSubdirectoryName:(NSString *)arg1 ;
-(NSURL *)mediaCacheDirectory;
-(void)setMediaCacheDirectory:(NSURL *)arg1 ;
-(NSURL *)mediaKeysStorageDirectory;
-(void)setMediaKeysStorageDirectory:(NSURL *)arg1 ;
-(BOOL)deviceManagementRestrictionsEnabled;
-(void)setDeviceManagementRestrictionsEnabled:(BOOL)arg1 ;
-(BOOL)networkCacheSpeculativeValidationEnabled;
-(void)setNetworkCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(BOOL)fastServerTrustEvaluationEnabled;
-(void)setFastServerTrustEvaluationEnabled:(BOOL)arg1 ;
-(unsigned long long)perOriginStorageQuota;
-(void)setPerOriginStorageQuota:(unsigned long long)arg1 ;
-(unsigned long long)testSpeedMultiplier;
-(void)setTestSpeedMultiplier:(unsigned long long)arg1 ;
-(BOOL)allowsServerPreconnect;
-(void)setAllowsServerPreconnect:(BOOL)arg1 ;
-(BOOL)legacyTLSEnabled;
-(void)setLegacyTLSEnabled:(BOOL)arg1 ;
-(NSString *)dataConnectionServiceType;
-(void)setDataConnectionServiceType:(NSString *)arg1 ;
-(BOOL)allLoadsBlockedByDeviceManagementRestrictionsForTesting;
-(void)setAllLoadsBlockedByDeviceManagementRestrictionsForTesting:(BOOL)arg1 ;
@end

