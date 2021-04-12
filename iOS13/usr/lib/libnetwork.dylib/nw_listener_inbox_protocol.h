/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/nw_listener_inbox.h>

@interface nw_listener_inbox_protocol : nw_listener_inbox {

	nw_listen_protocol_callbacks* _listen_callbacks;
	nw_listen_protocol* _listen_protocol;

}
-(id)description;
-(BOOL)cancel;
-(id)initWithProtocol:(nw_protocol*)arg1 delegate:(id)arg2 ;
@end

