/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSString;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData> {

	long long _value;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setValue:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
@end

