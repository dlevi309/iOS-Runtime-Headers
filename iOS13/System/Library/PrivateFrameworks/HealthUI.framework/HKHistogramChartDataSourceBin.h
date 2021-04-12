/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableArray, NSArray, NSNumber;

@interface HKHistogramChartDataSourceBin : NSObject {

	NSMutableArray* _backingValues;

}

@property (nonatomic,copy,readonly) NSArray * values; 
@property (nonatomic,copy,readonly) NSArray * sortedValues; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSNumber * sumValue; 
@property (nonatomic,readonly) NSNumber * averageValue; 
@property (nonatomic,readonly) NSNumber * minimumValue; 
@property (nonatomic,readonly) NSNumber * maximumValue; 
-(id)init;
-(unsigned long long)count;
-(NSArray *)values;
-(id)initWithValues:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)averageValue;
-(NSArray *)sortedValues;
-(NSNumber *)sumValue;
@end

