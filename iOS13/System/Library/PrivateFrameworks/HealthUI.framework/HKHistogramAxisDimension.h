/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKAxisLabelDimension.h>

@protocol HKHistogramAxisDimensionDataSource;
@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension> {

	id<HKHistogramAxisDimensionDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKHistogramAxisDimensionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<HKHistogramAxisDimensionDataSource>)dataSource;
-(void)setDataSource:(id<HKHistogramAxisDimensionDataSource>)arg1 ;
-(id)stringForLocation:(id)arg1 ;
-(double)niceStepSizeLargerThan:(double)arg1 ;
-(double)ticksPerStepSize:(double)arg1 ;
-(void)setStepSizeForLabels:(double)arg1 ;
@end

