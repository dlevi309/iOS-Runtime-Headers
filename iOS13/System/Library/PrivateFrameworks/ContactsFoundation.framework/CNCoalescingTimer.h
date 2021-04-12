/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNCancelable, CNScheduler;
@class CNUnfairLock;

@interface CNCoalescingTimer : NSObject {

	BOOL _open;
	BOOL _someoneWaiting;
	id<CNCancelable> _scheduledToken;
	id<CNScheduler> _downstreamScheduler;
	CNUnfairLock* _resourceLock;
	id<CNScheduler> _delayScheduler;
	/*^block*/id _block;
	double _delay;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CNCancelable> scheduledToken;                          //@synthesize scheduledToken=_scheduledToken - In the implementation block
@property (nonatomic,readonly) CNUnfairLock * resourceLock;                            //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> delayScheduler;                         //@synthesize delayScheduler=_delayScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstreamScheduler;                    //@synthesize downstreamScheduler=_downstreamScheduler - In the implementation block
@property (nonatomic,copy,readonly) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) double delay;                                           //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL open;                                                //@synthesize open=_open - In the implementation block
@property (assign,getter=isSomeoneWaiting,nonatomic) BOOL someoneWaiting;              //@synthesize someoneWaiting=_someoneWaiting - In the implementation block
+(id)os_log;
-(void)dealloc;
-(unsigned long long)options;
-(BOOL)open;
-(double)delay;
-(id)block;
-(void)setOpen:(BOOL)arg1 ;
-(id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5 ;
-(void)handleEvent;
-(CNUnfairLock *)resourceLock;
-(BOOL)nts_isDoorOpened;
-(void)nts_letSomeoneIn;
-(void)nts_closeDoor;
-(void)nts_makeSomeoneWait;
-(void)setSomeoneWaiting:(BOOL)arg1 ;
-(id<CNScheduler>)downstreamScheduler;
-(BOOL)isSomeoneWaiting;
-(id<CNScheduler>)delayScheduler;
-(void)nts_openDoor;
-(void)setScheduledToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)scheduledToken;
@end

