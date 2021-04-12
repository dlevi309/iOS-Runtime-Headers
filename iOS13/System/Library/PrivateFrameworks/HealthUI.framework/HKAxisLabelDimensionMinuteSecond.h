/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 ;
-(id)stringForLocation:(id)arg1 ;
@end

