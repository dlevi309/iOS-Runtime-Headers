/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOServiceRequester.h>
#import <libobjc.A.dylib/GEOPlaceDataRequester.h>

@protocol GEOPlaceDataRequester
@required
-(void)cancelRequest:(id)arg1;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end


@interface GEOPlaceDataRequester : GEOServiceRequester <GEOPlaceDataRequester>
+(id)sharedInstance;
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

