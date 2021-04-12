/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSString, NSMutableArray, NSObject;

@interface BUCoalescingCallBlock : NSObject {

	BOOL _pending;
	BOOL _invoking;
	unsigned short _notifyTimeoutDurationSeconds;
	double _coalescingDelay;
	double _maximumDelay;
	/*^block*/id _notifyBlock;
	/*^block*/id _notifyTimeoutBlock;
	unsigned long long _nextCoalescingTime;
	unsigned long long _nextMaxTime;
	NSString* _notifyBlockDescription;
	NSMutableArray* _callbacks;
	NSObject*<OS_dispatch_queue> _sync;
	NSObject*<OS_dispatch_group> _group;

}

@property (nonatomic,copy) id notifyBlock;                                             //@synthesize notifyBlock=_notifyBlock - In the implementation block
@property (nonatomic,copy) id notifyTimeoutBlock;                                      //@synthesize notifyTimeoutBlock=_notifyTimeoutBlock - In the implementation block
@property (assign,nonatomic) unsigned short notifyTimeoutDurationSeconds;              //@synthesize notifyTimeoutDurationSeconds=_notifyTimeoutDurationSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long nextCoalescingTime;                    //@synthesize nextCoalescingTime=_nextCoalescingTime - In the implementation block
@property (assign,nonatomic) unsigned long long nextMaxTime;                           //@synthesize nextMaxTime=_nextMaxTime - In the implementation block
@property (assign,nonatomic) BOOL pending;                                             //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isInvoking,nonatomic) BOOL invoking;                          //@synthesize invoking=_invoking - In the implementation block
@property (nonatomic,copy) NSString * notifyBlockDescription;                          //@synthesize notifyBlockDescription=_notifyBlockDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                               //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sync;                        //@synthesize sync=_sync - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double coalescingDelay;                                   //@synthesize coalescingDelay=_coalescingDelay - In the implementation block
@property (assign,nonatomic) double maximumDelay;                                      //@synthesize maximumDelay=_maximumDelay - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(NSObject*<OS_dispatch_group>)group;
-(NSString *)notifyBlockDescription;
-(void)_maxTimeExpired:(unsigned long long)arg1 ;
-(NSMutableArray *)callbacks;
-(void)setNotifyBlock:(id)arg1 ;
-(void)_coalescingTimeExpired:(unsigned long long)arg1 ;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 blockDescription:(id)arg2 ;
-(unsigned long long)nextCoalescingTime;
-(void)setNotifyBlockDescription:(NSString *)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)setNextCoalescingTime:(unsigned long long)arg1 ;
-(double)coalescingDelay;
-(void)_invokeIfNotInProgress;
-(void)_invoke;
-(id)description;
-(void)setNotifyTimeoutDurationSeconds:(unsigned short)arg1 ;
-(BOOL)pending;
-(void)signalWithCompletion:(/*^block*/id)arg1 ;
-(unsigned short)notifyTimeoutDurationSeconds;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(/*^block*/id)arg4 ;
-(void)setInvoking:(BOOL)arg1 ;
-(void)setNextMaxTime:(unsigned long long)arg1 ;
-(id)notifyTimeoutBlock;
-(double)maximumDelay;
-(void)setMaximumDelay:(double)arg1 ;
-(unsigned long long)nextMaxTime;
-(void)setCoalescingDelay:(double)arg1 ;
-(void)setNotifyTimeoutBlock:(id)arg1 ;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)notifyBlock;
-(BOOL)isInvoking;
@end

