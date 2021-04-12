/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class CADisplayLink;

@interface AVDisplayLink : NSObject {

	/*^block*/id _linkFired;
	CADisplayLink* _displayLink;
	id _observer;
	double _startTime;

}

@property (nonatomic,copy) id linkFired;                               //@synthesize linkFired=_linkFired - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic,__weak) id observer;                       //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double runningTime; 
-(void)invalidate;
-(id)observer;
-(void)setObserver:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)linkFired:(id)arg1 ;
-(double)runningTime;
-(id)linkFired;
-(void)setLinkFired:(id)arg1 ;
@end

