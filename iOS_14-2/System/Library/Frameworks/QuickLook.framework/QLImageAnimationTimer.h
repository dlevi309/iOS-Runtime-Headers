/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSMutableSet, CADisplayLink;

@interface QLImageAnimationTimer : NSObject {

	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
+(id)sharedTimer;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(NSMutableSet *)observers;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)animationTimerFired:(id)arg1 ;
-(id)init;
-(void)setObservers:(NSMutableSet *)arg1 ;
@end

