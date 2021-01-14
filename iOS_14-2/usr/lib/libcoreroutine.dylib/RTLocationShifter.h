/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class GEOLocationShifter;

@interface RTLocationShifter : NSObject {

	GEOLocationShifter* _geoLocationShifter;

}
+(BOOL)isLocationShiftRequiredForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)init;
-(void)shiftCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)shiftedLocation:(id)arg1 allowNetwork:(BOOL)arg2 error:(id*)arg3 ;
@end

