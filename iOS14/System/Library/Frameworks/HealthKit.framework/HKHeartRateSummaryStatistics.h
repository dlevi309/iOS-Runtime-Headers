/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSDateInterval, NSUUID, NSArray;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {

	NSMutableArray* _sortedBuckets;
	NSDateInterval* _dateInterval;
	long long _numberOfBuckets;
	long long _numberOfReadings;
	NSUUID* _sessionUUID;
	NSArray* _highlightedReadings;

}

@property (setter=_setHighlightedReadings:,nonatomic,retain) NSArray * highlightedReadings;              //@synthesize highlightedReadings=_highlightedReadings - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                                            //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) long long numberOfBuckets;                                                //@synthesize numberOfBuckets=_numberOfBuckets - In the implementation block
@property (nonatomic,readonly) long long numberOfReadings;                                               //@synthesize numberOfReadings=_numberOfReadings - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionUUID;                                                     //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(NSUUID *)sessionUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(long long)numberOfReadings;
-(id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(BOOL)arg2 ;
-(NSArray *)highlightedReadings;
-(void)_setHighlightedReadings:(id)arg1 ;
-(long long)numberOfBuckets;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3 ;
-(void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2 ;
-(void)enumerateBucketsWithBlock:(/*^block*/id)arg1 ;
-(id)_bucketsDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)bucketAtIndex:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

