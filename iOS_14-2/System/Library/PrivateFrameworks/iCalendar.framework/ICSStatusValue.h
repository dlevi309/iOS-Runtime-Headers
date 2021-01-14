/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue {

	NSString* _statusString;

}

@property (retain) NSString * statusString;              //@synthesize statusString=_statusString - In the implementation block
+(id)statusValueFromICSString:(id)arg1 ;
+(id)statusTypeFromCode:(int)arg1 statusString:(id)arg2 ;
+(id)statusTypeFromCode:(int)arg1 ;
-(Class)classForCoder;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
@end

