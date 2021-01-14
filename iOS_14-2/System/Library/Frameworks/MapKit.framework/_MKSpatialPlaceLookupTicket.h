/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceSpatialPlaceLookupTicket.h>

@protocol GEOMapServiceSpatialPlaceLookupTicket;
@class GEOMapRegion, NSError, NSString;

@interface _MKSpatialPlaceLookupTicket : NSObject <MKMapServiceSpatialPlaceLookupTicket> {

	id<GEOMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;
	NSError* _error;
	GEOMapRegion* _resultBoundingRegion;

}

@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)traits;
-(id)initWithTicket:(id)arg1 ;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)cancel;
-(GEOMapRegion *)boundingRegion;
@end

