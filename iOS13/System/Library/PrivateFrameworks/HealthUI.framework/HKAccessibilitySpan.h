/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, NSNumber;

@interface HKAccessibilitySpan : NSObject {

	NSString* _dataSeriesTitle;
	long long _dataSeriesType;
	NSNumber* _dataComprehensionMinYValue;
	NSNumber* _dataComprehensionMaxYValue;
	NSString* _dataComprehensionUnitForChart;

}

@property (nonatomic,readonly) NSString * dataSeriesTitle;                            //@synthesize dataSeriesTitle=_dataSeriesTitle - In the implementation block
@property (nonatomic,readonly) long long dataSeriesType;                              //@synthesize dataSeriesType=_dataSeriesType - In the implementation block
@property (nonatomic,readonly) NSNumber * dataComprehensionMinYValue;                 //@synthesize dataComprehensionMinYValue=_dataComprehensionMinYValue - In the implementation block
@property (nonatomic,readonly) NSNumber * dataComprehensionMaxYValue;                 //@synthesize dataComprehensionMaxYValue=_dataComprehensionMaxYValue - In the implementation block
@property (nonatomic,readonly) NSString * dataComprehensionUnitForChart;              //@synthesize dataComprehensionUnitForChart=_dataComprehensionUnitForChart - In the implementation block
-(id)description;
-(id)initWithTitle:(id)arg1 seriesType:(long long)arg2 dataComprehensionMinYValue:(id)arg3 dataComprehensionMaxYValue:(id)arg4 dataComprehensionUnitForChart:(id)arg5 ;
-(NSString *)dataSeriesTitle;
-(long long)dataSeriesType;
-(NSNumber *)dataComprehensionMinYValue;
-(NSNumber *)dataComprehensionMaxYValue;
-(NSString *)dataComprehensionUnitForChart;
@end

