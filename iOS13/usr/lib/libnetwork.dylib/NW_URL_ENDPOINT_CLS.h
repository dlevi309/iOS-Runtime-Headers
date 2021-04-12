/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NW_URL_ENDPOINT_CLS : NWConcrete_nw_endpoint {

	CFURLRef url_ref;
	unsigned short port;
	char* url;
	char* scheme;
	char* hostname;
	char* path;
	char* sanitized_url;
	char url_hash[9];

}
-(void)dealloc;
-(unsigned)type;
-(id)copyDictionary;
-(id)initWithURL:(const char*)arg1 ;
-(unsigned short)port;
-(const char*)hostname;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
@end

