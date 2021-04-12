/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSBaseXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BSActionListener : BSBaseXPCServer {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _queue_portToContextMap;

}
-(id)init;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)_queue_cleanupContext:(SCD_Struct_BS13*)arg1 withResponse:(id)arg2 ;
-(id)listenForResponseWithHandler:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)clearListenerForToken:(id)arg1 ;
@end

