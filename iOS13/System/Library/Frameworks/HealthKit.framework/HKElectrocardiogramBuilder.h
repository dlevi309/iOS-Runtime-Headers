/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSDate, HKQuantity;

@interface HKElectrocardiogramBuilder : NSObject {

	map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::__1::less<binarysample::ElectrocardiogramLead_Name>, std::__1::allocator<std::__1::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead> > >* _leads;
	NSDate* _startDate;
	HKQuantity* _frequency;

}

@property (nonatomic,retain) NSDate * startDate;                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) HKQuantity * frequency;              //@synthesize frequency=_frequency - In the implementation block
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantity *)frequency;
-(void)setFrequency:(HKQuantity *)arg1 ;
-(id)initWithStartDate:(id)arg1 frequency:(id)arg2 ;
-(void)addValue:(float)arg1 lead:(unsigned long long)arg2 ;
-(id)finishWithDevice:(id)arg1 metadata:(id)arg2 ;
@end

