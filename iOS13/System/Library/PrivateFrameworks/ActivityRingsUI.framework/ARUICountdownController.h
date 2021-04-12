/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRingGroupController.h>

@interface ARUICountdownController : ARUIRingGroupController {

	unsigned long long _countdownOrigin;

}

@property (assign,nonatomic) unsigned long long countdownOrigin;              //@synthesize countdownOrigin=_countdownOrigin - In the implementation block
@property (assign,nonatomic) double countdownPercent; 
+(id)animationTimingFunction;
-(id)init;
-(void)setCountdownPercent:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTrackOpacity:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCountdownOrigin:(unsigned long long)arg1 ;
-(void)setCountdownPercent:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRingDiameter:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRingThickness:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCountdownOrigin:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_zRotationFromCountdownOrigin:(unsigned long long)arg1 ;
-(void)setFloatValue:(double)arg1 forRingGroupPropertyType:(unsigned long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(double)countdownPercent;
-(void)setTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(void)setCountdownPercent:(double)arg1 ;
-(void)setCountdownPercent:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)countdownOrigin;
@end

