/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWConcrete_nw_srv_endpoint : NWConcrete_nw_endpoint {

	char* name;

}
-(void)dealloc;
-(unsigned)type;
-(id)copyDictionary;
-(id)initWithName:(const char*)arg1 ;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
@end

