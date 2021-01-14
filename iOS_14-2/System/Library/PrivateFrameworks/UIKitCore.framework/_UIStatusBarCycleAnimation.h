/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setStoppingLayerAnimations:(NSArray *)arg1 ;
-(void)_stopStoppingAnimations;
-(void)resumePersistentAnimation;
-(id)initWithLayerAnimations:(id)arg1 ;
-(void)start;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(BOOL)stopsAfterReversing;
-(NSArray *)stoppingLayerAnimations;
-(void)_sendCompletionsWithFinished:(BOOL)arg1 ;
-(NSArray *)layerAnimations;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)_startAnimations;
-(NSMutableArray *)completionHandlers;
-(long long)state;
-(void)setStopsAfterReversing:(BOOL)arg1 ;
-(_UIStatusBarCycleLayerAnimation *)mainLayerAnimation;
-(void)_stopAnimations;
-(void)pausePersistentAnimation;
-(void)dealloc;
@end

