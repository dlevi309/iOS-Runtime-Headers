/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setUserInfo:(id)arg1 ;
-(double)maximumRefreshRate;
-(id)userInfo;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)timestamp;
-(void)setPaused:(BOOL)arg1 ;
-(long long)minimumFrameDuration;
-(void)setFrameInterval:(long long)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(long long)frameInterval;
-(long long)preferredFramesPerSecond;
-(double)targetTimestamp;
-(CADisplay *)display;
-(double)heartbeatRate;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)actualFramesPerSecond;
-(double)duration;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
@end

