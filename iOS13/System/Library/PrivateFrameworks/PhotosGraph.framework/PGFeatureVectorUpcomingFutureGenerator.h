/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureVectorGenerator.h>

@class CLSHolidayCalendarEventService;

@interface PGFeatureVectorUpcomingFutureGenerator : PGFeatureVectorGenerator {

	CLSHolidayCalendarEventService* _holidayService;

}

@property (nonatomic,retain) CLSHolidayCalendarEventService * holidayService;              //@synthesize holidayService=_holidayService - In the implementation block
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(CLSHolidayCalendarEventService *)holidayService;
-(BOOL)_enumerateHolidayFeatureVectorsFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumeratePeopleEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumerateCalendarEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setHolidayService:(CLSHolidayCalendarEventService *)arg1 ;
@end

