/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@interface NTKSiderealHandsView : NTKAnalogHandsView
-(void)layoutSubviews;
-(id)initForDevice:(id)arg1 ;
-(void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5 ;
-(void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(double)_minuteHandDotDiameter;
@end

