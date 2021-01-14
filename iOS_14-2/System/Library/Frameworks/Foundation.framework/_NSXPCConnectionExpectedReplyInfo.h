/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_semaphore;
@class NSBlock, NSObject, NSXPCInterface, NSDictionary;

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {

	NSBlock* _replyBlock;
	/*^block*/id _errorBlock;
	NSObject*<OS_dispatch_semaphore> _timeoutSemaphore;
	SEL _selector;
	NSXPCInterface* _interface;
	NSDictionary* _userInfo;
	unsigned long long _proxyNumber;

}
-(void)dealloc;
@end

