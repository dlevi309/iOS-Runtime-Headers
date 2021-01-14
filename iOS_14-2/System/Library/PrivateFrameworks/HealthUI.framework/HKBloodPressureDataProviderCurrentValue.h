/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataProviderValue.h>

@class NSDate, HKQuantity, NSString;

@interface HKBloodPressureDataProviderCurrentValue : NSObject <HKDataProviderValue> {

	NSDate* _date;
	HKQuantity* _systolicValue;
	HKQuantity* _diastolicValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)date;
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5 ;
-(id)initWithCorrelation:(id)arg1 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1 ;
-(id)_quantityForType:(id)arg1 correlation:(id)arg2 ;
-(id)initWithSystolicValue:(id)arg1 diastolicValue:(id)arg2 date:(id)arg3 ;
@end

