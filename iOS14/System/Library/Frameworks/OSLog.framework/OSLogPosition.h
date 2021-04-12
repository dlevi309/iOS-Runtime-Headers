/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/


@class NSDate;

@interface OSLogPosition : NSObject {

	long long _precision;
	NSDate* _date;
	double _offset;

}

@property (nonatomic,readonly) long long precision;              //@synthesize precision=_precision - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double offset;                    //@synthesize offset=_offset - In the implementation block
-(long long)precision;
-(id)initWithDate:(id)arg1 ;
-(double)offset;
-(NSDate *)date;
-(id)initWithEventSource:(id)arg1 timeIntervalSinceEnd:(double)arg2 ;
-(id)initWithTimeIntervalSinceLatestBoot:(double)arg1 ;
@end

