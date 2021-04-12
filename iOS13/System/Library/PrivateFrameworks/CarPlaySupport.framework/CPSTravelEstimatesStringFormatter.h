/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSDateComponentsFormatter *)remainingTimeFormatter;
-(NSDateFormatter *)arrivalTimeFormatter;
-(id)generateTravelEstimatesStringsForTravelEstimates:(id)arg1 ;
-(double)_minuteRoundedTimeRemainingForTravelEstimates:(id)arg1 ;
@end

