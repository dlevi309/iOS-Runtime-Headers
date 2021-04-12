/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


@class NSTimer, CADisplayLink, CADisplay;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	id _client;
	CADisplayLink* _caDisplayLink;
	CADisplay* _display;
	BOOL _paused;
	BOOL _callbackAlreadyInProgress;
	double _previousFrameTime;
	float _preferredFramesPerSecond;
	/*^block*/id _block;
	float _averageFrameTime;
	long long _frameCount;
	double _frameCountBeginTime;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) CADisplay * display; 
+(id)displayLinkWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_setup;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setDisplay:(CADisplay *)arg1 ;
-(CADisplay *)display;
-(long long)preferredFramesPerSecond;
-(void)_teardown;
-(void)_caDisplayLinkCallback;
-(id)initWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)_callbackAlreadyInProgress;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg1 ;
@end

