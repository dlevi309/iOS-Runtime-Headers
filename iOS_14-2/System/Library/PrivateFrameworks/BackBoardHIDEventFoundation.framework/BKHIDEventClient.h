/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, BKHIDEventClientDelegate;
@class NSObject, BSMachPortSendRight, BSProcessDeathWatcher, BSPortDeathSentinel, NSString;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<BKHIDEventClientDelegate> _queue_delegate;
	BSMachPortSendRight* _queue_sendRight;
	BSProcessDeathWatcher* _queue_pidWatcher;
	BSPortDeathSentinel* _queue_portSentinel;
	NSString* _queue_procName;
	int _queue_pid;
	BOOL _queue_invalidated;

}

@property (assign,nonatomic,__weak) id<BKHIDEventClientDelegate> delegate; 
@property (nonatomic,readonly) int pid;                                                 //@synthesize queue_pid=_queue_pid - In the implementation block
@property (nonatomic,readonly) BSMachPortSendRight * sendRight;                         //@synthesize queue_sendRight=_queue_sendRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 ;
-(int)pid;
-(id)init;
-(id<BKHIDEventClientDelegate>)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_deathBySendRight;
-(BSMachPortSendRight *)sendRight;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 ;
-(void)_queue_invalidate;
-(void)setDelegate:(id<BKHIDEventClientDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 processName:(id)arg4 ;
-(void)_queue_performDelegateCallout:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)_deathByPid;
-(void)dealloc;
@end

