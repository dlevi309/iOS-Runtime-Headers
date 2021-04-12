/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


#import <CalendarUIKit/CalendarUIKit-Structs.h>
@interface CUIKIconSizeMetricFactory : NSObject
+(BOOL)_interpolationRequired:(double)arg1 ;
+(id)_sizeMetricsForSideLength:(double)arg1 returnLowerBound:(BOOL)arg2 ;
+(id)_interpolatedSizeMetricsWithUpperBound:(id)arg1 lowerBound:(id)arg2 sideLength:(double)arg3 ;
+(id)heroSizeMetricsLargeToSmall;
+(double)extrapolatedYValueWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 xValue:(double)arg3 ;
+(double)scaledValueWithUpperBound:(double)arg1 lowerBound:(double)arg2 scaleFactor:(double)arg3 ;
+(id)sizeMetricsForIconSize:(CGSize)arg1 ;
@end

