/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMAdditiveAnimatorDelegate;
@class NSMutableDictionary, CADisplayLink;

@interface CAMAdditiveAnimator : NSObject {

	id<CAMAdditiveAnimatorDelegate> _delegate;
	NSMutableDictionary* __values;
	NSMutableDictionary* __animations;
	CADisplayLink* __displayLink;

}

@property (nonatomic,readonly) NSMutableDictionary * _values;                              //@synthesize _values=__values - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _animations;                          //@synthesize _animations=__animations - In the implementation block
@property (nonatomic,retain) CADisplayLink * _displayLink;                                 //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,nonatomic,__weak) id<CAMAdditiveAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
-(NSMutableDictionary *)_animations;
-(NSMutableDictionary *)_values;
-(id)init;
-(id<CAMAdditiveAnimatorDelegate>)delegate;
-(void)setValue:(double)arg1 forKey:(id)arg2 ;
-(double)valueForKey:(id)arg1 ;
-(void)setDelegate:(id<CAMAdditiveAnimatorDelegate>)arg1 ;
-(CADisplayLink *)_displayLink;
-(void)_updateDisplayLink;
-(BOOL)isAnimating;
-(void)dealloc;
-(void)setValue:(double)arg1 forKey:(id)arg2 duration:(double)arg3 timingCurve:(id)arg4 ;
-(BOOL)isAnimatingForKey:(id)arg1 ;
-(void)_handleDisplayLinkFired:(id)arg1 ;
-(void)set_displayLink:(CADisplayLink *)arg1 ;
@end

