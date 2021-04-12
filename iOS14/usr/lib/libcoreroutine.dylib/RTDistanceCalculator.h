/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTLocationShifter;

@interface RTDistanceCalculator : RTService {

	RTLocationShifter* _locationShifter;

}

@property (nonatomic,retain) RTLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(double)distanceFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
-(RTLocationShifter *)locationShifter;
-(void)setLocationShifter:(RTLocationShifter *)arg1 ;
@end

