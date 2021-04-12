/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_nw_txt_record;
@class NSObject;

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint {

	char* service_name;
	char* service_type;
	char* service_domain;
	char* service_composite;
	NSObject*<OS_nw_txt_record> txt_record;

}
-(void)dealloc;
-(unsigned)type;
-(id)copyDictionary;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)initWithName:(const char*)arg1 type:(const char*)arg2 domain:(const char*)arg3 ;
@end

