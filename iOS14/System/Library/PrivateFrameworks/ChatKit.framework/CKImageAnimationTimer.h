/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {

	unsigned long long _frame;
	BOOL _shouldStopWhenBackgrounded;
	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                  //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWhenBackgrounded;              //@synthesize shouldStopWhenBackgrounded=_shouldStopWhenBackgrounded - In the implementation block
+(id)sharedTimer;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(NSMutableSet *)observers;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(id)init;
-(unsigned long long)frame;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)setShouldStopWhenBackgrounded:(BOOL)arg1 ;
-(void)updateDisplayLink;
-(BOOL)shouldStopWhenBackgrounded;
-(void)animationTimerFired;
-(void)dealloc;
@end

