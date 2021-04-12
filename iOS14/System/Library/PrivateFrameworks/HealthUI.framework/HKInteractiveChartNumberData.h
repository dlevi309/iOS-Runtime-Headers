/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSNumber, NSNumberFormatter, NSString;

@interface HKInteractiveChartNumberData : NSObject <HKGraphSeriesChartData> {

	NSNumber* _value;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) NSNumber * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
@end

