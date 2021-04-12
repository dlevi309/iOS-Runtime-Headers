/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopAnimation:(BOOL)arg1 ;
-(void)setFractionComplete:(double)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(BOOL)isReversed;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(id)init;
-(BOOL)isRunning;
-(long long)state;
@end

