/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_definition.h>

@class NSString;

@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition> {

	nw_protocol_identifier identifier;
	unsigned char unique_identifier[16];
	int variant;
	/*function pointer*/void* allocate_globals;
	/*function pointer*/void* deallocate_globals;
	/*function pointer*/void* allocate_instance_state;
	/*function pointer*/void* deallocate_instance_state;
	/*function pointer*/void* allocate_flow_state;
	/*function pointer*/void* deallocate_flow_state;
	/*function pointer*/void* allocate_options;
	/*function pointer*/void* copy_options;
	/*function pointer*/void* deallocate_options;
	/*function pointer*/void* check_equality_options;
	/*function pointer*/void* allocate_metadata;
	/*function pointer*/void* deallocate_metadata;
	/*function pointer*/void* create_reply;
	/*function pointer*/void* copy_original;
	/*function pointer*/void* set_original;
	/*function pointer*/void* copy_message_options;
	/*function pointer*/void* deallocate_cache_entry;
	/*function pointer*/void* should_flush_cache;
	/*function pointer*/void* initialize;
	/*function pointer*/void* destroy;
	/*function pointer*/void* handle_inbound;
	/*function pointer*/void* handle_outbound;
	/*function pointer*/void* handle_error;
	/*function pointer*/void* inbound_starting;
	/*function pointer*/void* inbound_stopping;
	/*function pointer*/void* outbound_starting;
	/*function pointer*/void* outbound_stopping;
	/*function pointer*/void* start;
	/*function pointer*/void* stop;
	/*function pointer*/void* link_state;
	/*function pointer*/void* copy_metadata;
	/*function pointer*/void* copy_establishment_report;
	/*function pointer*/void* framer_create;
	/*^block*/id framer_start;
	unsigned custom_flow_map_key_size;
	unsigned framer : 1;
	unsigned supports_replies : 1;
	unsigned message_is_stream : 1;
	unsigned receive_single_message : 1;
	unsigned __pad_bits : 4;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
@end

