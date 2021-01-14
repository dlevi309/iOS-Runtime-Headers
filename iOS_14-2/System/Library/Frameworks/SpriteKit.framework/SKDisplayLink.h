/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setup;
-(void)setDisplay:(CADisplay *)arg1 ;
-(id)init;
-(void)_teardown;
-(void)setPaused:(BOOL)arg1 ;
-(long long)preferredFramesPerSecond;
-(CADisplay *)display;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(void)_caDisplayLinkCallback;
-(id)initWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)_callbackAlreadyInProgress;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg1 ;
@end

