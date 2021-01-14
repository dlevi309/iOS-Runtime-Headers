/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)nts_openDoor;
-(id)block;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)open;
-(void)handleEvent;
-(id<CNScheduler>)delayScheduler;
-(void)nts_letSomeoneIn;
-(unsigned long long)options;
-(CNUnfairLock *)resourceLock;
-(void)setScheduledToken:(id<CNCancelable>)arg1 ;
-(double)delay;
-(void)nts_closeDoor;
-(id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5 ;
-(BOOL)isSomeoneWaiting;
-(void)setSomeoneWaiting:(BOOL)arg1 ;
-(BOOL)nts_isDoorOpened;
-(id<CNScheduler>)downstreamScheduler;
-(void)nts_makeSomeoneWait;
-(void)dealloc;
-(id<CNCancelable>)scheduledToken;
@end

