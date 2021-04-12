/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/


@protocol UIViewAnimating <NSObject>
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
@required
-(long long)state;
-(BOOL)isRunning;
-(void)stopAnimation:(BOOL)arg1;
-(void)finishAnimationAtPosition:(long long)arg1;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1;
-(BOOL)isReversed;
-(void)setReversed:(BOOL)arg1;

@end

