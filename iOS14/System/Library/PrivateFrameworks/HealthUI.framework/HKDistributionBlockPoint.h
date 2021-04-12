/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSArray, NSString;

@interface HKDistributionBlockPoint : NSObject <HKGraphSeriesBlockCoordinate> {

	NSArray* _distributionSegments;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
	CGPoint _minPoint;
	CGPoint _maxPoint;

}

@property (nonatomic,readonly) CGPoint minPoint;                                           //@synthesize minPoint=_minPoint - In the implementation block
@property (nonatomic,readonly) CGPoint maxPoint;                                           //@synthesize maxPoint=_maxPoint - In the implementation block
@property (nonatomic,readonly) NSArray * distributionSegments;                             //@synthesize distributionSegments=_distributionSegments - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)maxPoint;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(NSString *)description;
-(CGPoint)minPoint;
-(double)endXValue;
-(double)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)_quickDate:(id)arg1 ;
-(NSArray *)distributionSegments;
-(id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 gapZeroCount:(long long)arg4 ;
-(id)_segmentsFromChartPoint:(id)arg1 forX:(double)arg2 minY:(double)arg3 maxY:(double)arg4 zeroCountForGap:(long long)arg5 ;
-(id)_applyTransformToSegments:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(id)initWithTransform:(CGAffineTransform)arg1 blockPoint:(id)arg2 ;
@end

