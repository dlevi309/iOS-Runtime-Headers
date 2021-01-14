/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDuration : NSObject <NSSecureCoding> {

	double _duration;

}
+(BOOL)supportsSecureCoding;
+(id)durationFromICSString:(id)arg1 ;
+(id)generateDurationFromICSString:(id)arg1 ;
+(id)durationFromRFC2445UTF8String:(const char*)arg1 ;
-(BOOL)isNegative;
-(long long)days;
-(long long)seconds;
-(long long)minutes;
-(long long)weeks;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(long long)hours;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

