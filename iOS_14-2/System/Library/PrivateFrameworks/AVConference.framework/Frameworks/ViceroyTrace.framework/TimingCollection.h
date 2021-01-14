/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(BOOL)hasKey:(int)arg1 ;
-(id)init;
-(id)description;
-(void)startTimingForKey:(int)arg1 ;
-(float)totalTimeForKey:(int)arg1 ;
-(void)removeTimingForKey:(int)arg1 ;
-(void)stopTimingForKey:(int)arg1 ;
-(void)dealloc;
-(BOOL)isValidTimingForKey:(int)arg1 ;
-(float)timingForKey:(int)arg1 ;
-(void)setTiming:(float)arg1 forKey:(int)arg2 ;
-(void)setStartTime:(float)arg1 forKey:(int)arg2 ;
-(void)setStopTime:(float)arg1 forKey:(int)arg2 ;
@end

