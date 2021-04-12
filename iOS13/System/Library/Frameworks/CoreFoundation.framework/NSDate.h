/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate; 
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(double)timeIntervalSinceReferenceDate;
+(id)distantFuture;
+(id)distantPast;
+(id)now;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(long long)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(BOOL)_web_isToday;
-(double)bucketToRoundingFactor:(unsigned)arg1 ;
-(double)timeIntervalSince1970WithBucket:(unsigned)arg1 ;
-(BOOL)isNSDate__;
-(double)timeIntervalSince1970;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(double)timeIntervalSinceReferenceDate;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(BOOL)isEqualToDate:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)laterDate:(id)arg1 ;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(id)initWithDate:(id)arg1 ;
-(id)addTimeInterval:(double)arg1 ;
-(BOOL)isInToday;
-(BOOL)isInTomorrow;
-(BOOL)isInYesterday;
-(BOOL)isInSameDayAsDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
@end

