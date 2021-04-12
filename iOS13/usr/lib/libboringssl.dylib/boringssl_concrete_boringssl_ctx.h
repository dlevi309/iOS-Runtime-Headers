/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libboringssl.dylib
*/

#import <libboringssl.dylib/libboringssl.dylib-Structs.h>
#import <libobjc.A.dylib/OS_boringssl_ctx.h>

@protocol OS_nw_context, OS_nw_association, OS_xpc_object, OS_nw_array, OS_dispatch_queue, OS_dispatch_data, OS_nw_protocol_options, OS_nw_protocol_metadata;
@class boringssl_concrete_nw_protocol_boringssl, NSObject, boringssl_concrete_boringssl_psk_cache, boringssl_concrete_boringssl_identity, NSString;

@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {

	boringssl_legacy_ctx* legacy_context;
	boringssl_concrete_nw_protocol_boringssl* boringssl_handle;
	NSObject*<OS_nw_context> async_context;
	NSObject*<OS_nw_association> association;
	SCD_Struct_bo2 selected_alpn_data;
	boringssl_concrete_boringssl_psk_cache* psk_cache;
	SCD_Struct_bo2 ssl_ocsp_response;
	int max_allowed_tls_version;
	int max_allowed_dtls_version;
	int min_allowed_tls_version;
	int min_allowed_dtls_version;
	int ssl_max_version;
	int ssl_min_version;
	int config;
	NSObject*<OS_xpc_object> alpn_protocols;
	NSObject*<OS_nw_array> callbacks;
	char* subject_name;
	char* experiment_identifier;
	boringssl_concrete_boringssl_identity* identity;
	NSObject*<OS_dispatch_queue> client_queue;
	NSObject*<OS_dispatch_queue> metrics_queue;
	/*^block*/id boringssl_message_block;
	/*^block*/id verify_block;
	NSObject*<OS_dispatch_queue> verify_queue;
	/*^block*/id challenge_block;
	NSObject*<OS_dispatch_queue> challenge_queue;
	/*^block*/id key_update_block;
	NSObject*<OS_dispatch_queue> key_update_queue;
	/*^block*/id session_update_block;
	NSObject*<OS_dispatch_queue> session_update_queue;
	NSObject*<OS_dispatch_queue> private_key_queue;
	/*^block*/id private_key_sign_block;
	/*^block*/id private_key_decrypt_block;
	sockaddr_in_4_6 remote_address;
	unsigned char connection_id[16];
	/*^block*/id alert_callback;
	/*^block*/id connected_callback;
	int ssl_state;
	BOOL message_callback_in_progress;
	int callback_message_type;
	int current_handshake_state;
	boringssl_ctx_alert ssl_alert;
	NSObject*<OS_nw_array> pending_handshake_callbacks;
	int peer_trust;
	unsigned long long handshake_timer_fires;
	unsigned short certificate_compression_algorithm;
	SSLCertificate* ssl_peer_certs;
	_SecKey* peer_public_key;
	CFArrayRef peer_cert_chain;
	SecTrustRef peer_trust_ref;
	CFArrayRef acceptable_domain_name_list;
	NSObject*<OS_dispatch_data> session_state;
	ssl_stRef ssl_session;
	ssl_ctx_stRef ssl_ctx;
	/*^block*/id handshake_state_callback;
	unsigned long long handshake_start;
	unsigned long long handshake_end;
	unsigned long long current_flight_time;
	unsigned long long total_flight_time;
	unsigned short round_trips;
	unsigned long long outbound_byte_count;
	unsigned long long inbound_byte_count;
	unsigned long long write_stalls;
	unsigned long long read_stalls;
	unsigned long long async_count;
	NSObject*<OS_nw_protocol_options> options;
	NSObject*<OS_nw_protocol_metadata> metadata;
	unsigned long long minimum_rsa_key_size;
	unsigned long long minimum_ecdsa_key_size;
	unsigned minimum_signature_algorithm;
	unsigned started_flight : 1;
	unsigned cancelled : 1;
	unsigned sct_enable : 1;
	unsigned ocsp_enable : 1;
	unsigned server : 1;
	unsigned dtls : 1;
	unsigned fallback_mode : 1;
	unsigned false_start_enabled : 1;
	unsigned false_start_used : 1;
	unsigned allow_server_identity_change : 1;
	unsigned cert_lookup_done : 1;
	unsigned trust_invalid_certs : 1;
	unsigned session_ticket_enabled : 1;
	unsigned npn_enabled : 1;
	unsigned alpn_enabled : 1;
	unsigned resumed : 1;
	unsigned renewed : 1;
	unsigned flight_direction : 1;
	unsigned peer_verified : 1;
	unsigned peer_verification_in_progress : 1;
	unsigned received_certificate_request : 1;
	unsigned recovered_session : 1;
	unsigned tried_resumption : 1;
	unsigned offered_ticket : 1;
	unsigned early_data_enabled : 1;
	unsigned enforce_ev : 1;
	unsigned is_probe : 1;
	unsigned ats_enforced : 1;
	unsigned trust_evaluation_complete : 1;
	unsigned certificate_compression_enabled : 1;
	unsigned certificate_compression_used : 1;
	unsigned psk_negotiated : 1;
	unsigned grease_enabled : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
@end

