/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol OS_dispatch_source;
@class CLSLocationCache, NSObject;

@interface CLSCachedGeocoderOperation : NSObject {

	BOOL _forceQuery;
	BOOL _cancelled;
	id _location;
	CLSLocationCache* _locationCache;
	double _accuracy;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)operationForceGeocoderWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
+(id)operationForceGeocoderWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(id)performSynchronouslyWithError:(id*)arg1 ;
-(id)initWithLocation:(id)arg1 withAccuracy:(double)arg2 ;
-(void)_timedOutForGeocoder:(id)arg1 withResultBlock:(/*^block*/id)arg2 ;
-(void)_setupTimeOutForGeocoder:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)_stopTimeOut;
-(void)_returnsResultsForPlacemarks:(id)arg1 error:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_executeQueryWithResultBlock:(/*^block*/id)arg1 ;
@end

