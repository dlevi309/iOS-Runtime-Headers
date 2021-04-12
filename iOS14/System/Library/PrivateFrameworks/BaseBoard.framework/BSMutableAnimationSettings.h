/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSAnimationSettings.h>
#import <libobjc.A.dylib/BSAnimationSettingsMutating.h>

@class CAMediaTimingFunction, NSString;

@interface BSMutableAnimationSettings : BSAnimationSettings <BSAnimationSettingsMutating>

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpeed:(float)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
@end

