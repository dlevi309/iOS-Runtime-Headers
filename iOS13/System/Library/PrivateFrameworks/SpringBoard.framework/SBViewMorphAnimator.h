/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBViewMorphAnimatorObserver.h>

@protocol SBViewMorphAnimatorDataSource;
@class NSUUID, UIView, NSHashTable, BSTimer, SBHomeGestureSettings, SBViewMorphAnimatorContentClippingView, NSString;

@interface SBViewMorphAnimator : NSObject <SBViewMorphAnimatorObserver> {

	BOOL _automaticallyStartSourceAnimations;
	BOOL _automaticallyStartTargetAnimations;
	BOOL _invalidated;
	BOOL _sourceScaleAndPositionEnded;
	NSUUID* _uuid;
	UIView* _sourceView;
	UIView* _sourceContentView;
	UIView* _targetView;
	UIView* _targetContentView;
	id<SBViewMorphAnimatorDataSource> _targetDataSource;
	double _sourceFinalScale;
	double _targetCornerRadius;
	NSHashTable* _observers;
	long long _startedSourceAnimations;
	long long _completedSourceAnimations;
	long long _startedTargetAnimations;
	long long _completedTargetAnimations;
	/*^block*/id _sourceAllAnimationsCompletionBlock;
	BSTimer* _animationTimeoutTimer;
	BSTimer* _sourceAnimationsCompletionContinueBlockTimeoutTimer;
	SBHomeGestureSettings* _homeGestureSettings;
	SBViewMorphAnimatorContentClippingView* _sourceContentClippingView;
	SBViewMorphAnimatorContentClippingView* _targetContentClippingView;
	CGPoint _sourceFinalCenter;
	CGRect _sourceContentFrame;
	CGRect _targetSourcePinningFrame;
	CGRect _targetFinalFrame;
	CGRect _sourceContentClippingViewInitialFrame;
	CGRect _targetContentClippingViewInitialFrame;

}

@property (nonatomic,retain) NSHashTable * observers;                                                         //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) long long startedSourceAnimations;                                               //@synthesize startedSourceAnimations=_startedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long completedSourceAnimations;                                             //@synthesize completedSourceAnimations=_completedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long startedTargetAnimations;                                               //@synthesize startedTargetAnimations=_startedTargetAnimations - In the implementation block
@property (assign,nonatomic) long long completedTargetAnimations;                                             //@synthesize completedTargetAnimations=_completedTargetAnimations - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                                //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) BOOL sourceScaleAndPositionEnded;                                                //@synthesize sourceScaleAndPositionEnded=_sourceScaleAndPositionEnded - In the implementation block
@property (nonatomic,copy) id sourceAllAnimationsCompletionBlock;                                             //@synthesize sourceAllAnimationsCompletionBlock=_sourceAllAnimationsCompletionBlock - In the implementation block
@property (nonatomic,retain) BSTimer * animationTimeoutTimer;                                                 //@synthesize animationTimeoutTimer=_animationTimeoutTimer - In the implementation block
@property (nonatomic,retain) BSTimer * sourceAnimationsCompletionContinueBlockTimeoutTimer;                   //@synthesize sourceAnimationsCompletionContinueBlockTimeoutTimer=_sourceAnimationsCompletionContinueBlockTimeoutTimer - In the implementation block
@property (assign,nonatomic,__weak) SBHomeGestureSettings * homeGestureSettings;                              //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBViewMorphAnimatorContentClippingView * sourceContentClippingView;              //@synthesize sourceContentClippingView=_sourceContentClippingView - In the implementation block
@property (assign,nonatomic) CGRect sourceContentClippingViewInitialFrame;                                    //@synthesize sourceContentClippingViewInitialFrame=_sourceContentClippingViewInitialFrame - In the implementation block
@property (nonatomic,retain) SBViewMorphAnimatorContentClippingView * targetContentClippingView;              //@synthesize targetContentClippingView=_targetContentClippingView - In the implementation block
@property (assign,nonatomic) CGRect targetContentClippingViewInitialFrame;                                    //@synthesize targetContentClippingViewInitialFrame=_targetContentClippingViewInitialFrame - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                      //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceContentView;                                               //@synthesize sourceContentView=_sourceContentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                                                      //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetContentView;                                               //@synthesize targetContentView=_targetContentView - In the implementation block
@property (assign,nonatomic,__weak) id<SBViewMorphAnimatorDataSource> targetDataSource;                       //@synthesize targetDataSource=_targetDataSource - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartSourceAnimations;                                         //@synthesize automaticallyStartSourceAnimations=_automaticallyStartSourceAnimations - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartTargetAnimations;                                         //@synthesize automaticallyStartTargetAnimations=_automaticallyStartTargetAnimations - In the implementation block
@property (nonatomic,readonly) CGPoint sourceFinalCenter;                                                     //@synthesize sourceFinalCenter=_sourceFinalCenter - In the implementation block
@property (nonatomic,readonly) double sourceFinalScale;                                                       //@synthesize sourceFinalScale=_sourceFinalScale - In the implementation block
@property (nonatomic,readonly) CGRect sourceContentFrame;                                                     //@synthesize sourceContentFrame=_sourceContentFrame - In the implementation block
@property (nonatomic,readonly) double targetCornerRadius;                                                     //@synthesize targetCornerRadius=_targetCornerRadius - In the implementation block
@property (nonatomic,readonly) CGRect targetSourcePinningFrame;                                               //@synthesize targetSourcePinningFrame=_targetSourcePinningFrame - In the implementation block
@property (nonatomic,readonly) CGRect targetFinalFrame;                                                       //@synthesize targetFinalFrame=_targetFinalFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(NSUUID *)uuid;
-(void)_reset;
-(void)_updateParameters;
-(id)initWithUUID:(id)arg1 ;
-(UIView *)sourceView;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(UIView *)targetView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setTargetView:(UIView *)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)cancel:(/*^block*/id)arg1 ;
-(void)interrupt:(/*^block*/id)arg1 ;
-(void)setTargetContentView:(UIView *)arg1 ;
-(UIView *)targetContentView;
-(double)targetCornerRadius;
-(CGPoint)sourceFinalCenter;
-(double)sourceFinalScale;
-(void)noteSourceAnimationsDidEnd:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)setAutomaticallyStartSourceAnimations:(BOOL)arg1 ;
-(void)setSourceContentView:(UIView *)arg1 ;
-(BOOL)startSourceAnimations:(unsigned long long)arg1 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(void)_resetAllAnimations;
-(void)_noteAnimatorWasCanceled;
-(void)_continueSourceAnimationsCompletionPendingBlock;
-(void)_noteAnimatorWasInterrupted;
-(void)_removeSourceClippingView;
-(BOOL)startTargetAnimations:(unsigned long long)arg1 ;
-(CGRect)_sourceContentFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2 ;
-(double)_sourceFinalScaleWithContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2 ;
-(CGPoint)_source:(id)arg1 finalCenterWithFinalScale:(double)arg2 contentFrame:(CGRect)arg3 targetFinalFrame:(CGRect)arg4 ;
-(CGRect)_targetSourcePinningFrameWithSourceContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2 ;
-(void)willStartSourceAnimations:(unsigned long long)arg1 ;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)willStartTargetAnimations:(unsigned long long)arg1 ;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)noteSourceAnimationsWillStart:(unsigned long long)arg1 ;
-(CGRect)_targetInitialClippingBoundsWithSourceContentFrame:(CGRect)arg1 sourceFinalScale:(double)arg2 targetViewBounds:(CGRect)arg3 ;
-(void)noteTargetAnimationsWillStart:(unsigned long long)arg1 ;
-(void)noteTargetAnimationsDidEnd:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)_checkAnimationsDependencies:(/*^block*/id)arg1 ;
-(void)_handleHandoffTimeout;
-(BOOL)preflightCheck;
-(void)setTargetDataSource:(id<SBViewMorphAnimatorDataSource>)arg1 ;
-(UIView *)sourceContentView;
-(id<SBViewMorphAnimatorDataSource>)targetDataSource;
-(BOOL)automaticallyStartSourceAnimations;
-(BOOL)automaticallyStartTargetAnimations;
-(void)setAutomaticallyStartTargetAnimations:(BOOL)arg1 ;
-(CGRect)sourceContentFrame;
-(CGRect)targetSourcePinningFrame;
-(CGRect)targetFinalFrame;
-(long long)startedSourceAnimations;
-(void)setStartedSourceAnimations:(long long)arg1 ;
-(long long)completedSourceAnimations;
-(void)setCompletedSourceAnimations:(long long)arg1 ;
-(long long)startedTargetAnimations;
-(void)setStartedTargetAnimations:(long long)arg1 ;
-(long long)completedTargetAnimations;
-(void)setCompletedTargetAnimations:(long long)arg1 ;
-(BOOL)sourceScaleAndPositionEnded;
-(void)setSourceScaleAndPositionEnded:(BOOL)arg1 ;
-(id)sourceAllAnimationsCompletionBlock;
-(void)setSourceAllAnimationsCompletionBlock:(id)arg1 ;
-(BSTimer *)animationTimeoutTimer;
-(void)setAnimationTimeoutTimer:(BSTimer *)arg1 ;
-(BSTimer *)sourceAnimationsCompletionContinueBlockTimeoutTimer;
-(void)setSourceAnimationsCompletionContinueBlockTimeoutTimer:(BSTimer *)arg1 ;
-(SBViewMorphAnimatorContentClippingView *)sourceContentClippingView;
-(void)setSourceContentClippingView:(SBViewMorphAnimatorContentClippingView *)arg1 ;
-(CGRect)sourceContentClippingViewInitialFrame;
-(void)setSourceContentClippingViewInitialFrame:(CGRect)arg1 ;
-(SBViewMorphAnimatorContentClippingView *)targetContentClippingView;
-(void)setTargetContentClippingView:(SBViewMorphAnimatorContentClippingView *)arg1 ;
-(CGRect)targetContentClippingViewInitialFrame;
-(void)setTargetContentClippingViewInitialFrame:(CGRect)arg1 ;
@end

