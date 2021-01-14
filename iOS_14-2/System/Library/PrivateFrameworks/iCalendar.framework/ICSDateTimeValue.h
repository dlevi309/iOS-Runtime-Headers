/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSDateValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding> {

	long long _hour;
	long long _minute;
	long long _second;

}

@property (readonly) long long hour;                //@synthesize hour=_hour - In the implementation block
@property (readonly) long long minute;              //@synthesize minute=_minute - In the implementation block
@property (readonly) long long second;              //@synthesize second=_second - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)hour;
-(long long)second;
-(long long)minute;
-(void)encodeWithCoder:(id)arg1 ;
-(id)components;
-(int)dateType;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

