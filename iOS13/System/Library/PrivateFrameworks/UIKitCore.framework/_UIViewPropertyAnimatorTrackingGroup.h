/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewImplicitlyAnimating.h>

@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {

	NSArray* _trackingAnimators;

}

@property (nonatomic,readonly) NSArray * trackingAnimators;                //@synthesize trackingAnimators=_trackingAnimators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
-(long long)state;
-(BOOL)isRunning;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(void)startAnimation;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(id)initWithAnimators:(id)arg1 ;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1 ;
-(BOOL)isReversed;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(void)setReversed:(BOOL)arg1 ;
-(NSArray *)trackingAnimators;
@end

