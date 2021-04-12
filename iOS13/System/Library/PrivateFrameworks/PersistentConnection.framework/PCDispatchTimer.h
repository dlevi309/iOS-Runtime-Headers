/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(NSDate *)fireDate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)start;
-(void)_cleanupTimer;
-(id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_callTarget;
@end

