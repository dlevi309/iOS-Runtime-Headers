/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

@class CAMediaTimingFunction;


@protocol BSAnimationSettingsMutating <NSObject>
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double frameInterval; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
@property (assign,nonatomic) float speed; 
@required
-(void)setSpeed:(float)arg1;
-(float)speed;
-(void)setTimingFunction:(id)arg1;
-(void)setDelay:(double)arg1;
-(CAMediaTimingFunction *)timingFunction;
-(void)setFrameInterval:(double)arg1;
-(double)frameInterval;
-(double)delay;

@end

