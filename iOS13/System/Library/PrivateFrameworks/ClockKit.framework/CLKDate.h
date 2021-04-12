/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <CoreFoundation/NSDate.h>

@interface CLKDate : NSDate
+(double)timeIntervalSinceReferenceDate;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)complicationDate;
+(id)unmodifiedDate;
+(id)complicationDateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
@end

