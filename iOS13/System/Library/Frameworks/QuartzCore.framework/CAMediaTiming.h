/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) BOOL autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(float)speed;
-(void)setSpeed:(float)arg1;
-(double)beginTime;
-(void)setBeginTime:(double)arg1;
-(void)setFillMode:(id)arg1;
-(void)setTimeOffset:(double)arg1;
-(void)setAutoreverses:(BOOL)arg1;
-(void)setRepeatCount:(float)arg1;
-(double)timeOffset;
-(BOOL)autoreverses;
-(float)repeatCount;
-(double)repeatDuration;
-(NSString *)fillMode;
-(void)setRepeatDuration:(double)arg1;

@end

