/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKLineSeries.h>

@interface _HKAudioVisibleRangeOverlaySeries : HKLineSeries
-(long long)overlayType;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(void)drawOverlayInContext:(CGContextRef)arg1 seriesOverlayData:(id)arg2 ;
-(id)_leqDataFromBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 screenRect:(CGRect)arg3 ;
@end

