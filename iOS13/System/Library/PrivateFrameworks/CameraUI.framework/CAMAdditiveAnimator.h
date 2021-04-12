/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setValue:(double)arg1 forKey:(id)arg2 ;
-(id<CAMAdditiveAnimatorDelegate>)delegate;
-(void)setDelegate:(id<CAMAdditiveAnimatorDelegate>)arg1 ;
-(NSMutableDictionary *)_values;
-(double)valueForKey:(id)arg1 ;
-(BOOL)isAnimating;
-(NSMutableDictionary *)_animations;
-(CADisplayLink *)_displayLink;
-(void)_updateDisplayLink;
-(void)_handleDisplayLinkFired:(id)arg1 ;
-(void)set_displayLink:(CADisplayLink *)arg1 ;
-(void)setValue:(double)arg1 forKey:(id)arg2 duration:(double)arg3 timingCurve:(id)arg4 ;
-(BOOL)isAnimatingForKey:(id)arg1 ;
@end

