/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDate;

@interface IMTimer : NSObject {

	id _timer;
	id _target;
	NSString* _name;
	double _timeInterval;
	NSObject*<OS_dispatch_queue> _queue;
	SEL _selector;
	BOOL _wakeDevice;
	BOOL _useCurrentRunLoop;
	id _userInfo;

}

@property (nonatomic,retain) id userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain,readonly) NSDate * fireDate; 
-(void)setUserInfo:(id)arg1 ;
-(NSDate *)fireDate;
-(void)_reschedulePCPersistentTimer;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7 ;
-(id)userInfo;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 ;
-(id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 queue:(id)arg8 ;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(void)invalidate;
-(void)setFireTimeInterval:(double)arg1 ;
-(void)dealloc;
@end

