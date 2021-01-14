/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ENConfigurationStore : NSObject {

	BOOL _developerServerConfiguration;
	NSString* _directoryPath;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSString* _regionIdentifierOverride;

}

@property (nonatomic,copy,readonly) NSString * directoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storeQueue;              //@synthesize storeQueue=_storeQueue - In the implementation block
@property (assign,nonatomic) BOOL developerServerConfiguration;                    //@synthesize developerServerConfiguration=_developerServerConfiguration - In the implementation block
@property (nonatomic,copy) NSString * regionIdentifierOverride;                    //@synthesize regionIdentifierOverride=_regionIdentifierOverride - In the implementation block
+(id)legacyAppCacheURL;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(id)init;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(NSString *)directoryPath;
-(void)allRegionConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(void)allRegionServerConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(id)configurationForRegion:(id)arg1 ;
-(id)serverConfigurationForRegion:(id)arg1 ;
-(void)enumerateCachedRegionServerConfigurationsWithHandler:(/*^block*/id)arg1 ;
-(void)prefsChanged;
-(BOOL)saveTemporaryServerConfigurations:(id)arg1 error:(id*)arg2 ;
-(void)clearTemporaryServerConfigurations;
-(id)agencyConfigurationForRegion:(id)arg1 ;
-(BOOL)saveRegionConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)serverExposureConfigurationForRegion:(id)arg1 ;
-(id)allRegionServerConfigurations;
-(id)downloadConfigurationForRegion:(id)arg1 ;
-(id)serverConfigurationResponseForRegion:(id)arg1 ;
-(BOOL)removeConfigurationsForRegion:(id)arg1 includingSubdivisions:(BOOL)arg2 error:(id*)arg3 ;
-(void)allCachedServerResponseConfigurationsWithCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allAgencyServerRegionConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(id)subdivisionListForRegion:(id)arg1 ;
-(void)setDeveloperServerConfiguration:(BOOL)arg1 ;
-(void)setRegionIdentifierOverride:(NSString *)arg1 ;
-(id)_configurationForRegion:(id)arg1 ;
-(id)fileURLforRegionConfiguration:(id)arg1 ;
-(id)_serverConfigurationResponseForRegion:(id)arg1 ;
-(id)_agencyConfigurationForRegion:(id)arg1 ;
-(BOOL)_saveCountrySubdivisionList:(id)arg1 country:(id)arg2 error:(id*)arg3 ;
-(id)fileURLforCountrySubdivisionList:(id)arg1 ;
-(BOOL)_saveServerConfigurationResponse:(id)arg1 error:(id*)arg2 ;
-(id)regionFromServerResponse:(id)arg1 ;
-(id)fileURLforRegionServerConfiguration:(id)arg1 ;
-(BOOL)removeConfigurationsForRegionCode:(id)arg1 error:(id*)arg2 ;
-(void)enumerateCachedRegionServerConfigurationsWithCountryCode:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_removeSubdivisionListForRegion:(id)arg1 error:(id*)arg2 ;
-(id)_directoryURLForCachedConfigurations;
-(void)_enumerateCachedServerResponseConfigurationsWithDirectoryURL:(id)arg1 prefix:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)allCachedServerResponseConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(id)_allCachedServerResponseConfigurationsWithPrefix:(id)arg1 ;
-(id)allRegionServerConfigurationsForCountryCode:(id)arg1 ;
-(id)_localeForRegion:(id)arg1 ;
-(id)_serverConfigurationResponseForFileURL:(id)arg1 ;
-(BOOL)developerServerConfiguration;
-(NSString *)regionIdentifierOverride;
-(id)developerConfigurationsURL;
-(id)serverConfigurationCacheURL;
-(id)_serverConfigurationForRegion:(id)arg1 ;
-(id)localeForRegion:(id)arg1 ;
-(id)_subdivisionListForRegion:(id)arg1 ;
-(id)_localeIdentifiersForRegion:(id)arg1 ;
-(id)configurationCacheURL;
-(id)subdivisionListCacheURL;
-(id)regionCacheURL;
-(id)systemConfigurationCacheURL;
-(BOOL)saveCountrySubdivisionList:(id)arg1 region:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveServerConfigurationResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeSubdivisionListForRegion:(id)arg1 error:(id*)arg2 ;
-(id)allCachedCountries;
-(BOOL)regionSupportsSubdivisions:(id)arg1 ;
-(id)localeIdentifiersForRegion:(id)arg1 ;
-(void)resetStore;
-(id)cachedAppConfiguationForBundleID:(id)arg1 forRegionID:(id)arg2 ;
-(id)legacyAppConfiguationForMobileCountryCode:(id)arg1 ;
@end

