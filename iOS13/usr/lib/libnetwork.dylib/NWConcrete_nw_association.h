/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_association.h>

@protocol OS_nw_endpoint, OS_nw_path_parameters, OS_nw_path_evaluator, OS_nw_path;
@class NSObject, NSString;

@interface NWConcrete_nw_association : NSObject <OS_nw_association> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_path_parameters> path_parameters;
	NSObject*<OS_nw_path_evaluator> evaluator;
	NSObject*<OS_nw_path> previous_path;
	nw_hash_tableRef handles;
	nw_hash_tableRef connected_flow_handles;
	nw_hash_tableRef cache_entries;
	void* deactivation_timer;
	unsigned dry_run_count;
	unsigned dormant : 1;
	unsigned in_force_update : 1;
	unsigned __pad_bits : 6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)redactedDescription;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

