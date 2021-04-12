/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_framer.h>

@protocol OS_nw_protocol_definition, OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_nw_dictionary, OS_nw_protocol_metadata, OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_framer : NSObject <OS_nw_framer> {

	NSObject*<OS_nw_protocol_definition> parent_definition;
	nw_protocol_callbacks* callbacks;
	nw_protocol* protocol;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_dictionary> connection_state;
	NSObject*<OS_nw_protocol_metadata> pending_inbound_message;
	/*^block*/id start;
	/*^block*/id parse_input;
	/*^block*/id write_output;
	/*^block*/id wakeup;
	/*^block*/id stop;
	/*^block*/id cleanup;
	/*^block*/id copy_metadata;
	unsigned long long handshake_milliseconds;
	unsigned long long handshake_rtt_milliseconds;
	nw_frame_array_s* inbound_frames;
	nw_frame_array_s* outbound_frames;
	unsigned long long input_needed;
	unsigned long long input_body_remaining;
	nw_frame_array_s* received_input_frames;
	nw_frame_array_s* pending_input_frames;
	unsigned pending_input_frame_count;
	NSObject*<OS_dispatch_data> output_data;
	/*^block*/id wakeup_block;
	nw_frame_array_s* received_output_frames;
	NSObject*<OS_nw_protocol_metadata> pending_output_message;
	BOOL pending_output_message_complete;
	unsigned pending_output_message_length;
	unsigned pending_output_frames;
	unsigned pending_output_cursor;
	unsigned short prepended_log_id_num;
	unsigned supports_external_data : 1;
	unsigned output_frame_as_message : 1;
	unsigned in_start : 1;
	unsigned called_start : 1;
	unsigned ready : 1;
	unsigned flow_controlled : 1;
	unsigned waiting_for_flow_control : 1;
	unsigned in_input_callout : 1;
	unsigned in_input_available : 1;
	unsigned new_input_available : 1;
	unsigned in_output_callout : 1;
	unsigned pending_input_should_mark_complete : 1;
	unsigned failed : 1;
	unsigned pass_through_input : 1;
	unsigned pass_through_output : 1;
	unsigned wait_for_early_data : 1;
	unsigned __pad_bits : 1;
	char log_str[84];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

