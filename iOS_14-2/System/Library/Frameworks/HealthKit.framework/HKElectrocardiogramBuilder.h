/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class HKQuantity, NSDate;

@interface HKElectrocardiogramBuilder : NSObject {

	map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::__1::less<binarysample::ElectrocardiogramLead_Name>, std::__1::allocator<std::__1::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead> > >* _leads;
	HKQuantity* _averageHeartRate;
	unsigned long long _classification;
	NSDate* _startDate;
	HKQuantity* _frequency;

}

@property (nonatomic,copy) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) HKQuantity * frequency;              //@synthesize frequency=_frequency - In the implementation block
-(void)setFrequency:(HKQuantity *)arg1 ;
-(HKQuantity *)frequency;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)addValue:(float)arg1 lead:(long long)arg2 ;
-(id)initWithStartDate:(id)arg1 frequency:(id)arg2 ;
-(void)addAverageHeartRate:(id)arg1 ;
-(void)addClassification:(unsigned long long)arg1 ;
-(id)finishWithDevice:(id)arg1 metadata:(id)arg2 ;
@end

