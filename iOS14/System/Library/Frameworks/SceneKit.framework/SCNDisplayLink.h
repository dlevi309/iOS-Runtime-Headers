/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isInvalidated;
-(void)_cleanup;
-(id)init;
-(void)setNeedsDisplay;
-(void)setPaused:(BOOL)arg1 ;
-(void)invalidate;
-(BOOL)isPaused;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 screen:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setPreferredFrameRate:(float)arg1 ;
-(BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3 ;
-(float)preferredFrameRate;
-(void)_caDisplayLinkCallback;
-(void)_callbackWithTime:(double)arg1 ;
-(id)adaptativeFrameRate;
-(void)setAdaptativeFrameRate:(id)arg1 ;
-(int)queuedFrameCount;
@end

