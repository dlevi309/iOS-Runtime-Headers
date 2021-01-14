/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSDate, HKDevice;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration {

	HKQuantityType* _quantityType;
	NSDate* _startDate;
	HKDevice* _device;

}

@property (nonatomic,copy) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) HKDevice * device;                          //@synthesize device=_device - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
-(HKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

