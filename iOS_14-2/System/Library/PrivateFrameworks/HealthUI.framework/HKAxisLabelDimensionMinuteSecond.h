/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDateFormatter, NSDate;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar {

	NSDateFormatter* _dateFormatter;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 ;
@end

