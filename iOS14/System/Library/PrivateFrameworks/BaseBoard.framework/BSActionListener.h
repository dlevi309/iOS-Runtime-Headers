/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSBaseXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BSActionListener : BSBaseXPCServer {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _queue_portToContextMap;

}
+(BOOL)_registersWithNotifyd;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)init;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)dealloc;
@end

