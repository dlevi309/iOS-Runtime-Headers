/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_ws_ping_request.h>

@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_ws_ping_request : NSObject <OS_nw_ws_ping_request> {

	NSObject*<OS_dispatch_data> contents;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id pong_handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithContents:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

