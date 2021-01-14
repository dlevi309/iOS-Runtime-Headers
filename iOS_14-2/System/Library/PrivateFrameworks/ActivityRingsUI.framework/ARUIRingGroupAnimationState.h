/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <libobjc.A.dylib/ARUIRingGroupAnimationDelegate.h>

@class CAMediaTimingFunction, NSMutableSet, NSString;

@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate> {

	double _duration;
	CAMediaTimingFunction* _timingFunction;
	/*^block*/id _completion;
	ARUIRingGroupAnimationState* _nextAnimationState;
	NSMutableSet* _trackedAnimations;

}

@property (nonatomic,retain) ARUIRingGroupAnimationState * nextAnimationState;              //@synthesize nextAnimationState=_nextAnimationState - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackedAnimations;                              //@synthesize trackedAnimations=_trackedAnimations - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                        //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)popAnimationState;
+(void)pushAnimationState:(id)arg1 ;
+(id)currentAnimationState;
-(void)setCompletion:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(id)completion;
-(CAMediaTimingFunction *)timingFunction;
-(void)addAnimation:(id)arg1 ;
-(double)duration;
-(void)animationDidComplete:(id)arg1 ;
-(void)setNextAnimationState:(ARUIRingGroupAnimationState *)arg1 ;
-(NSMutableSet *)trackedAnimations;
-(ARUIRingGroupAnimationState *)nextAnimationState;
-(void)setTrackedAnimations:(NSMutableSet *)arg1 ;
@end

