/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSProtocolChecker, NSObject;

@interface IDSDaemonControllerForwarder : NSProxy {

	NSProtocolChecker* _protocol;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	int _priority;

}

@property (assign,nonatomic) int priority;                                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSProtocolChecker * protocol;                                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ivarQueue;                       //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSProtocolChecker *)protocol;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 ;
-(id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)remoteMessageQueue;
@end

