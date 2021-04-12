/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

