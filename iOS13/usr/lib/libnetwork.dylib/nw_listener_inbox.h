/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/


@protocol nw_listener_inbox_delegate, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters;
@class NSObject;

@interface nw_listener_inbox : NSObject {

	NSObject*<nw_listener_inbox_delegate> _delegate;
	NSObject*<OS_nw_endpoint> _local_endpoint;
	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_parameters> _parameters;
	unsigned _suspended : 1;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> local_endpoint;              //@synthesize local_endpoint=_local_endpoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_interface> interface;                  //@synthesize interface=_interface - In the implementation block
-(BOOL)cancel;
-(BOOL)resume;
-(id)start;
-(BOOL)isSuspended;
-(BOOL)suspend;
-(NSObject*<OS_nw_interface>)interface;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)local_endpoint;
@end

