/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_nw_txt_record;
@class NSObject;

@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint {

	char* hostname;
	unsigned short port;
	unsigned short priority;
	unsigned short weight;
	NSObject*<OS_nw_txt_record> txt_record;

}
-(void)dealloc;
-(unsigned)type;
-(id)copyDictionary;
-(unsigned short)port;
-(unsigned short)priority;
-(void)setPriority:(unsigned short)arg1 ;
-(void)setWeight:(unsigned short)arg1 ;
-(unsigned short)weight;
-(const char*)hostname;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)initWithHostname:(const char*)arg1 port:(unsigned short)arg2 ;
@end

