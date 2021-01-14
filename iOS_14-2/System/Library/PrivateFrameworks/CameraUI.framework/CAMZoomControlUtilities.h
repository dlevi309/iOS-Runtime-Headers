/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMZoomControlUtilities : NSObject
+(BOOL)shouldEmulateTripleCameraZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
+(BOOL)shouldApplyContinuousZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 zoomFactors:(id*)arg4 displayZoomFactors:(id*)arg5 ;
+(void)layoutZoomControl:(id)arg1 layoutSide:(long long)arg2 forLayoutStyle:(long long)arg3 width:(double)arg4 marginForZoomButtonFromEdge:(double)arg5 marginForZoomDialFromEdge:(double)arg6 zoomDialContentMaskingHeight:(double)arg7 centerOfZoomControlInContainerView:(CGPoint)arg8 ;
+(long long)deviceForEmulatingZoomFactor:(double)arg1 fromDevice:(long long)arg2 mode:(long long)arg3 ;
+(double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(BOOL)arg6 ;
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4 ;
+(double)_zoomControlRadiusForZoomControl:(id)arg1 layoutSide:(long long)arg2 layoutStyle:(long long)arg3 width:(double)arg4 centerOfZoomControlInContainerBounds:(CGPoint)arg5 marginForZoomDiaFromEdge:(double)arg6 ;
+(double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3 ;
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(CGRect)arg3 bottomBarTransparent:(BOOL)arg4 shutterButtonAlignmentRect:(CGRect)arg5 previewViewAlignmentRect:(CGRect)arg6 ;
+(double)zoomScaleFromDevice:(long long)arg1 toDevice:(long long)arg2 ;
+(double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4 ;
@end

