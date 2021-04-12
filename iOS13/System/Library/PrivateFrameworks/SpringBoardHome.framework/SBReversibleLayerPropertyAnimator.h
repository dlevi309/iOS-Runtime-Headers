/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class CALayer, NSString, BSAnimationSettings, NSMutableArray;

@interface SBReversibleLayerPropertyAnimator : NSObject <CAAnimationDelegate, BSInvalidatable> {

	BOOL _started;
	BOOL _invalidated;
	BOOL _reversedWithNewSettings;
	CALayer* _layer;
	NSString* _keyPath;
	double _initialValue;
	double _targetValue;
	BSAnimationSettings* _currentAnimationSettings;
	/*^block*/id _completion;
	unsigned long long _reversalCount;
	unsigned long long _outstandingCAAnimationCompletionCount;
	NSString* _forwardAnimationKey;
	NSString* _forwardOffsetAnimationKey;
	NSMutableArray* _reversalAnimationKeys;

}

@property (assign,nonatomic) BOOL invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy) BSAnimationSettings * currentAnimationSettings;                                //@synthesize currentAnimationSettings=_currentAnimationSettings - In the implementation block
@property (nonatomic,copy) id completion;                                                                 //@synthesize completion=_completion - In the implementation block
@property (assign,getter=hasStarted,nonatomic) BOOL started;                                              //@synthesize started=_started - In the implementation block
@property (getter=isGoingForward,nonatomic,readonly) BOOL goingForward; 
@property (assign,nonatomic) unsigned long long reversalCount;                                            //@synthesize reversalCount=_reversalCount - In the implementation block
@property (assign,getter=hasReversedWithNewSettings,nonatomic) BOOL reversedWithNewSettings;              //@synthesize reversedWithNewSettings=_reversedWithNewSettings - In the implementation block
@property (assign,nonatomic) unsigned long long outstandingCAAnimationCompletionCount;                    //@synthesize outstandingCAAnimationCompletionCount=_outstandingCAAnimationCompletionCount - In the implementation block
@property (nonatomic,copy) NSString * forwardAnimationKey;                                                //@synthesize forwardAnimationKey=_forwardAnimationKey - In the implementation block
@property (nonatomic,copy) NSString * forwardOffsetAnimationKey;                                          //@synthesize forwardOffsetAnimationKey=_forwardOffsetAnimationKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * reversalAnimationKeys;                                      //@synthesize reversalAnimationKeys=_reversalAnimationKeys - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                                           //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                                                   //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) double initialValue;                                                       //@synthesize initialValue=_initialValue - In the implementation block
@property (nonatomic,readonly) double targetValue;                                                        //@synthesize targetValue=_targetValue - In the implementation block
@property (getter=hasReversed,nonatomic,readonly) BOOL reversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(NSString *)keyPath;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(BOOL)hasStarted;
-(CALayer *)layer;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)targetValue;
-(double)initialValue;
-(void)setStarted:(BOOL)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)reverse;
-(NSString *)forwardAnimationKey;
-(NSString *)forwardOffsetAnimationKey;
-(NSMutableArray *)reversalAnimationKeys;
-(void)_fireCompletionIfNecessary;
-(void)setCurrentAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)_animateFromRelativeValue:(double)arg1 toRelativeValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4 ;
-(void)setForwardOffsetAnimationKey:(NSString *)arg1 ;
-(void)_animateFromValue:(double)arg1 toValue:(double)arg2 withSettings:(id)arg3 beginTime:(id)arg4 ;
-(unsigned long long)reversalCount;
-(BSAnimationSettings *)currentAnimationSettings;
-(void)_reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3 ;
-(void)setReversedWithNewSettings:(BOOL)arg1 ;
-(BOOL)hasReversedWithNewSettings;
-(void)setReversalCount:(unsigned long long)arg1 ;
-(BOOL)hasReversed;
-(double)_percentCompleteForAnimation:(id)arg1 time:(double)arg2 ;
-(id)_animationWithSettings:(id)arg1 ;
-(double)_inputPercentCompleteForAnimation:(id)arg1 outputPercentComplete:(double)arg2 precision:(double)arg3 ;
-(BOOL)isGoingForward;
-(id)_additiveAnimationForKeyPath:(id)arg1 withSettings:(id)arg2 beginTime:(id)arg3 fromRelativeValue:(double)arg4 toRelativeValue:(double)arg5 ;
-(unsigned long long)outstandingCAAnimationCompletionCount;
-(void)setOutstandingCAAnimationCompletionCount:(unsigned long long)arg1 ;
-(void)setForwardAnimationKey:(NSString *)arg1 ;
-(double)_outputPercentCompleteForAnimation:(id)arg1 inputPercentComplete:(double)arg2 ;
-(id)initWithLayer:(id)arg1 keyPath:(id)arg2 initialValue:(double)arg3 targetValue:(double)arg4 ;
-(void)animateWithSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reverseWithSettings:(id)arg1 directionChangeSettings:(id)arg2 headStart:(double)arg3 ;
-(void)setReversalAnimationKeys:(NSMutableArray *)arg1 ;
@end

