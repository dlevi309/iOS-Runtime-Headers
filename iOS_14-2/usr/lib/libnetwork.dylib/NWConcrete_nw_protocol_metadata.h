/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_protocol_metadata.h>

@class NWConcrete_nw_protocol_definition, NSString;

@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata> {

	NWConcrete_nw_protocol_definition* definition;
	unsigned char identifier[16];
	void* handle;
	char* data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

