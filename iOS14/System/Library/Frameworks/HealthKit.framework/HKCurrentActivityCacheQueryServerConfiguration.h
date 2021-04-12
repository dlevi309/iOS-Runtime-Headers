/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateComponents;

@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration {

	NSDateComponents* _statisticsIntervalComponents;

}

@property (nonatomic,copy) NSDateComponents * statisticsIntervalComponents;              //@synthesize statisticsIntervalComponents=_statisticsIntervalComponents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatisticsIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsIntervalComponents;
@end

