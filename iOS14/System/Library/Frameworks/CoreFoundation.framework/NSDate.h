/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate; 
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)now;
+(id)dateWithString:(id)arg1 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)distantFuture;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)distantPast;
+(id)date;
+(double)timeIntervalSinceReferenceDate;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_web_isToday;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(long long)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg1 ;
-(double)bucketToRoundingFactor:(unsigned)arg1 ;
-(double)timeIntervalSince1970WithBucket:(unsigned)arg1 ;
-(BOOL)isInToday;
-(BOOL)isNSDate__;
-(BOOL)isInTomorrow;
-(BOOL)isEqualToDate:(id)arg1 ;
-(BOOL)isInYesterday;
-(id)addTimeInterval:(double)arg1 ;
-(BOOL)isInSameDayAsDate:(id)arg1 ;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)laterDate:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(double)timeIntervalSince1970;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(double)timeIntervalSinceReferenceDate;
-(double)timeIntervalSinceNow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

