/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKAxisLabelDataSource <NSObject>
@optional
-(id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;

@required
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
-(CGPoint*)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7;

@end

