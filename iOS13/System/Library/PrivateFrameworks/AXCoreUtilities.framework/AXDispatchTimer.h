/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface AXDispatchTimer : NSObject {

	BOOL _active;
	BOOL _pending;
	BOOL _cancelled;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _useWallTime;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	NSString* _label;
	/*^block*/id _processBlock;
	/*^block*/id _cancelBlock;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;                                           //@synthesize pending=_pending - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (nonatomic,copy) id processBlock;                                                           //@synthesize processBlock=_processBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) NSString * label;                                                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,nonatomic) BOOL useWallTime;                                                        //@synthesize useWallTime=_useWallTime - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isPending;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)setCancelled:(BOOL)arg1 ;
-(void)_reallyCancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(BOOL)useWallTime;
-(void)setPending:(BOOL)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setProcessBlock:(id)arg1 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setUseWallTime:(BOOL)arg1 ;
-(id)processBlock;
@end

