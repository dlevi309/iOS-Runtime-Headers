/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <CoreFoundation/NSDate.h>

@interface CLKDate : NSDate
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)date;
+(double)timeIntervalSinceReferenceDate;
+(id)complicationDate;
+(id)unmodifiedDate;
+(id)complicationDateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)init;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeIntervalSinceNow;
@end

