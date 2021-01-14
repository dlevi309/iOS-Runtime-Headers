/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFClientLiteClientCommandHandling.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AFClientLiteInternal : NSObject <AFClientLiteClientCommandHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _commandHandler;

}
-(void)_handleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 commandHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

