/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTLocationShifter;

@interface RTDistanceCalculator : RTService {

	RTLocationShifter* _locationShifter;

}

@property (nonatomic,retain) RTLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
-(double)distanceFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
@end

