/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class GEOMapRegion;


@protocol MKMapServiceSpatialPlaceLookupTicket <NSObject>
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@required
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(void)cancel;
-(GEOMapRegion *)boundingRegion;

@end

