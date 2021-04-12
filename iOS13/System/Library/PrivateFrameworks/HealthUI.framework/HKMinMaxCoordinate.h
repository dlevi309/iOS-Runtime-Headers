/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSString;

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _min;
	CGPoint _max;

}

@property (nonatomic,readonly) CGPoint min;                                                //@synthesize min=_min - In the implementation block
@property (nonatomic,readonly) CGPoint max;                                                //@synthesize max=_max - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo; 
-(NSString *)description;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(CGPoint)max;
-(CGPoint)min;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 ;
-(BOOL)isVisibleInChartRect:(CGRect)arg1 ;
-(id)initWithMin:(CGPoint)arg1 max:(CGPoint)arg2 userInfo:(id)arg3 ;
@end

