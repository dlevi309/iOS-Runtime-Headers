/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFClientLiteClientCommandHandling.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _commandHandler;

}
-(void)dealloc;
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
@end

