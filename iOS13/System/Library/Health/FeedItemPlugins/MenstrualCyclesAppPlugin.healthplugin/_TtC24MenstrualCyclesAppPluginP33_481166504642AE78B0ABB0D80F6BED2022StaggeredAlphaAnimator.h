/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKit/UIViewAnimating.h>

@interface _TtC24MenstrualCyclesAppPluginP33_481166504642AE78B0ABB0D80F6BED2022StaggeredAlphaAnimator : NSObject <UIViewAnimating> {

	 backgroundAnimator;
	 foregroundAnimator;

}

@property (readonly,nonatomic) long long state; 
@property (readonly,nonatomic) BOOL running; 
@property (assign,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
-(long long)state;
-(BOOL)isRunning;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1 ;
-(BOOL)isReversed;
-(void)setReversed:(BOOL)arg1 ;
-(id)init;
@end

