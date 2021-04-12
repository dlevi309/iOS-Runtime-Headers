/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _contextIdentifiers;

}

@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) HKQuantity * minimumBucketValue;              //@synthesize minimumBucketValue=_minimumBucketValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * averageValue;                    //@synthesize averageValue=_averageValue - In the implementation block
@property (nonatomic,readonly) HKQuantity * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * histogramCounts;                    //@synthesize histogramCounts=_histogramCounts - In the implementation block
@property (nonatomic,readonly) NSArray * contextIdentifiers;                 //@synthesize contextIdentifiers=_contextIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQuantity *)maximumValue;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8 contextIdentifiers:(id)arg9 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)minimumValue;
-(HKQuantity *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQuantity *)minimumBucketValue;
-(HKQuantity *)averageValue;
-(NSArray *)histogramCounts;
-(NSArray *)contextIdentifiers;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8 ;
@end

