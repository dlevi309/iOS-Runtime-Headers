/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIIntervalAnimating, OS_dispatch_queue, UIViewAnimationComposing;
@class NSObject, UIViewAnimationState;

@interface UIViewRunningAnimationEntry : NSObject {

	id<UIIntervalAnimating> _animation;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	/*^block*/id _completionCallback;
	BOOL _invalidated;
	BOOL _running;
	UIViewAnimationState* _animationState;
	id<UIViewAnimationComposing> _composer;

}

@property (assign,nonatomic) BOOL invalidated; 
@property (assign,nonatomic) BOOL running;                                              //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) UIViewAnimationState * animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (nonatomic,retain) id<UIViewAnimationComposing> composer;                     //@synthesize composer=_composer - In the implementation block
-(BOOL)running;
-(UIViewAnimationState *)animationState;
-(void)setAnimationState:(UIViewAnimationState *)arg1 ;
-(id<UIViewAnimationComposing>)composer;
-(void)performWithoutLock:(/*^block*/id)arg1 ;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(id)initWithAnimation:(id)arg1 completion:(/*^block*/id)arg2 composer:(id)arg3 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)performCompletionCallbackFinished:(BOOL)arg1 ;
-(void)setCompletionCallback:(/*^block*/id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
@end

