/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateInterval;

@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration {

	unsigned long long _options;
	unsigned long long _mergeStrategy;
	NSDateInterval* _dateInterval;

}

@property (assign,nonatomic) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(unsigned long long)mergeStrategy;
@end

