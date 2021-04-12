/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)repeatCount;
-(double)repeatDuration;
-(void)setSpeed:(float)arg1;
-(void)setDuration:(double)arg1;
-(double)beginTime;
-(void)setRepeatDuration:(double)arg1;
-(double)timeOffset;
-(NSString *)fillMode;
-(void)setFillMode:(id)arg1;
-(float)speed;
-(void)setBeginTime:(double)arg1;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(BOOL)arg1;
-(BOOL)autoreverses;
-(void)setTimeOffset:(double)arg1;
-(double)duration;

@end

