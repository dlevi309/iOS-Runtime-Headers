/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLPUAnimationGroup.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, NSString, CAAnimation;

@interface QLPULayerAnimation : QLPUAnimationGroup <CAAnimationDelegate> {

	float _speed;
	double _timeOffset;
	double _beginTime;
	BOOL _isAnimationRunning;
	CALayer* _layer;
	NSString* _key;
	CAAnimation* __animation;

}

@property (setter=_setAnimation:,nonatomic,retain) CAAnimation * _animation;              //@synthesize _animation=__animation - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                           //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                       //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)key;
-(CALayer *)layer;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(CAAnimation *)_animation;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(void)finishImmediately;
-(void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3 ;
-(BOOL)isReadyToComplete;
-(void)_updateLayerAnimation;
-(void)_setAnimation:(id)arg1 ;
@end

