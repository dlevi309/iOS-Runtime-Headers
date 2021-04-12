/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@class NSDateFormatter, NSCalendar, NSDateComponentsFormatter;

@interface CPSTravelEstimatesStringFormatter : NSObject {

	NSDateFormatter* _arrivalTimeFormatter;
	NSCalendar* _calendar;
	NSDateComponentsFormatter* _remainingTimeFormatter;

}

@property (nonatomic,retain) NSCalendar * calendar;                                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDateComponentsFormatter * remainingTimeFormatter;              //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * arrivalTimeFormatter;                          //@synthesize arrivalTimeFormatter=_arrivalTimeFormatter - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(NSDateComponentsFormatter *)remainingTimeFormatter;
-(NSDateFormatter *)arrivalTimeFormatter;
-(id)generateTravelEstimatesStringsForTravelEstimates:(id)arg1 ;
-(double)_minuteRoundedTimeRemainingForTravelEstimates:(id)arg1 ;
@end

