/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/


@protocol nw_listener_inbox_delegate, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters;
#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
@class NSObject, NSString;

@interface nw_listener_inbox : NSObject {

	NSObject*<nw_listener_inbox_delegate> _delegate;
	os_unfair_lock_s _lock;
	NSString* _description;
	NSObject*<OS_nw_endpoint> _local_endpoint;
	NSObject*<OS_nw_interface> _interface;
	NSObject*<OS_nw_parameters> _parameters;
	unsigned _suspended : 1;
	BOOL _multicast;

}

@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> local_endpoint;              //@synthesize local_endpoint=_local_endpoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_interface> interface;                  //@synthesize interface=_interface - In the implementation block
@property (assign,nonatomic) BOOL multicast;                                          //@synthesize multicast=_multicast - In the implementation block
-(BOOL)multicast;
-(BOOL)suspend;
-(BOOL)isSuspended;
-(id)start;
-(void)setMulticast:(BOOL)arg1 ;
-(NSObject*<OS_nw_endpoint>)local_endpoint;
-(NSObject*<OS_nw_interface>)interface;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)cancel;
-(BOOL)resume;
@end

