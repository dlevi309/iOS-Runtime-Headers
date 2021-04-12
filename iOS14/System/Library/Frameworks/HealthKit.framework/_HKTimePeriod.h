/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_HKDateBounded.h>

@class NSDate, NSString;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying, _HKDateBounded> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(BOOL)containsDate:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(BOOL)endsBeforeDate:(id)arg1 ;
-(BOOL)startsAfterDate:(id)arg1 ;
-(BOOL)containsTimePeriod:(id)arg1 ;
-(BOOL)overlapsTimePeriod:(id)arg1 ;
-(long long)compareByStartDate:(id)arg1 ;
-(long long)compareByEndDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

