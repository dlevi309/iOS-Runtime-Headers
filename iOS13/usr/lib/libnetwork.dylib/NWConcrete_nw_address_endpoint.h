/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWConcrete_nw_address_endpoint : NWConcrete_nw_endpoint {

	sockaddr_storage address;
	ether_addr ethernet_address;
	char* hostname;
	unsigned calculated_hostname : 1;

}
-(void)dealloc;
-(unsigned)type;
-(id)copyDictionary;
-(unsigned short)port;
-(const char*)hostname;
-(id)initWithAddress:(const sockaddr*)arg1 overridePort:(const char*)arg2 ;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
@end

