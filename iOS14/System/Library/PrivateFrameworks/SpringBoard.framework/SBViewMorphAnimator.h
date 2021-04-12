/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBViewMorphAnimatorObserver.h>

@protocol SBViewMorphAnimatorDataSource;
@class NSUUID, UIView, SBFFluidBehaviorSettings, NSHashTable, BSTimer, SBViewMorphAnimatorContentClippingView, SBViewMorphAnimatorContentBlackCurtainView, NSString;

@interface SBViewMorphAnimator : NSObject <SBViewMorphAnimatorObserver> {

	BOOL _automaticallyStartSourceAnimations;
	BOOL _automaticallyStartTargetAnimations;
	BOOL _invalidated;
	BOOL _sourceScaleAndPositionEnded;
	BOOL _targetExternalPlaceholderAllEnded;
	BOOL _sourceContentFrameWasAltered;
	NSUUID* _uuid;
	UIView* _sourceView;
	UIView* _sourceContentView;
	UIView* _targetView;
	UIView* _targetContentView;
	long long _fromOrientation;
	long long _toOrientation;
	SBFFluidBehaviorSettings* _sourceClipAnimationSettings;
	SBFFluidBehaviorSettings* _targetClipAnimationSettings;
	id<SBViewMorphAnimatorDataSource> _targetDataSource;
	long long _direction;
	double _sourceFinalScale;
	double _targetCornerRadius;
	double _sourceCornerRadius;
	NSHashTable* _observers;
	long long _startedSourceAnimations;
	long long _completedSourceAnimations;
	long long _startedTargetAnimations;
	long long _completedTargetAnimations;
	/*^block*/id _sourceAllAnimationsCompletionBlock;
	BSTimer* _animationTimeoutTimer;
	BSTimer* _sourceAnimationsCompletionContinueBlockTimeoutTimer;
	SBViewMorphAnimatorContentClippingView* _sourceContentClippingView;
	SBViewMorphAnimatorContentBlackCurtainView* _sourceBlackCurtainView;
	SBViewMorphAnimatorContentClippingView* _targetContentClippingView;
	CGPoint _sourceFinalCenter;
	CGRect _sourceContentFrame;
	CGRect _targetSourcePinningFrame;
	CGRect _targetFinalFrame;
	CGRect _sourceContentClippingViewInitialFrame;
	CGRect _targetContentClippingViewInitialFrame;
	CGRect _sourceAppLayoutFrame;

}

@property (nonatomic,retain) NSHashTable * observers;                                                          //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) long long startedSourceAnimations;                                                //@synthesize startedSourceAnimations=_startedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long completedSourceAnimations;                                              //@synthesize completedSourceAnimations=_completedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long startedTargetAnimations;                                                //@synthesize startedTargetAnimations=_startedTargetAnimations - In the implementation block
@property (assign,nonatomic) long long completedTargetAnimations;                                              //@synthesize completedTargetAnimations=_completedTargetAnimations - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                                 //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) BOOL sourceScaleAndPositionEnded;                                                 //@synthesize sourceScaleAndPositionEnded=_sourceScaleAndPositionEnded - In the implementation block
@property (assign,nonatomic) BOOL targetExternalPlaceholderAllEnded;                                           //@synthesize targetExternalPlaceholderAllEnded=_targetExternalPlaceholderAllEnded - In the implementation block
@property (assign,nonatomic) BOOL sourceContentFrameWasAltered;                                                //@synthesize sourceContentFrameWasAltered=_sourceContentFrameWasAltered - In the implementation block
@property (nonatomic,copy) id sourceAllAnimationsCompletionBlock;                                              //@synthesize sourceAllAnimationsCompletionBlock=_sourceAllAnimationsCompletionBlock - In the implementation block
@property (nonatomic,retain) BSTimer * animationTimeoutTimer;                                                  //@synthesize animationTimeoutTimer=_animationTimeoutTimer - In the implementation block
@property (nonatomic,retain) BSTimer * sourceAnimationsCompletionContinueBlockTimeoutTimer;                    //@synthesize sourceAnimationsCompletionContinueBlockTimeoutTimer=_sourceAnimationsCompletionContinueBlockTimeoutTimer - In the implementation block
@property (nonatomic,retain) SBViewMorphAnimatorContentClippingView * sourceContentClippingView;               //@synthesize sourceContentClippingView=_sourceContentClippingView - In the implementation block
@property (nonatomic,retain) SBViewMorphAnimatorContentBlackCurtainView * sourceBlackCurtainView;              //@synthesize sourceBlackCurtainView=_sourceBlackCurtainView - In the implementation block
@property (assign,nonatomic) CGRect sourceContentClippingViewInitialFrame;                                     //@synthesize sourceContentClippingViewInitialFrame=_sourceContentClippingViewInitialFrame - In the implementation block
@property (nonatomic,retain) SBViewMorphAnimatorContentClippingView * targetContentClippingView;               //@synthesize targetContentClippingView=_targetContentClippingView - In the implementation block
@property (assign,nonatomic) CGRect targetContentClippingViewInitialFrame;                                     //@synthesize targetContentClippingViewInitialFrame=_targetContentClippingViewInitialFrame - In the implementation block
@property (assign,nonatomic) CGRect sourceAppLayoutFrame;                                                      //@synthesize sourceAppLayoutFrame=_sourceAppLayoutFrame - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                       //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceContentView;                                                //@synthesize sourceContentView=_sourceContentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                                                       //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetContentView;                                                //@synthesize targetContentView=_targetContentView - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                                                        //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (assign,nonatomic) long long toOrientation;                                                          //@synthesize toOrientation=_toOrientation - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * sourceClipAnimationSettings;                           //@synthesize sourceClipAnimationSettings=_sourceClipAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * targetClipAnimationSettings;                           //@synthesize targetClipAnimationSettings=_targetClipAnimationSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBViewMorphAnimatorDataSource> targetDataSource;                        //@synthesize targetDataSource=_targetDataSource - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartSourceAnimations;                                          //@synthesize automaticallyStartSourceAnimations=_automaticallyStartSourceAnimations - In the implementation block
@property (assign,nonatomic) BOOL automaticallyStartTargetAnimations;                                          //@synthesize automaticallyStartTargetAnimations=_automaticallyStartTargetAnimations - In the implementation block
@property (assign,nonatomic) long long direction;                                                              //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) CGPoint sourceFinalCenter;                                                      //@synthesize sourceFinalCenter=_sourceFinalCenter - In the implementation block
@property (nonatomic,readonly) double sourceFinalScale;                                                        //@synthesize sourceFinalScale=_sourceFinalScale - In the implementation block
@property (nonatomic,readonly) CGRect sourceContentFrame;                                                      //@synthesize sourceContentFrame=_sourceContentFrame - In the implementation block
@property (nonatomic,readonly) double targetCornerRadius;                                                      //@synthesize targetCornerRadius=_targetCornerRadius - In the implementation block
@property (nonatomic,readonly) double sourceCornerRadius;                                                      //@synthesize sourceCornerRadius=_sourceCornerRadius - In the implementation block
@property (nonatomic,readonly) CGRect targetSourcePinningFrame;                                                //@synthesize targetSourcePinningFrame=_targetSourcePinningFrame - In the implementation block
@property (nonatomic,readonly) CGRect targetFinalFrame;                                                        //@synthesize targetFinalFrame=_targetFinalFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(void)addObserver:(id)arg1 ;
-(NSUUID *)uuid;
-(NSHashTable *)observers;
-(CGRect)sourceContentFrame;
-(id)init;
-(void)setDirection:(long long)arg1 ;
-(BOOL)invalidated;
-(long long)fromOrientation;
-(void)setSourceView:(UIView *)arg1 ;
-(void)interrupt:(/*^block*/id)arg1 ;
-(UIView *)targetView;
-(long long)toOrientation;
-(void)cancel:(/*^block*/id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(UIView *)sourceView;
-(void)setFromOrientation:(long long)arg1 ;
-(void)setToOrientation:(long long)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)_isReversed;
-(void)_reset;
-(void)setTargetView:(UIView *)arg1 ;
-(void)_removeMatchMoveAnimation;
-(void)_updateParameters;
-(void)setTargetContentView:(UIView *)arg1 ;
-(UIView *)targetContentView;
-(void)dealloc;
-(CGPoint)sourceFinalCenter;
-(double)sourceFinalScale;
-(void)noteSourceAnimationsDidEnd:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)setAutomaticallyStartSourceAnimations:(BOOL)arg1 ;
-(void)setSourceContentView:(UIView *)arg1 ;
-(BOOL)startTargetAnimations:(unsigned long long)arg1 ;
-(BOOL)startSourceAnimations:(unsigned long long)arg1 ;
-(void)willStartSourceAnimations:(unsigned long long)arg1 ;
-(void)willStartTargetAnimations:(unsigned long long)arg1 ;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)_resetAllAnimations;
-(void)_noteAnimatorWasCanceled;
-(void)_continueSourceAnimationsCompletionPendingBlock;
-(void)_noteAnimatorWasInterrupted;
-(void)_removeBlackCurtainView;
-(void)_removeSourceClippingView;
-(void)_removeTargetClippingView;
-(void)noteTargetAnimationsDidEnd:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(CGRect)_sourceContentFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2 ;
-(double)_sourceFinalScaleWithContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2 ;
-(CGRect)_validatedSourceContentFrame:(CGRect)arg1 withinSourceView:(id)arg2 withSourceFinalScale:(double)arg3 ;
-(CGPoint)_source:(id)arg1 finalCenterWithFinalScale:(double)arg2 contentFrame:(CGRect)arg3 targetFinalFrame:(CGRect)arg4 ;
-(CGRect)_targetSourcePinningFrameWithSourceContentFrame:(CGRect)arg1 targetFinalFrame:(CGRect)arg2 ;
-(CGRect)_sourceAppLayoutFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2 ;
-(void)noteSourceAnimationsWillStart:(unsigned long long)arg1 ;
-(BOOL)_isTargetSourcePinningFrameEquivalentToSourceViewFrame;
-(CGRect)_targetInitialClippingBoundsWithSourceContentFrame:(CGRect)arg1 sourceFinalScale:(double)arg2 targetViewBounds:(CGRect)arg3 ;
-(void)noteTargetAnimationsWillStart:(unsigned long long)arg1 ;
-(void)_checkAnimationsDependencies:(/*^block*/id)arg1 ;
-(void)noteWillRemoveTargeMatchMoveAnimationAtFrame:(CGRect)arg1 withinSourceFrame:(CGRect)arg2 ;
-(void)setSourceAllAnimationsCompletionBlock:(id)arg1 ;
-(void)_noteDidEndAllAnimations;
-(void)_handleHandoffTimeout;
-(id)initWithUUID:(id)arg1 direction:(long long)arg2 ;
-(BOOL)preflightCheck;
-(void)setTargetDataSource:(id<SBViewMorphAnimatorDataSource>)arg1 ;
-(UIView *)sourceContentView;
-(SBFFluidBehaviorSettings *)sourceClipAnimationSettings;
-(void)setSourceClipAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)targetClipAnimationSettings;
-(void)setTargetClipAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(id<SBViewMorphAnimatorDataSource>)targetDataSource;
-(BOOL)automaticallyStartSourceAnimations;
-(BOOL)automaticallyStartTargetAnimations;
-(void)setAutomaticallyStartTargetAnimations:(BOOL)arg1 ;
-(double)targetCornerRadius;
-(double)sourceCornerRadius;
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
-(BOOL)targetExternalPlaceholderAllEnded;
-(void)setTargetExternalPlaceholderAllEnded:(BOOL)arg1 ;
-(BOOL)sourceContentFrameWasAltered;
-(void)setSourceContentFrameWasAltered:(BOOL)arg1 ;
-(id)sourceAllAnimationsCompletionBlock;
-(BSTimer *)animationTimeoutTimer;
-(void)setAnimationTimeoutTimer:(BSTimer *)arg1 ;
-(BSTimer *)sourceAnimationsCompletionContinueBlockTimeoutTimer;
-(void)setSourceAnimationsCompletionContinueBlockTimeoutTimer:(BSTimer *)arg1 ;
-(SBViewMorphAnimatorContentClippingView *)sourceContentClippingView;
-(void)setSourceContentClippingView:(SBViewMorphAnimatorContentClippingView *)arg1 ;
-(SBViewMorphAnimatorContentBlackCurtainView *)sourceBlackCurtainView;
-(void)setSourceBlackCurtainView:(SBViewMorphAnimatorContentBlackCurtainView *)arg1 ;
-(CGRect)sourceContentClippingViewInitialFrame;
-(void)setSourceContentClippingViewInitialFrame:(CGRect)arg1 ;
-(SBViewMorphAnimatorContentClippingView *)targetContentClippingView;
-(void)setTargetContentClippingView:(SBViewMorphAnimatorContentClippingView *)arg1 ;
-(CGRect)targetContentClippingViewInitialFrame;
-(void)setTargetContentClippingViewInitialFrame:(CGRect)arg1 ;
-(CGRect)sourceAppLayoutFrame;
-(void)setSourceAppLayoutFrame:(CGRect)arg1 ;
@end

