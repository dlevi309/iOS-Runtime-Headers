/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject {

	HKGraphSeries* _graphSeries;
	HKGraphSeriesBlockCoordinateList* _graphSeriesCoordinates;
	CGRect _graphSeriesScreenRect;
	CGAffineTransform _graphSeriesPointTransform;

}

@property (nonatomic,readonly) HKGraphSeries * graphSeries;                                            //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,readonly) CGRect graphSeriesScreenRect;                                           //@synthesize graphSeriesScreenRect=_graphSeriesScreenRect - In the implementation block
@property (nonatomic,readonly) HKGraphSeriesBlockCoordinateList * graphSeriesCoordinates;              //@synthesize graphSeriesCoordinates=_graphSeriesCoordinates - In the implementation block
@property (nonatomic,readonly) CGAffineTransform graphSeriesPointTransform;                            //@synthesize graphSeriesPointTransform=_graphSeriesPointTransform - In the implementation block
-(HKGraphSeries *)graphSeries;
-(id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(CGRect)arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(CGAffineTransform)arg4 ;
-(CGRect)graphSeriesScreenRect;
-(HKGraphSeriesBlockCoordinateList *)graphSeriesCoordinates;
-(CGAffineTransform)graphSeriesPointTransform;
@end

