/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOMapServiceTraits;


@protocol GEOMapServiceAllCollectionsViewTicket <GEOMapServiceCancellableTicket>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)cancel;

@end

