/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@interface CNObservedResult : NSObject {

	unsigned long long _time;
	id _value;
	unsigned long long _tolerance;
	unsigned long long _logTime;

}

@property (readonly) unsigned long long logTime;                //@synthesize logTime=_logTime - In the implementation block
@property (readonly) id logValue; 
@property (readonly) BOOL isResultEvent; 
@property (readonly) unsigned long long time;                   //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long tolerance;              //@synthesize tolerance=_tolerance - In the implementation block
@property (readonly) id value;                                  //@synthesize value=_value - In the implementation block
+(id)resultWithTime:(unsigned long long)arg1 value:(id)arg2 ;
+(id)completionResultWithTime:(unsigned long long)arg1 ;
+(id)failureWithError:(id)arg1 time:(unsigned long long)arg2 ;
+(id)resultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 value:(id)arg3 ;
+(id)completionResultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(id)failureWithError:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3 ;
+(NSRange)rangeWithExactTime:(unsigned long long)arg1 ;
+(NSRange)rangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(BOOL)rangeWouldUnderflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(NSRange)underflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(BOOL)rangeWouldOverflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(NSRange)overflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 ;
+(id)resultWithTimeInterval:(double)arg1 tolerance:(double)arg2 value:(id)arg3 ;
+(id)completionResultWithTimeInterval:(double)arg1 tolerance:(double)arg2 ;
+(id)failureWithError:(id)arg1 timeInterval:(double)arg2 tolerance:(double)arg3 ;
-(unsigned long long)time;
-(unsigned long long)tolerance;
-(unsigned long long)logTime;
-(NSRange)timeRange;
-(id)logValue;
-(id)description;
-(id)initWithValue:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3 ;
-(id)formattedTimeString;
-(BOOL)isResultEvent;
-(unsigned long long)hash;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

