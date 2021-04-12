/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

