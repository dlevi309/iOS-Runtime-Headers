/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/nw_listener_inbox.h>

@interface nw_listener_inbox_socket : nw_listener_inbox {

	void* _source;
	int _sockfd_for_logging_only_do_not_close_or_use;
	int _sockfd_from_client;
	unsigned char _ipProtocol;
	unsigned char _listenUUID[16];

}
-(id)description;
-(BOOL)cancel;
-(BOOL)resume;
-(id)start;
-(BOOL)suspend;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSocket:(int)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 necpUUID:(unsigned char)arg3 ;
@end

