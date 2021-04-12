/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@end

