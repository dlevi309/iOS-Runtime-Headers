/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSObject, GEOLocationShifter;

@interface GEOCoarseLocationProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _inFlightTileLoadsCount;
	GEOLocationShifter* _locationShifter;

}
-(void)_fetchRepresentativePointFromData:(id)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)init;
-(BOOL)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
@end

