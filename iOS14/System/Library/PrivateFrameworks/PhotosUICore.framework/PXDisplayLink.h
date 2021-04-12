/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class CADisplayLink;

@interface PXDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	id _target;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id target;                                //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                    //@synthesize selector=_selector - In the implementation block
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double targetTimestamp; 
@property (nonatomic,readonly) double currentMediaTime; 
@property (nonatomic,readonly) long long preferredFramesPerSecond; 
@property (assign,nonatomic) BOOL paused; 
-(SEL)selector;
-(id)init;
-(double)timestamp;
-(void)setPaused:(BOOL)arg1 ;
-(id)description;
-(long long)preferredFramesPerSecond;
-(double)targetTimestamp;
-(void)_addToRunLoop;
-(double)currentMediaTime;
-(void)invalidate;
-(BOOL)paused;
-(id)target;
-(void)_tick:(id)arg1 ;
-(double)duration;
-(id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(BOOL)arg3 ;
-(id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
@end

