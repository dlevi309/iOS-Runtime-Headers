/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)end;
-(id)start;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDurationBased;
-(id)duration;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithStart:(id)arg1 duration:(id)arg2 ;
-(id)initWithStart:(id)arg1 ;
@end

