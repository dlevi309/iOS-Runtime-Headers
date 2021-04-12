/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CAStateController, CALayer, CAStateTransition, NSString, NSMutableArray;

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate> {

	CAStateController* _controller;
	CALayer* _layer;
	CAStateTransition* _transition;
	double _beginTime;
	double _duration;
	float _speed;
	NSString* _masterKey;
	NSMutableArray* _animations;

}

@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAStateTransition * transition;              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double beginTime;                            //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float speed;                                 //@synthesize speed=_speed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)duration;
-(float)speed;
-(double)beginTime;
-(CALayer *)layer;
-(void)addAnimation:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CAStateTransition *)transition;
-(void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2 ;
@end

