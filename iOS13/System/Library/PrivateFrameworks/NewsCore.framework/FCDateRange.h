/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSDate * earlierDate; 
@property (nonatomic,readonly) NSDate * laterDate; 
@property (nonatomic,readonly) BOOL isFinite; 
@property (nonatomic,readonly) BOOL isFromInfinity; 
@property (nonatomic,readonly) BOOL isToInfinity; 
@property (nonatomic,readonly) double timeInterval; 
@property (nonatomic,readonly) double absoluteTimeInterval; 
@property (nonatomic,readonly) unsigned long long minMillisecondsTimeIntervalSince1970; 
@property (nonatomic,readonly) unsigned long long maxMillisecondsTimeIntervalSince1970; 
+(BOOL)supportsSecureCoding;
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)isFinite;
-(BOOL)isToInfinity;
-(BOOL)isFromInfinity;
-(NSDate *)laterDate;
-(double)absoluteTimeInterval;
-(id)intersectionWithDateRange:(id)arg1 ;
-(BOOL)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2 ;
-(BOOL)startsLaterThanDateRange:(id)arg1 ;
-(id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
-(NSDate *)earlierDate;
-(id)initWithStartDate:(id)arg1 timeInterval:(double)arg2 ;
-(unsigned long long)minMillisecondsTimeIntervalSince1970;
-(unsigned long long)maxMillisecondsTimeIntervalSince1970;
-(id)slicesWithTimeInterval:(double)arg1 ;
-(id)sliceForDate:(id)arg1 withInterval:(double)arg2 ;
-(long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2 ;
@end

