/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSDate, NSString;

@interface HKInteractiveChartMenstruationData : NSObject <HKGraphSeriesChartData> {

	BOOL _startOfCycle;
	long long _value;
	NSDate* _date;

}

@property (assign,nonatomic) long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL startOfCycle;                     //@synthesize startOfCycle=_startOfCycle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDate:(NSDate *)arg1 ;
-(void)setValue:(long long)arg1 ;
-(NSDate *)date;
-(long long)value;
-(void)setStartOfCycle:(BOOL)arg1 ;
-(BOOL)startOfCycle;
@end

