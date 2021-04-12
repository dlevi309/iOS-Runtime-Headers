/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	BOOL _isValid;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)start;
-(void)_cleanupTimer;
-(void)_callTarget;
-(BOOL)isValid;
-(void)invalidate;
-(void)dealloc;
@end

