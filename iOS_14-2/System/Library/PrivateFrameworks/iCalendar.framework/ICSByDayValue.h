/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ICSByDayValue : NSObject <NSSecureCoding> {

	NSNumber* _number;
	long long _weekday;

}

@property (assign,nonatomic) long long weekday;              //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,retain) NSNumber * number; 
+(BOOL)supportsSecureCoding;
+(long long)weekdayFromICSString:(id)arg1 ;
+(id)byDayValueFromICSString:(id)arg1 ;
-(void)setNumber:(NSNumber *)arg1 ;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSNumber *)number;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithWeekday:(long long)arg1 number:(id)arg2 ;
-(id)initWithWeekday:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

