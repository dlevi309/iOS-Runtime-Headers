/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(char*)createDescription:(BOOL)arg1 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(unsigned)type;
-(id)copyDictionary;
@end

