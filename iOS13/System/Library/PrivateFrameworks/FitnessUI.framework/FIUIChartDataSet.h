/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@protocol FIUIChartDataSetDataSource;
@class NSArray;

@interface FIUIChartDataSet : NSObject {

	NSArray* _points;
	NSArray* _labels;
	id<FIUIChartDataSetDataSource> _dataSource;
	long long _tag;

}

@property (assign,nonatomic,__weak) id<FIUIChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long tag;                                                 //@synthesize tag=_tag - In the implementation block
-(id)description;
-(long long)tag;
-(id<FIUIChartDataSetDataSource>)dataSource;
-(void)setDataSource:(id<FIUIChartDataSetDataSource>)arg1 ;
-(id)points;
-(void)reloadData;
-(void)setTag:(long long)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)maxXValue;
-(id)minXValue;
-(id)labelsForSet;
@end

