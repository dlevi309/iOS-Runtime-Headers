/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addValue:(id)arg1 ;
-(NSNumber *)maximumValue;
-(id)init;
-(NSArray *)values;
-(unsigned long long)count;
-(NSArray *)sortedValues;
-(id)initWithValues:(id)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)sumValue;
-(NSNumber *)averageValue;
@end

