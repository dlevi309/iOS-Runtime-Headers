/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIAnimatablePropertyBase.h>

@protocol OS_dispatch_queue, UIVectorOperatable, UIViewAnimationComposing;
@class _UIViewAnimatablePropertyTransformer, NSObject, UIViewRunningAnimationEntry, UIViewInProcessAnimationState;

@interface UIAnimatableProperty : UIAnimatablePropertyBase {

	_UIViewAnimatablePropertyTransformer* _transformer;
	NSObject*<OS_dispatch_queue> _animationEntryLockingQueue;
	NSObject*<OS_dispatch_queue> _invalidationLockingQueue;
	UIViewRunningAnimationEntry* _animationEntry;
	id<UIVectorOperatable> _pendingTargetVelocity;
	id<UIVectorOperatable> _pendingVelocity;
	BOOL _invalidated;
	int _ownershipCount;
	id _value;
	id _presentationValue;
	id<UIViewAnimationComposing> _composer;
	UIViewInProcessAnimationState* _animationState;
	/*^block*/id _invalidationCallback;

}

@property (nonatomic,retain) id<UIViewAnimationComposing> composer;                              //@synthesize composer=_composer - In the implementation block
@property (nonatomic,retain) UIViewRunningAnimationEntry * animationEntry; 
@property (assign,nonatomic,__weak) UIViewInProcessAnimationState * animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (assign,nonatomic) int ownershipCount;                                                 //@synthesize ownershipCount=_ownershipCount - In the implementation block
@property (nonatomic,copy) id invalidationCallback;                                              //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (retain) id presentationValue;                                                         //@synthesize presentationValue=_presentationValue - In the implementation block
@property (nonatomic,retain) id value;                                                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) id velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                            //@synthesize invalidated=_invalidated - In the implementation block
-(id)debugDescription;
-(void)invalidate;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(UIViewInProcessAnimationState *)animationState;
-(void)setAnimationState:(UIViewInProcessAnimationState *)arg1 ;
-(id)transformer;
-(void)setTransformer:(id)arg1 ;
-(id)presentationValue;
-(void)setInvalidationCallback:(id)arg1 ;
-(id)invalidationCallback;
-(id<UIViewAnimationComposing>)composer;
-(BOOL)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(/*^block*/id)arg3 newValueCallback:(/*^block*/id)arg4 removedCallback:(/*^block*/id)arg5 ;
-(id)velocityTarget:(BOOL)arg1 ;
-(void)setVelocity:(id)arg1 target:(BOOL)arg2 ;
-(UIViewRunningAnimationEntry *)animationEntry;
-(BOOL)_performAnimation;
-(void)setPresentationValue:(id)arg1 ;
-(void)invalidateAndStopImmediately:(BOOL)arg1 ;
-(id)initWithInvalidationCallback:(/*^block*/id)arg1 ;
-(void)invalidateIfPossible;
-(void)setAnimationEntry:(UIViewRunningAnimationEntry *)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(int)ownershipCount;
-(void)setOwnershipCount:(int)arg1 ;
@end

