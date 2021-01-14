/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOGeocodeRequester : GEOServiceRequester
+(id)sharedGeocodeRequester;
-(void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

