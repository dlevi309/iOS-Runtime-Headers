/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKObjectType, NSDate, NSArray, HKQuantity, NSDateInterval, NSDictionary, HKQuantityType;

@interface HKStatistics : NSObject <NSSecureCoding, NSCopying> {

	HKObjectType* _dataType;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _sources;
	unsigned long long _dataCount;
	HKQuantity* _averageQuantity;
	HKQuantity* _minimumQuantity;
	HKQuantity* _maximumQuantity;
	HKQuantity* _mostRecentQuantity;
	NSDateInterval* _mostRecentQuantityDateInterval;
	HKQuantity* _duration;
	NSDictionary* _averageQuantityBySource;
	NSDictionary* _minimumQuantityBySource;
	NSDictionary* _maximumQuantityBySource;
	NSDictionary* _mostRecentQuantityBySource;
	NSDictionary* _mostRecentQuantityDateIntervalBySource;
	NSDictionary* _dataCountBySource;
	NSDictionary* _durationBySource;
	HKQuantity* _sumQuantity;
	NSDictionary* _sumQuantityBySource;
	NSDictionary* _sumQuantityBySourceID;

}

@property (assign,nonatomic) unsigned long long dataCount;                                     //@synthesize dataCount=_dataCount - In the implementation block
@property (nonatomic,copy) HKQuantity * averageQuantity;                                       //@synthesize averageQuantity=_averageQuantity - In the implementation block
@property (nonatomic,copy) HKQuantity * minimumQuantity;                                       //@synthesize minimumQuantity=_minimumQuantity - In the implementation block
@property (nonatomic,copy) HKQuantity * maximumQuantity;                                       //@synthesize maximumQuantity=_maximumQuantity - In the implementation block
@property (nonatomic,copy) HKQuantity * mostRecentQuantity;                                    //@synthesize mostRecentQuantity=_mostRecentQuantity - In the implementation block
@property (nonatomic,copy) NSDateInterval * mostRecentQuantityDateInterval;                    //@synthesize mostRecentQuantityDateInterval=_mostRecentQuantityDateInterval - In the implementation block
@property (nonatomic,copy) HKQuantity * duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSDictionary * averageQuantityBySource;                             //@synthesize averageQuantityBySource=_averageQuantityBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * minimumQuantityBySource;                             //@synthesize minimumQuantityBySource=_minimumQuantityBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * maximumQuantityBySource;                             //@synthesize maximumQuantityBySource=_maximumQuantityBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * mostRecentQuantityBySource;                          //@synthesize mostRecentQuantityBySource=_mostRecentQuantityBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * mostRecentQuantityDateIntervalBySource;              //@synthesize mostRecentQuantityDateIntervalBySource=_mostRecentQuantityDateIntervalBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * dataCountBySource;                                   //@synthesize dataCountBySource=_dataCountBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * durationBySource;                                    //@synthesize durationBySource=_durationBySource - In the implementation block
@property (nonatomic,copy) HKQuantity * sumQuantity;                                           //@synthesize sumQuantity=_sumQuantity - In the implementation block
@property (nonatomic,copy) NSDictionary * sumQuantityBySource;                                 //@synthesize sumQuantityBySource=_sumQuantityBySource - In the implementation block
@property (nonatomic,copy) NSDictionary * sumQuantityBySourceID;                               //@synthesize sumQuantityBySourceID=_sumQuantityBySourceID - In the implementation block
@property (readonly) HKQuantityType * quantityType; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) NSArray * sources; 
+(BOOL)supportsSecureCoding;
+(void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2 ;
-(NSDate *)endDate;
-(void)setDuration:(HKQuantity *)arg1 ;
-(id)init;
-(HKQuantity *)minimumQuantity;
-(NSDateInterval *)mostRecentQuantityDateInterval;
-(NSDate *)startDate;
-(HKQuantity *)maximumQuantity;
-(HKQuantity *)mostRecentQuantity;
-(HKQuantity *)averageQuantity;
-(HKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sources;
-(id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dataCount;
-(id)_initAsCopyOf:(id)arg1 ;
-(void)setDataCount:(unsigned long long)arg1 ;
-(NSDictionary *)averageQuantityBySource;
-(NSDictionary *)minimumQuantityBySource;
-(NSDictionary *)dataCountBySource;
-(NSDictionary *)maximumQuantityBySource;
-(NSDictionary *)mostRecentQuantityBySource;
-(NSDictionary *)mostRecentQuantityDateIntervalBySource;
-(NSDictionary *)sumQuantityBySource;
-(NSDictionary *)durationBySource;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(void)setMinimumQuantity:(HKQuantity *)arg1 ;
-(void)setMaximumQuantity:(HKQuantity *)arg1 ;
-(void)setMostRecentQuantity:(HKQuantity *)arg1 ;
-(void)setMostRecentQuantityDateInterval:(NSDateInterval *)arg1 ;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(void)setAverageQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMinimumQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMaximumQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMostRecentQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMostRecentQuantityDateIntervalBySource:(NSDictionary *)arg1 ;
-(void)setSumQuantityBySource:(NSDictionary *)arg1 ;
-(void)setDataCountBySource:(NSDictionary *)arg1 ;
-(void)setDurationBySource:(NSDictionary *)arg1 ;
-(id)averageQuantityForSource:(id)arg1 ;
-(void)_setSources:(id)arg1 ;
-(id)minimumQuantityForSource:(id)arg1 ;
-(id)maximumQuantityForSource:(id)arg1 ;
-(id)mostRecentQuantityForSource:(id)arg1 ;
-(id)sumQuantityForSource:(id)arg1 ;
-(id)mostRecentQuantityDateIntervalForSource:(id)arg1 ;
-(id)durationForSource:(id)arg1 ;
-(id)_copyOverwritingObjectType:(id)arg1 ;
-(NSDictionary *)sumQuantityBySourceID;
-(void)setSumQuantityBySourceID:(NSDictionary *)arg1 ;
-(HKQuantity *)duration;
-(HKQuantity *)sumQuantity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

