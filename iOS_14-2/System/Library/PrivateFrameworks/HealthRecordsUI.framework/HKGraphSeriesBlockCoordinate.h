/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol HKGraphSeriesBlockCoordinate <NSObject>
@property (readonly,nonatomic) double startXValue; 
@property (readonly,nonatomic) double endXValue; 
@property (readonly,nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
@required
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;

@end

