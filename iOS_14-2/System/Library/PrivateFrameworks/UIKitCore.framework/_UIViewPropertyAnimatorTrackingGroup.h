/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewImplicitlyAnimating.h>

@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {

	NSArray* _trackingAnimators;

}

@property (nonatomic,readonly) NSArray * trackingAnimators;                //@synthesize trackingAnimators=_trackingAnimators - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopAnimation:(BOOL)arg1 ;
-(void)setFractionComplete:(double)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(void)pauseAnimation;
-(double)fractionComplete;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(BOOL)isReversed;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(BOOL)isRunning;
-(long long)state;
-(id)initWithAnimators:(id)arg1 ;
-(NSArray *)trackingAnimators;
@end

