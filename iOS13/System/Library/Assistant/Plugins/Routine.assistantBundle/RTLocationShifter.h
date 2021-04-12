/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
*/


#import <Routine/Routine-Structs.h>
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

