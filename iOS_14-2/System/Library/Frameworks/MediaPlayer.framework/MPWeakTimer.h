/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MPWeakTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;

}
+(id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

