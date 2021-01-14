/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(id<FIUIChartDataSetDataSource>)dataSource;
-(id)description;
-(void)setDataSource:(id<FIUIChartDataSetDataSource>)arg1 ;
-(void)reloadData;
-(id)points;
-(id)minYValue;
-(id)maxYValue;
-(id)maxXValue;
-(id)minXValue;
-(id)labelsForSet;
@end

