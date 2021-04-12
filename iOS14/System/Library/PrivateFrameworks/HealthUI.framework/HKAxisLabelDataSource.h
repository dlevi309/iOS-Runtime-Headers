/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKAxisLabelDataSource <NSObject>
@optional
-(id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;

@required
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
-(CGPoint*)renderPositionForLabelLocation:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7;

@end

