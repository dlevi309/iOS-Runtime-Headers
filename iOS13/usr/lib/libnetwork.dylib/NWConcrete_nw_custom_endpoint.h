/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(unsigned)type;
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(id)initWithType:(unsigned)arg1 resolver:(/*^block*/id)arg2 data:(id)arg3 ;
@end

