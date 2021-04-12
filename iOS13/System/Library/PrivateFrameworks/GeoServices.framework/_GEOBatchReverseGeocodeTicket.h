/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {

	GEOBatchRevGeocodeRequest* _batchReverseGeocodeRequest;
	BOOL _shiftLocationsIfNeeded;

}
-(id)description;
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(BOOL)isEqualForHistoryToTicket:(id)arg1 ;
@end

