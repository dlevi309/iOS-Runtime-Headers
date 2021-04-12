/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxyDelegate.h>

@protocol _GEOCountryConfigurationServerProxy;
@class geo_isolater, _GEOCountryConfigurationInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate> {

	geo_isolater* _isolater;
	_GEOCountryConfigurationInfo* _countryCodeInfo;
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
@property (nonatomic,readonly) BOOL currentCountrySupportsElectricVehicleRouting; 
@property (nonatomic,readonly) double urlAuthenticationTimeToLive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConfiguration;
+(void)disableServerConnection;
+(void)setUseLocalProxy:(BOOL)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(BOOL)shouldUseGuidanceEventManager;
-(NSString *)countryCode;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 ;
-(void)_resetSupportedFeatures;
-(id)init;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(void)serverProxyProvidersDidChange:(id)arg1 ;
-(BOOL)currentCountrySupportsTraffic;
-(id)countryCodeWithSource:(unsigned*)arg1 updatedAtTime:(id*)arg2 ;
-(id)_countryCodeOnIsolationQueue;
-(BOOL)currentCountrySupportsNavigation;
-(BOOL)currentCountrySupportsCarIntegration;
-(BOOL)currentCountrySupportsFeature:(long long)arg1 ;
-(void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2 ;
-(BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(BOOL)zilchPointsSupported;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(/*^block*/id)arg3 ;
-(id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long*)arg3 decoder:(/*^block*/id)arg4 ;
-(BOOL)currentCountrySupportsCommute;
-(id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long*)arg4 decoder:(/*^block*/id)arg5 ;
-(BOOL)currentCountrySupportsDirections;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long*)arg3 ;
-(BOOL)shouldRequestLaneGuidance;
-(void)updateCountryConfiguration:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)currentCountrySupportsRouteGenius;
-(void)updateProvidersForCurrentCountry;
-(BOOL)currentCountrySupportsElectricVehicleRouting;
-(void)dealloc;
-(double)urlAuthenticationTimeToLive;
@end

