/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {

	sockaddr_storage address;
	ether_addr ethernet_address;
	char* hostname;
	int original_fd;
	unsigned short priority;
	unsigned calculated_hostname : 1;

}
-(unsigned short)port;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(char*)createDescription:(BOOL)arg1 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)hostname;
-(unsigned)type;
-(unsigned short)priority;
-(id)copyDictionary;
-(void)setPriority:(unsigned short)arg1 ;
-(void)dealloc;
@end

