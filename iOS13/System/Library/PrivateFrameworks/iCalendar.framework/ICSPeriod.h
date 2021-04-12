/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSSecureCoding> {

	ICSDateValue* _start;
	ICSDateValue* _end;
	ICSDuration* _duration;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)start;
-(id)duration;
-(id)end;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(BOOL)isDurationBased;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithStart:(id)arg1 duration:(id)arg2 ;
-(id)initWithStart:(id)arg1 ;
@end

