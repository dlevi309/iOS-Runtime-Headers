/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <MobileTimerUI/MTUIAnalogClockView.h>

@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView
+(long long)style;
+(double)secondHandMainLength;
+(double)secondHandOverhangLength;
+(double)faceRadius;
+(double)hourHandWidth;
+(double)secondHandWidth;
+(double)hourHandLength;
+(double)minuteHandWidth;
+(double)minuteHandLength;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(double)overHourHandDotSize;
+(double)overSecondHandDotSize;
+(CGPoint)handRotationalCenterForHand:(long long)arg1 ;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

