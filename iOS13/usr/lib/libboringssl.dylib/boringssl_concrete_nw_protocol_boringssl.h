/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libboringssl.dylib/libboringssl.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_protocol_boringssl.h>

@protocol OS_nw_parameters, OS_nw_association, OS_dispatch_queue;
@class NSObject, NSString;

@interface boringssl_concrete_nw_protocol_boringssl : NSObject <OS_nw_protocol_boringssl> {

	nw_protocol* protocol;
	unsigned ref_cnt;
	/*function pointer*/void* read_func;
	/*function pointer*/void* write_func;
	nw_frame_array_s* input_frame_array;
	nw_frame_array_s* unassigned_input_frame_array;
	nw_frame_array_s* read_frame_array;
	nw_frame_array_s* finalized_output_frame_array;
	nw_frame_array_s* output_frame_array;
	nw_frame_array_s* output_initial_frame_array;
	nw_frame_array_s* output_early_frame_array;
	nw_frame_array_s* output_handshake_frame_array;
	nw_frame_array_s* output_application_frame_array;
	/*^block*/id message_writer;
	nw_protocol* initial_output_handler;
	nw_protocol* early_output_handler;
	nw_protocol* handshake_output_handler;
	nw_protocol* application_output_handler;
	NSObject*<OS_nw_parameters> parameters;
	void* handshake_timer;
	NSObject*<OS_nw_association> association;
	void* boringssl_ctx_handle;
	void* boringssl_bio;
	const char* address_string;
	NSObject*<OS_dispatch_queue> client_queue;
	/*^block*/id boringssl_prepare_block;
	unsigned input_frame_byte_count;
	int stack_error;
	unsigned message_mode : 1;
	unsigned trust_invalid_certs : 1;
	unsigned started_negotiation : 1;
	unsigned write_ready : 1;
	unsigned read_ready : 1;
	unsigned waiting_for_writable : 1;
	unsigned input_available_unacknowledged : 1;
	unsigned input_suspended : 1;
	unsigned servicing_reads : 1;
	unsigned server : 1;
	unsigned external_frames : 1;
	unsigned early_data_enabled : 1;
	unsigned did_receive_data_once : 1;
	unsigned output_protocol_supports_early_data : 1;
	unsigned received_connect : 1;
	char log_str[84];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end
