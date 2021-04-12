/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property (readonly,nonatomic) double startXValue; 
@property (readonly,nonatomic) double endXValue; 
@property (readonly,nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
@required
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;

@end

