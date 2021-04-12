/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)startTimingForKey:(int)arg1 ;
-(void)stopTimingForKey:(int)arg1 ;
-(float)totalTimeForKey:(int)arg1 ;
-(void)removeTimingForKey:(int)arg1 ;
-(BOOL)hasKey:(int)arg1 ;
-(BOOL)isValidTimingForKey:(int)arg1 ;
-(float)timingForKey:(int)arg1 ;
-(void)setTiming:(float)arg1 forKey:(int)arg2 ;
-(void)setStartTime:(float)arg1 forKey:(int)arg2 ;
-(void)setStopTime:(float)arg1 forKey:(int)arg2 ;
@end

