/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source;
@class NSObject, CoreTelephonyClient, NSString;

@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_source> _scheduledUpdateTimer;
	id _countryCodeOverrideChangeListener;
	CoreTelephonyClient* _telephonyClient;
	CTServerConnectionRef _telephonyServerConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)servingNetworkChanged:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_scheduleUpdate;
-(void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_determineGeoIPCountryCode:(/*^block*/id)arg1 ;
-(void)_determineCurrentCountryCode:(/*^block*/id)arg1 ;
@end

