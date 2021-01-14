/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface OITSUDelayTimer : NSObject {

	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (setter=_setDispatchQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (setter=_setDispatchTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _dispatchTimer;              //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (assign,setter=_setCancelled:,getter=_isCancelled,nonatomic) BOOL _cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;                          //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
-(void)_reallyCancel;
-(NSObject*<OS_dispatch_queue>)_dispatchQueue;
-(void)_setCancelled:(BOOL)arg1 ;
-(id)init;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(BOOL)_isCancelled;
-(NSObject*<OS_dispatch_source>)_dispatchTimer;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(void)cancel;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)dealloc;
-(void)_setDispatchQueue:(id)arg1 ;
-(void)_setDispatchTimer:(id)arg1 ;
@end

