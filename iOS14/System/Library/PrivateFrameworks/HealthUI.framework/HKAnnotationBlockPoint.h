/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface HKAnnotationBlockPoint : NSObject <HKGraphSeriesBlockCoordinate> {

	long long _pointType;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _point;

}

@property (nonatomic,readonly) CGPoint point;                                              //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) long long pointType;                                        //@synthesize pointType=_pointType - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)point;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(long long)pointType;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithTransform:(CGAffineTransform)arg1 blockPoint:(id)arg2 ;
-(id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 ;
@end

