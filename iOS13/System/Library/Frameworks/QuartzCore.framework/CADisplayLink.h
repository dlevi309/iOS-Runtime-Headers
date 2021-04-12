/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) double maximumRefreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double targetTimestamp; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)userInfo;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setUserInfo:(id)arg1 ;
-(double)timestamp;
-(long long)priority;
-(double)duration;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isPaused;
-(long long)frameInterval;
-(void)setFrameInterval:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)maximumRefreshRate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(double)targetTimestamp;
-(CADisplay *)display;
-(double)heartbeatRate;
-(long long)minimumFrameDuration;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(long long)preferredFramesPerSecond;
-(long long)actualFramesPerSecond;
@end

