/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_options.h>

@protocol OS_xpc_object;
@class NWConcrete_nw_protocol_definition, NSObject, NSString;

@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options> {

	NWConcrete_nw_protocol_definition* definition;
	nw_protocol* protocol_handle;
	NSObject*<OS_xpc_object> legacy_parameters;
	char* log_id_str;
	unsigned short log_id_num;
	void* handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

