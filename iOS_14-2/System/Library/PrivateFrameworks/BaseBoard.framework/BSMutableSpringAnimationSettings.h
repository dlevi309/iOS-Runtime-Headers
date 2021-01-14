/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSSpringAnimationSettings.h>
#import <libobjc.A.dylib/BSAnimationSettingsMutating.h>

@class CAMediaTimingFunction, NSString;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings <BSAnimationSettingsMutating>

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double epsilon; 
@property (assign,nonatomic) double initialVelocity; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEpsilon:(double)arg1 ;
-(void)setSpeed:(float)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setInitialVelocity:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
@end

