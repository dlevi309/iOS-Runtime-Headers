/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (retain) id value;                                                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) id velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                            //@synthesize invalidated=_invalidated - In the implementation block
-(id<UIViewAnimationComposing>)composer;
-(void)setVelocity:(id)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(void)setAnimationState:(UIViewInProcessAnimationState *)arg1 ;
-(UIViewInProcessAnimationState *)animationState;
-(void)setTransformer:(id)arg1 ;
-(id)transformer;
-(BOOL)isInvalidated;
-(id)velocity;
-(id)presentationValue;
-(id)initWithInvalidationCallback:(/*^block*/id)arg1 ;
-(void)setInvalidationCallback:(id)arg1 ;
-(id)debugDescription;
-(id)velocityTarget:(BOOL)arg1 ;
-(UIViewRunningAnimationEntry *)animationEntry;
-(void)setValue:(id)arg1 ;
-(void)setOwnershipCount:(int)arg1 ;
-(void)setAnimationEntry:(UIViewRunningAnimationEntry *)arg1 ;
-(void)setPresentationValue:(id)arg1 ;
-(BOOL)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(/*^block*/id)arg3 newValueCallback:(/*^block*/id)arg4 removedCallback:(/*^block*/id)arg5 ;
-(id)invalidationCallback;
-(void)invalidate;
-(int)ownershipCount;
-(void)invalidateIfPossible;
-(void)setVelocity:(id)arg1 target:(BOOL)arg2 ;
-(BOOL)_performAnimation;
-(id)value;
-(void)invalidateAndStopImmediately:(BOOL)arg1 ;
@end

