/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, HKQuantity, NSArray;

@interface _HKQuantityDistributionData : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _minimumBucketValue;
	HKQuantity* _minimumValue;
	HKQuantity* _maximumValue;
	HKQuantity* _averageValue;
	HKQuantity* _duration;
	NSArray* _histogramCounts;

}

@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) HKQuantity * minimumBucketValue;              //@synthesize minimumBucketValue=_minimumBucketValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * averageValue;                    //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * histogramCounts;                    //@synthesize histogramCounts=_histogramCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(HKQuantity *)duration;
-(HKQuantity *)minimumValue;
-(HKQuantity *)maximumValue;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8 ;
-(HKQuantity *)minimumBucketValue;
-(HKQuantity *)averageValue;
-(NSArray *)histogramCounts;
@end

