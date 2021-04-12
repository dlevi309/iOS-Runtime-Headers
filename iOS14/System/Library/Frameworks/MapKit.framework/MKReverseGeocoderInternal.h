/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKReverseGeocoderDelegate, MKMapServiceTicket;
#import <MapKit/MapKit-Structs.h>
@class MKMapItem;

@interface MKReverseGeocoderInternal : NSObject {

	CLLocationCoordinate2D coordinate;
	id<MKReverseGeocoderDelegate> delegate;
	MKMapItem* mapItem;
	id<MKMapServiceTicket> ticket;
	BOOL querying;

}
@end

