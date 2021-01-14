/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKLineSeries.h>

@interface _HKAudioVisibleRangeOverlaySeries : HKLineSeries
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(long long)overlayType;
-(void)drawOverlayInContext:(CGContextRef)arg1 seriesOverlayData:(id)arg2 ;
-(id)_leqDataFromBlockCoordinates:(id)arg1 pointTransform:(CGAffineTransform)arg2 screenRect:(CGRect)arg3 ;
@end

