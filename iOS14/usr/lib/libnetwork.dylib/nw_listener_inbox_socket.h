/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/nw_listener_inbox.h>

@protocol OS_nw_fd_wrapper;
@class NSObject;

@interface nw_listener_inbox_socket : nw_listener_inbox {

	void* _source;
	NSObject*<OS_nw_fd_wrapper> _sockfd_wrapper_for_connection_group_only;
	int _sockfd_for_logging_only_do_not_close_or_use;
	int _sockfd_from_client;
	unsigned char _ipProtocol;
	unsigned char _listenUUID[16];

}
-(BOOL)suspend;
-(id)start;
-(id)description;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(BOOL)cancel;
-(BOOL)resume;
@end

