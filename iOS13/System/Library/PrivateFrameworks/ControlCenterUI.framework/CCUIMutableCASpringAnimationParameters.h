/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUICASpringAnimationParameters.h>

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (nonatomic,copy) id<CCUIAnimationTimingFunctionDescription> timingFunction; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setTimingFunction:(id<CCUIAnimationTimingFunctionDescription>)arg1 ;
@end

