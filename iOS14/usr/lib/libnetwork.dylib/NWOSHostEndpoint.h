/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_nw_txt_record;
@class NSObject;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {

	char* hostname;
	unsigned short port;
	unsigned short priority;
	unsigned short weight;
	NSObject*<OS_nw_txt_record> txt_record;

}
-(const char*)domainForPolicy;
-(unsigned short)port;
-(void)setWeight:(unsigned short)arg1 ;
-(void)setTxtRecord:(id)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(unsigned short)weight;
-(char*)createDescription:(BOOL)arg1 ;
-(id)txtRecord;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)hostname;
-(unsigned)type;
-(unsigned short)priority;
-(id)copyDictionary;
-(void)setPriority:(unsigned short)arg1 ;
-(void)dealloc;
@end

