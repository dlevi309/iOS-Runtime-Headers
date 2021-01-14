/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@interface ARSkipTileBounds : NSObject {

	double _minLatitude;
	double _maxLatitude;
	double _minLongitude;
	double _maxLongitude;

}
+(double)_normalizeLongitude:(double)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isInside:(CLLocationCoordinate2D)arg1 ;
@end

