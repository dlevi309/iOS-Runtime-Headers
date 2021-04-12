/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_path_parameters.h>

@protocol OS_nw_context, OS_nw_protocol_options, OS_nw_endpoint, OS_nw_interface, OS_nw_array;
@class NSObject, NSString;

@interface NWConcrete_nw_path_parameters : NSObject <OS_nw_path_parameters> {

	nw_parameters_path_value path_value;
	char* account_id;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_protocol_options> transport_options;
	NSObject*<OS_nw_protocol_options> internet_options;
	NSObject*<OS_nw_endpoint> local_address;
	NSObject*<OS_nw_interface> required_interface;
	NSObject*<OS_nw_array> transforms;
	nw_parameters_extended_objects* extended_objects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

