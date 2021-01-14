/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

@interface MKRouteStepPolyline : MKPolyline {

	MKRoutePolyline* _fullRoute;

}
-(CLLocationCoordinate2D)coordinate;
-(id)_initWithRoute:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
@end

