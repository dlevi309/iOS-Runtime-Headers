/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMZoomControlUtilities : NSObject
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(CGRect)arg3 bottomBarTransparent:(BOOL)arg4 shutterButtonAlignmentRect:(CGRect)arg5 previewViewAlignmentRect:(CGRect)arg6 ;
+(double)_zoomControlRadiusForZoomControl:(id)arg1 layoutSide:(long long)arg2 layoutStyle:(long long)arg3 width:(double)arg4 centerOfZoomControlInContainerBounds:(CGPoint)arg5 marginForZoomDiaFromEdge:(double)arg6 ;
+(void)layoutZoomControl:(id)arg1 layoutSide:(long long)arg2 forLayoutStyle:(long long)arg3 width:(double)arg4 marginForZoomButtonFromEdge:(double)arg5 marginForZoomDialFromEdge:(double)arg6 zoomDialContentMaskingHeight:(double)arg7 centerOfZoomControlInContainerView:(CGPoint)arg8 ;
+(double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3 ;
+(double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(BOOL)arg6 ;
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4 ;
+(double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4 ;
@end

