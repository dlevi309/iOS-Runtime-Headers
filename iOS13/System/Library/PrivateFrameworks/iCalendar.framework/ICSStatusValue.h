/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

