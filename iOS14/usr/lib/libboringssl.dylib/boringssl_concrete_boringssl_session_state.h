/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libobjc.A.dylib/OS_boringssl_session_state.h>

@class NSString;

@interface boringssl_concrete_boringssl_session_state : NSObject <OS_boringssl_session_state> {

	unsigned char used_extended_master_secret;
	sockaddr_in_4_6 remote_address;
	char* serialized_session;
	unsigned long long serialized_session_length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

