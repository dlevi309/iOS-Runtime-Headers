/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

@interface _GEOLegacyBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket {

	GEOBatchRevGeocodeRequest* _batchReverseGeocodeRequest;
	/*^block*/id _locationShifter;

}
-(void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithBatchReverseGeocodeRequest:(id)arg1 locationShifter:(/*^block*/id)arg2 traits:(id)arg3 ;
-(BOOL)isEqualForHistoryToTicket:(id)arg1 ;
-(id)description;
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
@end

