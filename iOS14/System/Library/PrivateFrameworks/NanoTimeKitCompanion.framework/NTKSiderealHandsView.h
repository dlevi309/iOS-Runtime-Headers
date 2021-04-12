/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@interface NTKSiderealHandsView : NTKAnalogHandsView
-(void)layoutSubviews;
-(id)createHourHandView;
-(id)createMinuteHandView;
-(id)createSecondHandView;
-(void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5 ;
-(void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(double)_minuteHandDotDiameter;
@end

