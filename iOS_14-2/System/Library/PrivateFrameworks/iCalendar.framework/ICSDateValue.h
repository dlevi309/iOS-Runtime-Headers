/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDateValue : NSObject <NSSecureCoding> {

	long long _year;
	long long _month;
	long long _day;

}

@property (readonly) long long year;               //@synthesize year=_year - In the implementation block
@property (readonly) long long month;              //@synthesize month=_month - In the implementation block
@property (readonly) long long day;                //@synthesize day=_day - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateFromICSString:(id)arg1 ;
+(id)dateFromICSUTF8String:(const char*)arg1 ;
-(long long)day;
-(long long)year;
-(long long)month;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)components;
-(id)description;
-(int)dateType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)icsString;
@end

