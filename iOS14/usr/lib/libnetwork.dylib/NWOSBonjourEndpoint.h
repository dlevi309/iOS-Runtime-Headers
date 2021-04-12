/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_nw_txt_record;
@class NSObject;

@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {

	char* service_name;
	char* service_type;
	char* service_domain;
	char* service_composite;
	NSObject*<OS_nw_txt_record> txt_record;

}
-(const char*)domainForPolicy;
-(void)setTxtRecord:(id)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(char*)createDescription:(BOOL)arg1 ;
-(id)txtRecord;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(unsigned)type;
-(id)copyDictionary;
-(void)dealloc;
@end

