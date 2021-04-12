/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(id)_dictionaryRepresentation;
-(id)bucketAtIndex:(long long)arg1 ;
-(NSUUID *)sessionUUID;
-(id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(BOOL)arg2 ;
-(long long)numberOfReadings;
-(NSArray *)highlightedReadings;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3 ;
-(void)_setHighlightedReadings:(id)arg1 ;
-(void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2 ;
-(void)enumerateBucketsWithBlock:(/*^block*/id)arg1 ;
-(long long)numberOfBuckets;
-(id)_bucketsDescription;
@end

