/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/


@interface ICSTimeZoneChange : NSObject {

	double _interval;
	long long _tzOffsetTo;

}
-(long long)compare:(id)arg1 ;
-(double)interval;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)tzOffsetTo;
-(BOOL)isCloseTo:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2 ;
@end

