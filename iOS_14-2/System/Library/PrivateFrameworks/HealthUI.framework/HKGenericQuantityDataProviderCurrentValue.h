/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataProviderValue.h>

@class HKQuantity, NSDate, NSString;

@interface HKGenericQuantityDataProviderCurrentValue : NSObject <HKDataProviderValue> {

	HKQuantity* _quantity;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5 ;
-(id)initWithQuantity:(id)arg1 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg1 ;
-(id)stringWithDisplayType:(id)arg1 unitController:(id)arg2 ;
@end

