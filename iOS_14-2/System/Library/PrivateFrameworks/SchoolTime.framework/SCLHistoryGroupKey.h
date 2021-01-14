/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@class NSCalendar, NSDate;

@interface SCLHistoryGroupKey : NSObject {

	NSCalendar* _calendar;
	NSDate* _referenceDate;

}

@property (nonatomic,readonly) NSCalendar * calendar;               //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * referenceDate;              //@synthesize referenceDate=_referenceDate - In the implementation block
-(NSCalendar *)calendar;
-(id)description;
-(NSDate *)referenceDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 referenceDate:(id)arg2 ;
@end

