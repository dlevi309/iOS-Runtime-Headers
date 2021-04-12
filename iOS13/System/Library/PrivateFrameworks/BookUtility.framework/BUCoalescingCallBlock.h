/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSMutableArray *)callbacks;
-(void)_invoke;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(id)notifyBlock;
-(void)setNotifyBlock:(id)arg1 ;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(double)maximumDelay;
-(double)coalescingDelay;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(/*^block*/id)arg4 ;
-(void)setCoalescingDelay:(double)arg1 ;
-(void)signalWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)notifyBlockDescription;
-(BOOL)isInvoking;
-(void)setNextMaxTime:(unsigned long long)arg1 ;
-(void)setNextCoalescingTime:(unsigned long long)arg1 ;
-(void)setInvoking:(BOOL)arg1 ;
-(unsigned long long)nextCoalescingTime;
-(id)notifyTimeoutBlock;
-(unsigned short)notifyTimeoutDurationSeconds;
-(void)_invokeIfNotInProgress;
-(void)_coalescingTimeExpired:(unsigned long long)arg1 ;
-(void)setMaximumDelay:(double)arg1 ;
-(void)_maxTimeExpired:(unsigned long long)arg1 ;
-(id)initWithNotifyBlock:(/*^block*/id)arg1 blockDescription:(id)arg2 ;
-(void)setNotifyTimeoutBlock:(id)arg1 ;
-(void)setNotifyTimeoutDurationSeconds:(unsigned short)arg1 ;
-(unsigned long long)nextMaxTime;
-(void)setNotifyBlockDescription:(NSString *)arg1 ;
@end

