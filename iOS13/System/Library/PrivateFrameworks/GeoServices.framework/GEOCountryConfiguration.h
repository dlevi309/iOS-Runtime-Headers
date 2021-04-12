/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxyDelegate.h>

@protocol _GEOCountryConfigurationServerProxy;
@class geo_isolater, NSString, NSMutableArray, NSMutableDictionary;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {

	geo_isolater* _isolater;
	NSString* _countryCode;
	NSMutableArray* _updateCompletionHandlers;
	NSMutableDictionary* _supportedFeatures;
	geo_isolater* _currentCountrySupportsNavigationIsolater;
	BOOL _currentCountrySupportsNavigation;
	BOOL _determinedCurrentCountrySupportsNavigation;
	double _urlAuthenticationTimeToLive;
	BOOL _hasURLAuthenticationTimeToLive;
	id<_GEOCountryConfigurationServerProxy> _serverProxy;

}

@property (nonatomic,readonly) BOOL zilchPointsSupported; 
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager; 
@property (nonatomic,readonly) BOOL shouldRequestLaneGuidance; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,readonly) BOOL currentCountrySupportsTraffic; 
@property (nonatomic,readonly) BOOL currentCountrySupportsDirections; 
@property (nonatomic,readonly) BOOL currentCountrySupportsNavigation; 
@property (nonatomic,readonly) BOOL currentCountrySupportsRouteGenius; 
@property (nonatomic,readonly) BOOL currentCountrySupportsCarIntegration; 
@property (nonatomic,readonly) BOOL currentCountrySupportsCommute; 
@property (nonatomic,readonly) double urlAuthenticationTimeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
+(void)disableServerConnection;
+(void)setUseLocalProxy:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)countryCode;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(BOOL)zilchPointsSupported;
-(BOOL)shouldUseGuidanceEventManager;
-(BOOL)shouldRequestLaneGuidance;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 ;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4 decoder:(/*^block*/id)arg5 ;
-(BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2 ;
-(BOOL)currentCountrySupportsFeature:(long long)arg1 ;
-(BOOL)currentCountrySupportsTraffic;
-(BOOL)currentCountrySupportsNavigation;
-(id)_countryCodeOnIsolationQueue;
-(id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 ;
-(void)_resetSupportedFeatures;
-(void)serverProxyProvidersDidChange:(id)arg1 ;
-(void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2 ;
-(void)updateProvidersForCurrentCountry;
-(BOOL)currentCountrySupportsDirections;
-(BOOL)currentCountrySupportsRouteGenius;
-(BOOL)currentCountrySupportsCarIntegration;
-(BOOL)currentCountrySupportsCommute;
-(double)urlAuthenticationTimeToLive;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(/*^block*/id)arg3 ;
@end

