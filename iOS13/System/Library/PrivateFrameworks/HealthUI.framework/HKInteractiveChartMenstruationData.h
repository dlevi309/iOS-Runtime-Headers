/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)date;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)startOfCycle;
-(void)setStartOfCycle:(BOOL)arg1 ;
@end

