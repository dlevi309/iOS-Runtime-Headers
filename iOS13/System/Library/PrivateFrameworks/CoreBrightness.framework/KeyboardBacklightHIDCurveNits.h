/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/KeyboardBacklightHIDCurve.h>

@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level; 
-(void)dealloc;
-(float)level;
-(float)brightness;
-(void)setBrightness:(float)arg1 ;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ;
-(float)maxLevelPercentage;
-(void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(BOOL)arg3 ;
-(float)convertNitsToLevelPercentage:(float)arg1 ;
-(float)maxCapableNits;
-(float)minCapableNits;
@end

