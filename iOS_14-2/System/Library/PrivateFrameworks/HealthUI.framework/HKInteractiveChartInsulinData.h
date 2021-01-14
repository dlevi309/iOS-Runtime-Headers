/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData> {

	double _basalValue;
	double _totalValue;

}

@property (assign,nonatomic) double basalValue;                     //@synthesize basalValue=_basalValue - In the implementation block
@property (nonatomic,readonly) double bolusValue; 
@property (assign,nonatomic) double totalValue;                     //@synthesize totalValue=_totalValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBasalValue:(double)arg1 ;
-(void)setTotalValue:(double)arg1 ;
-(double)basalValue;
-(double)bolusValue;
-(double)totalValue;
@end

