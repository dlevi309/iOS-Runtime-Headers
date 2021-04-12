/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOLatLng, GEOApplicationAuditToken, NSObject;

@interface _GEOLocationShiftLocation : NSObject {

	GEOLatLng* _latLng;
	GEOApplicationAuditToken* _auditToken;
	double _accuracy;
	/*^block*/id _completionHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _mustGoToNetworkCallback;
	/*^block*/id _functionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) GEOLatLng * latLng;                                 //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) double accuracy;                                    //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
-(void)performErrorHandler:(id)arg1 ;
-(void)_performOnCallbackQueue:(/*^block*/id)arg1 ;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7 ;
-(GEOApplicationAuditToken *)auditToken;
-(id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 mustGoToNetworkCallback:(/*^block*/id)arg6 ;
-(GEOLatLng *)latLng;
-(id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)performCompletionHandlerWithShiftedCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double)arg2 function:(id)arg3 ;
-(double)accuracy;
-(id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(void)performMustGoToNetwork;
@end

