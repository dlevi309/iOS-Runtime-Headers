/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEOCountryConfigurationServerProxy.h>

@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;
@class NSObject, NSString;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _providersChangedToken;
	id _countryCodeChangeListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

