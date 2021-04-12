/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

typedef struct nw_protocol {
	unsigned char flow_id[16];
	nw_protocol_identifier identifier;
	nw_protocol_callbacks callbacks;
	nw_protocol output_handler;
	void handle;
	nw_protocol default_input_handler;
	void output_handler_context;
} nw_protocol;

typedef struct nw_frame_array_s {
	nw_frame tqh_first;
	nw_frame tqh_last;
} nw_frame_array_s;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

