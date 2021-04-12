/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CALayer *)layer;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)beginTime;
-(id)init;
-(float)speed;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(double)duration;
-(CAStateTransition *)transition;
-(void)dealloc;
@end

