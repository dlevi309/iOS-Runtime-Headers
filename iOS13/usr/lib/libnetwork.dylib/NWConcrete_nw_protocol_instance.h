/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_instance.h>

@protocol OS_nw_endpoint, OS_nw_parameters, OS_nw_array, OS_nw_path_flow_registration;
@class NWConcrete_nw_protocol_definition, NSObject, NSString;

@interface NWConcrete_nw_protocol_instance : NSObject <OS_nw_protocol_instance> {

	NWConcrete_nw_protocol_definition* parent_definition;
	nw_protocol_callbacks* callbacks;
	nw_protocol* protocol;
	nw_listen_protocol* listen_handler;
	void* destroy_timer;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	unsigned long long reserve_header_size;
	unsigned long long reserve_footer_size;
	unsigned long long maximum_content_size;
	unsigned protocol_outbound_data_limit;
	void* handle;
	nw_frame_array_s* inbound_frames;
	nw_frame_array_s* outbound_frames;
	nw_frame_array_s* pending_inbound_frames;
	unsigned pending_inbound_frame_count;
	unsigned pending_inbound_frame_bytes;
	nw_frame_array_s* pending_outbound_frames;
	NSObject*<OS_nw_array> outbound_data_requests;
	nw_hash_tableRef flows_table;
	nw_hash_tableRef custom_flow_mapping_table;
	unsigned long long last_accepted_flow;
	/*^block*/id wakeup;
	NSObject*<OS_nw_path_flow_registration> flow_registration;
	unsigned initialized : 1;
	unsigned started : 1;
	unsigned ready : 1;
	unsigned output_connected : 1;
	unsigned allow_buffering : 1;
	unsigned limit_outbound_data : 1;
	unsigned datagram : 1;
	unsigned supports_external_data : 1;
	unsigned link_flow_controlled : 1;
	unsigned waiting_for_link_flow_control : 1;
	unsigned processing_input : 1;
	unsigned processing_output : 1;
	unsigned waiting_for_listener_accept : 1;
	unsigned new_flow_is_control : 1;
	unsigned should_destroy : 1;
	unsigned input_acknowledged : 1;
	unsigned needs_output_available : 1;
	unsigned needs_finalize_output : 1;
	char log_str[84];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(nw_protocol*)getProtocolStructure;
@end

