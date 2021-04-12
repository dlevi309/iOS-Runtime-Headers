/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(id)initWithWeekday:(long long)arg1 number:(id)arg2 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithWeekday:(long long)arg1 ;
@end

