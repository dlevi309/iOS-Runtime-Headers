/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnetwork.dylib
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_context.h>

@protocol OS_dispatch_workloop, OS_nw_resolver_config;
@class NSObject, NSString;

@interface NWConcrete_nw_context : NSObject <OS_nw_context> {

	NSObject*<OS_dispatch_workloop> workloop;
	char* identifier;
	nw_context_cache* cache;
	nw_context_globals* globals;
	NWConcrete_nw_context* isolated_context;
	NSObject*<OS_nw_resolver_config> fallback_resolver_config;
	os_unfair_lock_s activate_lock;
	unsigned max_cache_entries;
	unsigned target_cache_entries;
	unsigned max_idle_cache_entries;
	int scheduling_mode;
	int privacy_level;
	unsigned isolate_protocol_stack : 1;
	unsigned isolate_protocol_cache : 1;
	unsigned is_implicit : 1;
	unsigned is_isolated_context : 1;
	unsigned activated : 1;
	unsigned required_encrypted_resolution : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)redactedDescription;
-(void)dealloc;
@end

