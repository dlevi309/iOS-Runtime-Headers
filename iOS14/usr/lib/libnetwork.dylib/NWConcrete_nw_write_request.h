/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_write_request.h>

@protocol OS_dispatch_data, OS_nw_content_context;
@class NWConcrete_nw_connection, NSObject, NSString;

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {

	NWConcrete_nw_write_request* next;
	NWConcrete_nw_write_request* tail;
	/*^block*/id completion;
	NWConcrete_nw_connection* connection;
	unsigned qos_class;
	NSObject*<OS_dispatch_data> data;
	NSObject*<OS_nw_content_context> context;
	NSObject*<OS_nw_content_context> original_message;
	unsigned long long consumed_bytes;
	double relative_priority;
	unsigned complete : 1;
	unsigned reported : 1;
	unsigned idempotent : 1;
	unsigned write_close : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

