/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)frame;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)setShouldStopWhenBackgrounded:(BOOL)arg1 ;
-(void)updateDisplayLink;
-(BOOL)shouldStopWhenBackgrounded;
-(void)animationTimerFired;
@end

