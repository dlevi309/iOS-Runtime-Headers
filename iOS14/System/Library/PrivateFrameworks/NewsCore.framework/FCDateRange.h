/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(long long)compare:(id)arg1 ;
-(BOOL)isToInfinity;
-(BOOL)startsLaterThanDateRange:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(id)init;
-(id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(id)initWithStartDate:(id)arg1 timeInterval:(double)arg2 ;
-(id)slicesWithTimeInterval:(double)arg1 ;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)earlierDate;
-(id)sliceForDate:(id)arg1 withInterval:(double)arg2 ;
-(id)intersectionWithDateRange:(id)arg1 ;
-(id)timestampDescription;
-(long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2 ;
-(id)description;
-(double)absoluteTimeInterval;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFinite;
-(BOOL)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2 ;
-(BOOL)isFromInfinity;
-(unsigned long long)maxMillisecondsTimeIntervalSince1970;
-(NSDate *)laterDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)minMillisecondsTimeIntervalSince1970;
@end

