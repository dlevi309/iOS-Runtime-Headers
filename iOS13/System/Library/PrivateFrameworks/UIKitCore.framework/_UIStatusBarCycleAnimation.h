/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class NSArray, NSMutableArray, _UIStatusBarCycleLayerAnimation, NSString;

@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation> {

	BOOL _stopsAfterReversing;
	BOOL _visible;
	NSArray* _layerAnimations;
	long long _state;
	NSArray* _stoppingLayerAnimations;
	NSMutableArray* _completionHandlers;

}

@property (assign,nonatomic) BOOL visible;                                                        //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) _UIStatusBarCycleLayerAnimation * mainLayerAnimation; 
@property (nonatomic,retain) NSMutableArray * completionHandlers;                                 //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) NSArray * layerAnimations;                                         //@synthesize layerAnimations=_layerAnimations - In the implementation block
@property (nonatomic,readonly) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stopsAfterReversing;                                            //@synthesize stopsAfterReversing=_stopsAfterReversing - In the implementation block
@property (nonatomic,retain) NSArray * stoppingLayerAnimations;                                   //@synthesize stoppingLayerAnimations=_stoppingLayerAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)start;
-(long long)state;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)resumePersistentAnimation;
-(void)pausePersistentAnimation;
-(NSMutableArray *)completionHandlers;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_stopAnimations;
-(id)initWithLayerAnimations:(id)arg1 ;
-(void)setStopsAfterReversing:(BOOL)arg1 ;
-(void)setStoppingLayerAnimations:(NSArray *)arg1 ;
-(BOOL)stopsAfterReversing;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)_startAnimations;
-(void)_stopStoppingAnimations;
-(_UIStatusBarCycleLayerAnimation *)mainLayerAnimation;
-(void)_sendCompletionsWithFinished:(BOOL)arg1 ;
-(NSArray *)layerAnimations;
-(NSArray *)stoppingLayerAnimations;
@end

