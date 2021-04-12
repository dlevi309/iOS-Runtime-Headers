/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,copy) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (assign,nonatomic) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                 //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(unsigned long long)mergeStrategy;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
@end

