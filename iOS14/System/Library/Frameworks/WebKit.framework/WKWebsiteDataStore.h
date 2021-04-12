/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,setter=_setBoundInterfaceIdentifier:,nonatomic) NSString * _boundInterfaceIdentifier; 
@property (assign,setter=_setAllowsCellularAccess:,nonatomic) BOOL _allowsCellularAccess; 
@property (assign,setter=_setProxyConfiguration:,nonatomic) NSDictionary * _proxyConfiguration; 
@property (assign,setter=_setAllowsTLSFallback:,nonatomic) BOOL _allowsTLSFallback; 
@property (nonatomic,readonly) NSURL * _indexedDBDatabaseDirectory; 
@property (assign,nonatomic,__weak) id<_WKWebsiteDataStoreDelegate> _delegate; 
@property (nonatomic,copy,readonly) _WKWebsiteDataStoreConfiguration * _configuration; 
@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (nonatomic,readonly) WKHTTPCookieStore * httpCookieStore; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safari_defaultDataStore;
+(id)safari_nonPersistentDataStore;
+(id)safari_dataStoreWithConfiguration:(id)arg1 ;
+(void)safari_setCommonProperties:(id)arg1 ;
+(id)safari_allDataTypes;
+(void)safari_clearHSTSSuperCookies;
+(BOOL)supportsSecureCoding;
+(id)defaultDataStore;
+(id)allWebsiteDataTypes;
+(id)_allWebsiteDataTypesIncludingPrivate;
+(BOOL)_defaultDataStoreExists;
+(void)_deleteDefaultDataStoreForTesting;
+(void)_allowWebsiteDataRecordsForAllOrigins;
+(id)nonPersistentDataStore;
-(id<_WKWebsiteDataStoreDelegate>)_delegate;
-(_WKWebsiteDataStoreConfiguration *)_configuration;
-(NSString *)_boundInterfaceIdentifier;
-(id)_initWithConfiguration:(id)arg1 ;
-(BOOL)isPersistent;
-(void)_setPerOriginStorageQuota:(unsigned long long)arg1 ;
-(void)_setResourceLoadStatisticsTestingCallback:(/*^block*/id)arg1 ;
-(void)_clearResourceLoadStatistics:(/*^block*/id)arg1 ;
-(void)_setThirdPartyCookieBlockingMode:(BOOL)arg1 onlyOnSitesWithoutUserInteraction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_scheduleCookieBlockingUpdate:(/*^block*/id)arg1 ;
-(id)init;
-(void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)_proxyConfiguration;
-(void)_clearLoadedSubresourceDomainsFor:(id)arg1 ;
-(void)_statisticsDatabaseHasAllTables:(/*^block*/id)arg1 ;
-(NSURL *)_indexedDBDatabaseDirectory;
-(void)_setPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_allowsCellularAccess;
-(void)encodeWithCoder:(id)arg1 ;
-(WKHTTPCookieStore *)httpCookieStore;
-(void)_clearPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_resourceLoadStatisticsEnabled;
-(void)_logUserInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadedSubresourceDomainsFor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_getIsPrevalentDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setUseITPDatabase:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setResourceLoadStatisticsEnabled:(BOOL)arg1 ;
-(void)_renameOrigin:(id)arg1 to:(id)arg2 forDataOfTypes:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)set_delegate:(id<_WKWebsiteDataStoreDelegate>)arg1 ;
-(void)_setAllowsTLSFallback:(BOOL)arg1 ;
-(void)_setResourceLoadStatisticsDebugMode:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Object*)_apiObject;
-(void)_setAllowsCellularAccess:(BOOL)arg1 ;
-(void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_resourceLoadStatisticsDebugMode;
-(BOOL)_hasRegisteredServiceWorker;
-(void)_getResourceLoadStatisticsDataSummary:(/*^block*/id)arg1 ;
-(unsigned long long)_perOriginStorageQuota;
-(void)_appBoundSchemes:(/*^block*/id)arg1 ;
-(void)_appBoundDomains:(/*^block*/id)arg1 ;
-(void)_processStatisticsAndDataRecords:(/*^block*/id)arg1 ;
-(BOOL)_allowsTLSFallback;
-(void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setProxyConfiguration:(id)arg1 ;
-(void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_setBoundInterfaceIdentifier:(id)arg1 ;
@end

