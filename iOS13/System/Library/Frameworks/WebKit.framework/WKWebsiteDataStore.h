/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, _WKWebsiteDataStoreConfiguration, WKHTTPCookieStore;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<WebKit::WebsiteDataStore> _websiteDataStore;
	WeakObjCPtr<id<_WKWebsiteDataStoreDelegate> > _delegate;

}

@property (assign,setter=_setResourceLoadStatisticsEnabled:,nonatomic) BOOL _resourceLoadStatisticsEnabled; 
@property (assign,setter=_setResourceLoadStatisticsDebugMode:,nonatomic) BOOL _resourceLoadStatisticsDebugMode; 
@property (assign,setter=_setPerOriginStorageQuota:,nonatomic) unsigned long long _perOriginStorageQuota; 
@property (assign,setter=_setCacheStorageDirectory:,nonatomic) NSString * _cacheStorageDirectory; 
@property (assign,setter=_setServiceWorkerRegistrationDirectory:,nonatomic) NSString * _serviceWorkerRegistrationDirectory; 
@property (assign,setter=_setBoundInterfaceIdentifier:,nonatomic) NSString * _boundInterfaceIdentifier; 
@property (assign,setter=_setAllowsCellularAccess:,nonatomic) BOOL _allowsCellularAccess; 
@property (assign,setter=_setProxyConfiguration:,nonatomic) NSDictionary * _proxyConfiguration; 
@property (setter=_setSourceApplicationBundleIdentifier:,nonatomic,copy) NSString * _sourceApplicationBundleIdentifier; 
@property (setter=_setSourceApplicationSecondaryIdentifier:,nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier; 
@property (assign,setter=_setAllowsTLSFallback:,nonatomic) BOOL _allowsTLSFallback; 
@property (nonatomic,readonly) NSURL * _indexedDBDatabaseDirectory; 
@property (assign,nonatomic,__weak) id<_WKWebsiteDataStoreDelegate> _delegate; 
@property (nonatomic,copy,readonly) _WKWebsiteDataStoreConfiguration * _configuration; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) WKHTTPCookieStore * httpCookieStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(BOOL)supportsSecureCoding;
+(id)nonPersistentDataStore;
+(id)defaultDataStore;
+(id)allWebsiteDataTypes;
+(id)_allWebsiteDataTypesIncludingPrivate;
+(BOOL)_defaultDataStoreExists;
+(void)_deleteDefaultDataStoreForTesting;
+(void)_allowWebsiteDataRecordsForAllOrigins;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_WKWebsiteDataStoreDelegate>)_delegate;
-(_WKWebsiteDataStoreConfiguration *)_configuration;
-(BOOL)isPersistent;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(NSString *)_sourceApplicationBundleIdentifier;
-(BOOL)_allowsTLSFallback;
-(id)_initWithConfiguration:(id)arg1 ;
-(NSString *)_boundInterfaceIdentifier;
-(BOOL)_allowsCellularAccess;
-(void)set_delegate:(id<_WKWebsiteDataStoreDelegate>)arg1 ;
-(Object*)_apiObject;
-(void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WKHTTPCookieStore *)httpCookieStore;
-(void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_resourceLoadStatisticsEnabled;
-(void)_setResourceLoadStatisticsEnabled:(BOOL)arg1 ;
-(void)_setUseITPDatabase:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_resourceLoadStatisticsDebugMode;
-(void)_setResourceLoadStatisticsDebugMode:(BOOL)arg1 ;
-(unsigned long long)_perOriginStorageQuota;
-(void)_setPerOriginStorageQuota:(unsigned long long)arg1 ;
-(NSString *)_cacheStorageDirectory;
-(void)_setCacheStorageDirectory:(id)arg1 ;
-(NSString *)_serviceWorkerRegistrationDirectory;
-(void)_setServiceWorkerRegistrationDirectory:(id)arg1 ;
-(void)_setBoundInterfaceIdentifier:(id)arg1 ;
-(void)_setAllowsCellularAccess:(BOOL)arg1 ;
-(void)_setProxyConfiguration:(id)arg1 ;
-(void)_setSourceApplicationBundleIdentifier:(id)arg1 ;
-(void)_setSourceApplicationSecondaryIdentifier:(id)arg1 ;
-(void)_setAllowsTLSFallback:(BOOL)arg1 ;
-(NSDictionary *)_proxyConfiguration;
-(NSURL *)_indexedDBDatabaseDirectory;
-(void)_setResourceLoadStatisticsTestingCallback:(/*^block*/id)arg1 ;
-(void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleCookieBlockingUpdate:(/*^block*/id)arg1 ;
-(void)_logUserInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getIsPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_clearPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_clearResourceLoadStatistics:(/*^block*/id)arg1 ;
-(void)_getResourceLoadStatisticsDataSummary:(/*^block*/id)arg1 ;
-(void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processStatisticsAndDataRecords:(/*^block*/id)arg1 ;
-(BOOL)_hasRegisteredServiceWorker;
@end

