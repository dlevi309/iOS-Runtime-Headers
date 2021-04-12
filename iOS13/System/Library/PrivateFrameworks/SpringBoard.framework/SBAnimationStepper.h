/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/SBUIAnimationStepping.h>

@class BSAnimationSettings, NSMutableSet, CADisplayLink, NSArray, NSString;

@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping> {

	BSAnimationSettings* _animationSettings;
	NSMutableSet* _views;
	NSMutableSet* _finishedAnimatingViews;
	CADisplayLink* _displayLink;
	/*^block*/id _completion;
	double _percentage;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _finishingForward;
	BOOL _finishingBackward;
	BOOL _animatingToStepPercent;
	double _animatedSteppingTimestamp;
	double _animatedSteppingStartPercent;
	double _animatedSteppingTargetPercent;
	double _finishBackwardTimestamp;
	double _finishBackwardDuration;
	double _finishBackwardPercentage;
	BOOL _adjustsDurationForLongestAnimation;
	double _duration;
	double _finishSpeed;

}

@property (assign,nonatomic) double finishSpeed;                                   //@synthesize finishSpeed=_finishSpeed - In the implementation block
@property (nonatomic,readonly) NSArray * views; 
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL adjustsDurationForLongestAnimation;              //@synthesize adjustsDurationForLongestAnimation=_adjustsDurationForLongestAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)duration;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSArray *)views;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_checkForCompletion;
-(id)initWithAnimationSettings:(id)arg1 ;
-(BOOL)isStepped;
-(void)startSteppingAnimationsInView:(id)arg1 ;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(double)_nextCommitTime;
-(BOOL)adjustsDurationForLongestAnimation;
-(void)_adjustDurationForLongestAnimation;
-(void)_makeSubviewTree:(id)arg1 fromView:(id)arg2 ;
-(void)_displayLinkFiredForBackwardToStart:(id)arg1 ;
-(void)_setStepPercentage:(double)arg1 ;
-(void)_updateAnimationSteppingTarget:(double)arg1 ;
-(void)finishSteppingForwardToEndWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSteppingBackwardToStartWithCompletion:(/*^block*/id)arg1 ;
-(void)setAdjustsDurationForLongestAnimation:(BOOL)arg1 ;
-(double)finishSpeed;
-(void)setFinishSpeed:(double)arg1 ;
@end

