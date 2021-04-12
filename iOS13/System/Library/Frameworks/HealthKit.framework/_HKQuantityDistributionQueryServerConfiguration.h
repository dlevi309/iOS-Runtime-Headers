/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents, HKQuantity;

@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _contextStyle;
	NSDate* _anchorDate;
	NSDateComponents* _intervalComponents;
	HKQuantity* _histogramAnchor;
	HKQuantity* _histogramBucketSize;
	unsigned long long _options;

}

@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long contextStyle;                           //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,copy) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (nonatomic,copy) HKQuantity * histogramAnchor;                       //@synthesize histogramAnchor=_histogramAnchor - In the implementation block
@property (nonatomic,copy) HKQuantity * histogramBucketSize;                   //@synthesize histogramBucketSize=_histogramBucketSize - In the implementation block
@property (assign,nonatomic) unsigned long long options;                       //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setContextStyle:(long long)arg1 ;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(void)setHistogramAnchor:(HKQuantity *)arg1 ;
-(void)setHistogramBucketSize:(HKQuantity *)arg1 ;
-(long long)contextStyle;
-(NSDate *)anchorDate;
-(NSDateComponents *)intervalComponents;
-(HKQuantity *)histogramAnchor;
-(HKQuantity *)histogramBucketSize;
@end

