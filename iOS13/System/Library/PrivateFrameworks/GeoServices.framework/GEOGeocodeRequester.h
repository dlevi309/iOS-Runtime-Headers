/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOGeocodeRequester : GEOServiceRequester
+(id)sharedGeocodeRequester;
-(void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

