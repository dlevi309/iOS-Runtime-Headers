/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/


@protocol UIViewAnimating <NSObject>
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
@required
-(void)stopAnimation:(BOOL)arg1;
-(void)setFractionComplete:(double)arg1;
-(void)setReversed:(BOOL)arg1;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)finishAnimationAtPosition:(long long)arg1;
-(BOOL)isReversed;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1;
-(BOOL)isRunning;
-(long long)state;

@end

