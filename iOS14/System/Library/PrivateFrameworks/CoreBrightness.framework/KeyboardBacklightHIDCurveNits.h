/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/KeyboardBacklightHIDCurve.h>

@interface KeyboardBacklightHIDCurveNits : KeyboardBacklightHIDCurve

@property (readonly) float level; 
-(float)brightness;
-(float)level;
-(void)setBrightness:(float)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 device:(id)arg2 ;
-(float)maxLevelPercentage;
-(void)setBrightness:(float)arg1 withFadeSpeed:(int)arg2 commit:(BOOL)arg3 ;
-(float)convertNitsToLevelPercentage:(float)arg1 ;
-(float)maxCapableNits;
-(float)minCapableNits;
@end

