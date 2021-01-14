/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBViewControllerAnimatedTransitioning.h>

@class NSMutableArray, UIViewPropertyAnimator, NSString;

@interface SBUIAnimationPropertyAnimator : NSObject <SBViewControllerAnimatedTransitioning> {

	NSMutableArray* _completionBlocks;
	BOOL _wasStarted;
	unsigned long long _reverseCount;
	UIViewPropertyAnimator* _propertyAnimator;
	double _duration;
	/*^block*/id _generator;

}

@property (nonatomic,copy,readonly) id generator;                                      //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,readonly) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL isReversed; 
@property (nonatomic,readonly) BOOL wasReversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)isReversed;
-(double)transitionDuration:(id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(double)duration;
-(id)generator;
-(id)initWithPropertyAnimatorGenerator:(/*^block*/id)arg1 ;
-(void)reverseAnimation;
-(void)_executeGenerator:(id)arg1 ;
-(void)prepareToRunAnimation:(id)arg1 ;
-(id)initWithPropertyAnimator:(id)arg1 duration:(double)arg2 ;
-(BOOL)wasReversed;
@end

