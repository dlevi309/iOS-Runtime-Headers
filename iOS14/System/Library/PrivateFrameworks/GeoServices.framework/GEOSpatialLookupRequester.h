/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOSpatialLookupRequester : GEOServiceRequester
+(id)sharedInstance;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_validateResponse:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
@end

