/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libobjc.A.dylib/OS_nw_read_request.h>

@protocol OS_dispatch_data, OS_nw_content_context, OS_nw_error, OS_nw_array;
@class NWConcrete_nw_connection, NSObject, NSString;

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {

	NWConcrete_nw_read_request* next;
	/*^block*/id data_completion;
	/*^block*/id data_multiple_completion;
	/*^block*/id buffer_completion;
	NWConcrete_nw_connection* connection;
	unsigned qos_class;
	int variant;
	unsigned long long min;
	unsigned long long max;
	unsigned long long progress;
	char* buffer;
	NSObject*<OS_dispatch_data> data;
	NSObject*<OS_nw_content_context> context;
	NSObject*<OS_nw_content_context> repliable_message;
	NSObject*<OS_nw_error> error;
	NSObject*<OS_nw_array> read_array;
	unsigned reported : 1;
	unsigned is_complete : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

