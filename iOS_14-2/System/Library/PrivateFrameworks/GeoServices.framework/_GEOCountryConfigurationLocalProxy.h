/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source;
@class NSObject, CoreTelephonyClient, geo_isolater, CTXPCServiceSubscriptionContext, NSString;

@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_source> _scheduledUpdateTimer;
	id _countryCodeOverrideChangeListener;
	CoreTelephonyClient* _telephonyClient;
	CTServerConnectionRef _telephonyServerConnection;
	geo_isolater* _currentDataContextIsolation;
	BOOL _loadedCurrentDataContext;
	CTXPCServiceSubscriptionContext* _currentDataContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)servingNetworkChanged:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_determineCurrentCountryCode:(/*^block*/id)arg1 ;
-(void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_scheduleUpdate;
-(void)_determineGeoIPCountryCode:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

