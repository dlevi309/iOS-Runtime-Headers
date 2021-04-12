/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface NRMockXPCProxy : NSProxy {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _async;
	id _target;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithBlahBlahBlahTarget:(id)arg1 queue:(id)arg2 async:(BOOL)arg3 ;
@end

