/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSError;

@interface _GEOFailedTicket : GEOAbstractMapServiceTicket {

	NSError* _error;

}
-(id)initWithError:(id)arg1 traits:(id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
@end

