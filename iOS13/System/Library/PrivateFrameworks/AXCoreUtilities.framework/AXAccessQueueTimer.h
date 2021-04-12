/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
*/

#import <AXCoreUtilities/AXAccessQueueTimer.h>

@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(BOOL)isActive;
-(void)cancel;
-(BOOL)isPending;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer> {

	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _active;
	BOOL _accessQueueIsExternal;
	int _state;
	NSString* _label;
	AXAccessQueue* _accessQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
+(id)timerTargettingMainAccessQueue;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(void)cancel;
-(int)state;
-(void)setActive:(BOOL)arg1 ;
-(AXAccessQueue *)accessQueue;
-(void)setState:(int)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)isPending;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setAccessQueueIsExternal:(BOOL)arg1 ;
-(void)_reallyCancel;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 shouldTreatAsWritingBlock:(BOOL)arg3 ;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)accessQueueIsExternal;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
@end

