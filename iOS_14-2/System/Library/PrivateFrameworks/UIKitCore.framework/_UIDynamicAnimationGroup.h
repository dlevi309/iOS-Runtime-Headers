/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

	/*^block*/id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;

}

@property (nonatomic,copy) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
-(NSArray *)animations;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)addAnimation:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAnimation:(id)arg1 ;
-(void)_stopAnimation;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

