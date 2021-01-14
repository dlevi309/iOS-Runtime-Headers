/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol OS_dispatch_queue;
@class NSXPCInterface, NSMutableArray, NSObject;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject {

	NSXPCInterface* _interface;
	NSMutableArray* _pendingInvocations;
	id _target;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCInterface * interface;                       //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingInvocations;              //@synthesize pendingInvocations=_pendingInvocations - In the implementation block
@property (nonatomic,retain) id target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
-(void)setTarget:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxy;
-(NSXPCInterface *)interface;
-(void)fulfillWithRemoteObject:(id)arg1 ;
-(id)initWithInterface:(id)arg1 queue:(id)arg2 ;
-(NSMutableArray *)pendingInvocations;
-(void)_assertVoidReturnValueInInvocation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)target;
-(void)failWithError:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPendingInvocations:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

