/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(HKDevice *)device;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
@end

