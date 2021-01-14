/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(id)linkFired;
-(void)setStartTime:(double)arg1 ;
-(double)runningTime;
-(void)setLinkFired:(id)arg1 ;
-(void)startDisplayLinkUpdatesForObserver:(id)arg1 framesPerSecond:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)invalidate;
-(double)startTime;
-(void)linkFired:(id)arg1 ;
@end

