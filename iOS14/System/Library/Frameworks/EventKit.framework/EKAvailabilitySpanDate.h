/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSDate;

@interface EKAvailabilitySpanDate : NSObject {

	NSDate* _spanDate;
	long long _dateType;
	long long _spanType;

}

@property (nonatomic,retain) NSDate * spanDate;              //@synthesize spanDate=_spanDate - In the implementation block
@property (assign) long long dateType;                       //@synthesize dateType=_dateType - In the implementation block
@property (assign) long long spanType;                       //@synthesize spanType=_spanType - In the implementation block
+(unsigned)valueForSpanType:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)description;
-(long long)spanType;
-(NSDate *)spanDate;
-(long long)dateType;
-(void)setSpanDate:(NSDate *)arg1 ;
-(void)setDateType:(long long)arg1 ;
-(id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3 ;
-(void)setSpanType:(long long)arg1 ;
@end

