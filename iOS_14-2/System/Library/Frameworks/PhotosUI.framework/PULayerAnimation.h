/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAnimationGroup.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, NSString, CAAnimation;

@interface PULayerAnimation : PUAnimationGroup <CAAnimationDelegate> {

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
-(void)finishImmediately;
-(CALayer *)layer;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setSpeed:(float)arg1 timeOffset:(double)arg2 beginTime:(double)arg3 ;
-(id)init;
-(void)animationDidStart:(id)arg1 ;
-(void)_setAnimation:(id)arg1 ;
-(NSString *)description;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(NSString *)key;
-(BOOL)isReadyToComplete;
-(void)_updateLayerAnimation;
-(CAAnimation *)_animation;
@end

