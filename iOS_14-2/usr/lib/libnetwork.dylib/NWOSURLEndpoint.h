/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSURLEndpoint : NWConcrete_nw_endpoint {

	CFURLRef url_ref;
	unsigned short port;
	char* url;
	char* scheme;
	char* hostname;
	char* path;
	char* sanitized_url;
	char url_hash[9];

}
-(const char*)domainForPolicy;
-(unsigned short)port;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(char*)createDescription:(BOOL)arg1 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)hostname;
-(unsigned)type;
-(id)copyDictionary;
-(void)dealloc;
@end

