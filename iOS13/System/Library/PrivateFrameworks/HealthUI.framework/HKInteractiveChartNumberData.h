/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)value;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setValue:(NSNumber *)arg1 ;
@end

