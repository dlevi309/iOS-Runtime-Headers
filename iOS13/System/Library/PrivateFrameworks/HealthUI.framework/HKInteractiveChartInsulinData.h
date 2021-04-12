/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)basalValue;
-(double)bolusValue;
-(void)setBasalValue:(double)arg1 ;
-(double)totalValue;
-(void)setTotalValue:(double)arg1 ;
@end

