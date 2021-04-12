/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol OS_dispatch_queue;
@class CADisplayLink, NSObject, SCNRecursiveLock;

@interface SCNDisplayLink : NSObject {

	CADisplayLink* _caDisplayLink;
	BOOL _supportTargetTimestamp;
	/*^block*/id _block;
	/*^block*/id _adaptativeFrameDuration;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _invalidated;
	double _lastFrameTime;
	float _preferredFrameRate;
	SCNRecursiveLock* _runningLock;
	Ai _queuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFrameRate; 
@property (nonatomic,copy) id adaptativeFrameRate; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(void)_cleanup;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)_isInvalidated;
-(void)setNeedsDisplay;
-(void)setPreferredFrameRate:(float)arg1 ;
-(BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3 ;
-(float)preferredFrameRate;
-(void)_caDisplayLinkCallback;
-(void)_callbackWithTime:(double)arg1 ;
-(id)adaptativeFrameRate;
-(void)setAdaptativeFrameRate:(id)arg1 ;
-(int)queuedFrameCount;
@end

